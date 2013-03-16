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
#include "QLabel.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

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

	m_CachedHAlignment = hAlignment;
	m_CachedVAlignment = vAlignment;
}
//------------------------------------------------------------------------------
QLabel::~QLabel()
{
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
    m_CCNode = CCNode::create();
    m_CCNode->retain();

    // Set the width to the box width if one is specified
    float width = (w == 0.0f ? (m_Parent ? m_Parent->w : 0.0f) : w) - x;
    width = width < 0.0f ? 0.0f : width;
    float height = h == 0.0f ? (m_Parent ? m_Parent->h : 0.0f) : h;

    // Get the alignment information
    cocos2d::CCTextAlignment halign_val;
    cocos2d::CCVerticalTextAlignment valign_val;
    GetCurrentAlignment( &halign_val, &valign_val);

    // Create the label and add it to the node (node holds the reference)
    m_CCFontNode = CCLabelBMFont::create( text.c_str(),
                                          font->get_fileName().c_str(),
                                          width,
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
}
//------------------------------------------------------------------------------
void QLabel::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
    {
        return;
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

        float width = (w == 0.0f ? (m_Parent ? m_Parent->w : 0.0f) : w) - x;
        width = width < 0.0f ? 0.0f : width;
        float height = h == 0.0f ? (m_Parent ? m_Parent->h : 0.0f) : h;
        bool force_realignment = false;

        if ( m_CachedWidth != width ||
             m_CachedHeight != height)
        {
            m_CachedWidth = width;
            m_CachedHeight = height;
			m_CCFontNode->setWidth( width);
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
}
//------------------------------------------------------------------------------
void QLabel::GetCurrentAlignment(cocos2d::CCTextAlignment *h_alignment, cocos2d::CCVerticalTextAlignment *v_alignmnet) const
{
    // Get the horizontal alignment
    if ( strcasecmp( hAlignment.c_str(), "centre") == 0 ||
		 strcasecmp( hAlignment.c_str(), "center") == 0)
	{
		*h_alignment = cocos2d::kCCTextAlignmentCenter;
	}
    else if ( strcasecmp( hAlignment.c_str(), "right") == 0)
	{
		*h_alignment = cocos2d::kCCTextAlignmentRight;
	}
    else
    {
	    *h_alignment = cocos2d::kCCTextAlignmentLeft;
    }

    // Get the vertical alignment
	if ( strcasecmp( vAlignment.c_str(), "middle") == 0)
	{
		*v_alignmnet = cocos2d::kCCVerticalTextAlignmentCenter;
	}
    else if ( strcasecmp( vAlignment.c_str(), "top") == 0)
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

    float width = ((w == 0.0f ? (m_Parent ? m_Parent->w : 0.0f) : w) - x) / xScale;
    width = width < 0.0f ? 0.0f : width;
    float height = (h == 0.0f ? (m_Parent ? m_Parent->h : 0.0f) : h) / yScale;

    m_CCFontNode->setPosition( width * x_anchor, height * y_anchor);
    m_CCFontNode->setAnchorPoint(ccp(x_anchor, y_anchor));

    m_CCFontNode->setAlignment( h_alignment);
}
//------------------------------------------------------------------------------
void QLabel::CalculateSize( void)
{
/*    CCArray *desc = m_CCFontNode->getDescendants();

    if ( desc->count() > 0)
    {
        CCSprite *sprite = (CCSprite*)desc->objectAtIndex(0);
        CCPoint bottom_left( sprite->getPosition());
        CCPoint top_right( bottom_left);
        top_right.x += sprite->getContentSize().width;
        top_right.y += sprite->getContentSize().height;

        for ( unsigned int i = 1; i < desc->count(); i++)
        {
            sprite = (CCSprite*)desc->objectAtIndex(i);

            CCPoint this_bottom_left( sprite->getPosition());
            CCPoint this_top_right( this_bottom_left);
            this_top_right.x += sprite->getContentSize().width;
            this_top_right.y += sprite->getContentSize().height;

            if ( this_bottom_left.x < bottom_left.x)
            {
                bottom_left.x = this_bottom_left.x;
            }
            if ( this_bottom_left.y < bottom_left.y)
            {
                bottom_left.y = this_bottom_left.y;
            }
            if ( this_top_right.x > top_right.x)
            {
                top_right.x = this_top_right.x;
            }
            if ( this_top_right.y > top_right.y)
            {
                top_right.y = this_top_right.y;
            }
        }

        xText = bottom_left.x + m_CCFontNode->getPositionX();
        yText = bottom_left.y + m_CCFontNode->getPositionY();
        wText = top_right.x - bottom_left.x;
        hText = top_right.y - bottom_left.y;
    }

    CCRect aabb = m_CCFontNode->boundingBox();

    xText = aabb.origin.x;
    yText = aabb.origin.y;
    wText = aabb.size.width;
    hText = aabb.size.height;
*/
    CCPoint position = m_CCFontNode->getPosition();
    position.x *= xScale;
    position.y *= yScale;
    CCPoint anchor = m_CCFontNode->getAnchorPoint();
    CCSize content = m_CCFontNode->getContentSize();
    content.width *= xScale;
    content.height *= yScale;

    position.x -= content.width * anchor.x;
    position.y -= content.height * anchor.y;
    position.x += x;
    position.y += y;

    xText = position.x;
    yText = position.y;
    wText = content.width;
    hText = content.height;
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
