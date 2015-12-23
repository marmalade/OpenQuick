/*
 * (C) 2012-2013 Marmalade.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

//#include "AppDelegate.h"
#include "QDirector.h"
#include "QLabel.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

void CCLabelNode::draw()
{
    CCNode::draw();

    if ( m_Label->debugDraw)
    {
        // Render the text box
        float width = m_Label->GetCalculatedWidth();
        float height = m_Label->GetCalculatedHeight();

        QVec2 vertices[4]={
            QVec2(0,0),
            QVec2(0,height),
            QVec2(width,height),
            QVec2(width,0),
        };
        QDirector::DrawColor4F(1, 1, 1, 1);
        QDirector::DrawPolyVert2F((const ccVertex2F*)vertices, 4, true);

        // Render the border box
        vertices[0].x += m_Label->textBorderLeft;
        vertices[1].x += m_Label->textBorderLeft;
        vertices[2].x -= m_Label->textBorderRight;
        vertices[3].x -= m_Label->textBorderRight;

        vertices[0].y += m_Label->textBorderBottom;
        vertices[1].y -= m_Label->textBorderTop;
        vertices[2].y -= m_Label->textBorderTop;
        vertices[3].y += m_Label->textBorderBottom;

        QDirector::DrawColor4F(1, 1, 0, 1);
        QDirector::DrawPolyVert2F((const ccVertex2F*)vertices, 4, true);
    }
}

//------------------------------------------------------------------------------
// QLabel
//------------------------------------------------------------------------------
QLabel::QLabel()
{
    text = "<empty>";
	hAlignment = "left";
	vAlignment = "bottom";
    font = NULL;
    textTouchableBorder = 4;

    textBorderTop = 0;
    textBorderBottom = 0;
    textBorderLeft = 0;
    textBorderRight = 0;

    textXScale = 1.0f;
    textYScale = 1.0f;

	m_CachedHAlignment = hAlignment;
	m_CachedVAlignment = vAlignment;

    m_CachedTextBorderTop = textBorderTop;
    m_CachedTextBorderBottom = textBorderBottom;
    m_CachedTextBorderLeft = textBorderLeft;
    m_CachedTextBorderRight = textBorderRight;

    m_CachedTextXScale = textXScale;
    m_CachedTextYScale = textYScale;
}
//------------------------------------------------------------------------------
QLabel::~QLabel()
{
    m_CCNode->release();
//    QTrace("QLabel destroyed");
}
//------------------------------------------------------------------------------
void QLabel::init()
{
	// This needs to be called after the LUA variables have been submitted to
    // the object.  TODO we want to support TTF rendering, but not through the
    // CQabelTTF class as the implimentation they chose is teh suck!
	QAssert(font != NULL, "label font is null");

    // Create and retain the node
    CCLabelNode *node = new CCLabelNode(this);
    m_CCNode = node;
    m_CCNode->retain();

    // Set the width to the box width if one is specified
    float width = GetCalculatedWidth();
    float text_width = width - textBorderLeft - textBorderRight;
    float height = GetCalculatedHeight();

    // Get the alignment information
    cocos2d::CCTextAlignment halign_val;
    cocos2d::CCVerticalTextAlignment valign_val;
    GetCurrentAlignment( &halign_val, &valign_val);

    // Create the label and add it to the node (node holds the reference)
    m_CCFontNode = CCLabelBMFont::create( text.c_str(),
                                          font->get_fileName().c_str(),
                                          text_width,
                                          halign_val);
    m_CCNode->addChild(m_CCFontNode);

    // Calculate the size of the text if we aren't rendering into a box
    CalculateSize();

    // Now set the anchor and position of the CQabel
    SetAlignmentAnchors( halign_val, valign_val);

    m_CCNode->setPosition( x, y);
	m_CCNode->setAnchorPoint(ccp(xAnchor, yAnchor));

    m_CachedWidth = width;
    m_CachedHeight = height;
    m_CachedHAlignment = hAlignment;
	m_CachedVAlignment = vAlignment;

    m_CachedTextBorderTop = textBorderTop;
    m_CachedTextBorderBottom = textBorderBottom;
    m_CachedTextBorderLeft = textBorderLeft;
    m_CachedTextBorderRight = textBorderRight;

    m_CachedTextXScale = textXScale;
    m_CachedTextYScale = textYScale;
}
//------------------------------------------------------------------------------
void QLabel::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
    {
        return;
    }

    float old_w = w;
    float old_h = h;

    // Make sure w and h are correct values for the purposes of update
	if (m_CCNode)
	{
        w = GetCalculatedWidth();
        h = GetCalculatedHeight();
    }

    // Superclass
    QNode::sync();
    
    // Other
	if (m_CCNode)
	{
		if ( strcmp( m_CCFontNode->getString(), text.c_str()) != 0)
		{
			m_CCFontNode->setString( text.c_str());
            CalculateSize();
		}

        bool force_realignment = false;

        if ( m_CachedTextBorderTop != textBorderTop ||
             m_CachedTextBorderBottom != textBorderBottom ||
             m_CachedTextBorderLeft != textBorderLeft ||
             m_CachedTextBorderRight != textBorderRight ||
             m_CachedTextXScale != textXScale ||
             m_CachedTextYScale != textYScale)
        {
            force_realignment = true;

            m_CachedTextBorderTop = textBorderTop;
            m_CachedTextBorderBottom = textBorderBottom;
            m_CachedTextBorderLeft = textBorderLeft;
            m_CachedTextBorderRight = textBorderRight;

            m_CachedTextXScale = textXScale;
            m_CachedTextYScale = textYScale;
        }

        if ( m_CachedWidth != w ||
             m_CachedHeight != h ||
             force_realignment)
        {
            m_CachedWidth = w;
            m_CachedHeight = h;

            float text_width = w - textBorderLeft - textBorderRight;
			m_CCFontNode->setWidth( text_width);
            force_realignment = true;
		}

        if ( m_CachedHAlignment.compare( hAlignment) != 0 ||
             m_CachedVAlignment.compare( vAlignment) ||
             force_realignment)
		{
			m_CachedHAlignment = hAlignment;
			m_CachedVAlignment = vAlignment;
            
            // Get the alignment information
            cocos2d::CCTextAlignment halign_val;
            cocos2d::CCVerticalTextAlignment valign_val;
            GetCurrentAlignment( &halign_val, &valign_val);

            // Now set the anchor and position of the CCLabel
            SetAlignmentAnchors( halign_val, valign_val);

            CalculateSize();
        }

        // Color
        uint8 alpha8 = (uint8)(_alphaInternal * color.a); // multiply "alpha" by color.a component
        if ( m_CCFontNode->getOpacity() != alpha8)
        {
            m_CCFontNode->setOpacity( alpha8);
        }
        m_CCFontNode->setColor(*(ccColor3B*)&color); // cast ccColor4B* to ccColor3B* should be OK
	}

    // Reset the w and h values correctly
    w = old_w;
    h = old_h;

}
//------------------------------------------------------------------------------
void QLabel::GetCurrentAlignment(cocos2d::CCTextAlignment *h_alignment, cocos2d::CCVerticalTextAlignment *v_alignmnet) const
{
    // Get the horizontal alignment
    if ( stricmp( hAlignment.c_str(), "centre") == 0 ||
		 stricmp( hAlignment.c_str(), "center") == 0)
	{
		*h_alignment = cocos2d::kCCTextAlignmentCenter;
	}
    else if ( stricmp( hAlignment.c_str(), "right") == 0)
	{
		*h_alignment = cocos2d::kCCTextAlignmentRight;
	}
    else
    {
	    *h_alignment = cocos2d::kCCTextAlignmentLeft;
    }

    // Get the vertical alignment
	if ( stricmp( vAlignment.c_str(), "middle") == 0)
	{
		*v_alignmnet = cocos2d::kCCVerticalTextAlignmentCenter;
	}
    else if ( stricmp( vAlignment.c_str(), "top") == 0)
	{
		*v_alignmnet = cocos2d::kCCVerticalTextAlignmentTop;
	}
    else
    {
    	*v_alignmnet = cocos2d::kCCVerticalTextAlignmentBottom;
    }
}
//------------------------------------------------------------------------------
void QLabel::SetAlignmentAnchors( cocos2d::CCTextAlignment h_alignment, cocos2d::CCVerticalTextAlignment v_alignment)
{
    float x_anchor_value[3] = { 0.0f, 0.5f, 1.0f };
    float y_anchor_value[3] = { 1.0f, 0.5f, 0.0f };

    float x_anchor = x_anchor_value[h_alignment];
    float y_anchor = y_anchor_value[v_alignment];

    float width = GetCalculatedWidth() - textBorderLeft - textBorderRight;
    float height = GetCalculatedHeight() - textBorderTop - textBorderBottom;

    float pos_x = width * x_anchor + textBorderLeft;
    float pos_y = height * y_anchor + textBorderBottom;

    m_CCFontNode->setPosition( pos_x, pos_y);
    m_CCFontNode->setScaleX(textXScale);
    m_CCFontNode->setScaleY(textYScale);
    m_CCFontNode->setAnchorPoint(ccp(x_anchor, y_anchor));

    m_CCFontNode->setAlignment( h_alignment);
}
//------------------------------------------------------------------------------
void QLabel::CalculateSize( void)
{
    CCPoint bottom_left( 0.0f, 0.0f);
    CCSize content_size = m_CCFontNode->getContentSize();
    CCPoint top_right( content_size.width, content_size.height);

    CCAffineTransform to_parent = CCAffineTransformConcat(m_CCFontNode->nodeToParentTransform(), m_CCNode->nodeToParentTransform());

    bottom_left = CCPointApplyAffineTransform( bottom_left, to_parent);
    top_right = CCPointApplyAffineTransform( top_right, to_parent);
    
    xText = bottom_left.x;
    yText = bottom_left.y;
    wText = top_right.x - bottom_left.x;
    hText = top_right.y - bottom_left.y;
}
//------------------------------------------------------------------------------
bool QLabel::isPointInside(float px, float py)
{
    CCPoint pws(px, py);
    CCPoint pns = m_CCNode->convertToNodeSpace(pws);
    if (textTouchableBorder > 0.0f)
    {
        CCSize content = m_CCFontNode->getContentSize();
        CCPoint position = m_CCFontNode->getPosition();
        CCPoint anchor = m_CCFontNode->getAnchorPoint();
        position.x -= content.width * anchor.x;
        position.y -= content.height * anchor.y;

        CCRect bb(position.x - textTouchableBorder,
                  position.y - textTouchableBorder,
                  content.width + 2.0f * textTouchableBorder,
                  content.height + 2.0f * textTouchableBorder);

        return bb.containsPoint(pns);
    }
    else
    {
        float bw, bh;
        if (w > 0.0f)
            bw = w;
        else
        if (m_Parent)
            bw = m_Parent->w;
        else
            bw = 0.0f;

        if (h > 0.0f)
            bh = h;
        else
        if (m_Parent)
            bh = m_Parent->h;
        else
            bh = 0.0f;

        CCRect bb(0, 0, bw, bh);
        return bb.containsPoint(pns);
    }
    return false;
}

QUICK_NAMESPACE_END;
