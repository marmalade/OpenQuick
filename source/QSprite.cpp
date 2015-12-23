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
#include "QScene.h"
#include "QSceneTextureBatch.h"
#include "QSprite.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

// From CCSprite.cpp
#if CC_SPRITEBATCHNODE_RENDER_SUBPIXEL
#define RENDER_IN_SUBPIXEL
#else
#define RENDER_IN_SUBPIXEL(__ARGS__) (ceil(__ARGS__))
#endif

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// CCSprite2
//------------------------------------------------------------------------------
void CCSprite2::drawMain()
{
    QScene* pScene = g_QDirector->m_DrawingScene->m_QScene;
    QAssert(pScene, "No QScene object");
    if (pScene->m_UseBatching == false)
    {
        CCSprite::draw();
        return;
    }

    // Batching code

    CCTexture2D* pCCTex = getTexture();
    QSceneTextureBatch* pSTB = pScene->GetTextureBatch(pCCTex);
    if (!pSTB)
    {
        pSTB = pScene->AddTextureBatch(pCCTex);
        pSTB->m_FirstSprite = this; // TODO, THINK ABOUT THIS IN TERMS OF SPRITE LIFECYCLE?
    }

    // The CCSprite's texture must point to the texture of the batch's atlas
    m_pobTextureAtlas = pSTB;
    m_pobTexture = pSTB->getTexture();

    // Code dup'd from CCSprite::updateTransform
    // This writes the vertex coords into the atlas's array
    
    // Calculate transform to WORLD (was transform to BATCH)
    //m_transformToBatch = nodeToParentTransform();
    CCAffineTransform xform = nodeToWorldTransform();

    CCSize size = m_obRect.size;

    float x1 = m_obOffsetPosition.x;
    float y1 = m_obOffsetPosition.y;

    float x2 = x1 + size.width;
    float y2 = y1 + size.height;
    float x = xform.tx;
    float y = xform.ty;

    float cr = xform.a;
    float sr = xform.b;
    float cr2 = xform.d;
    float sr2 = -xform.c;
    float ax = x1 * cr - y1 * sr2 + x;
    float ay = x1 * sr + y1 * cr2 + y;

    float bx = x2 * cr - y1 * sr2 + x;
    float by = x2 * sr + y1 * cr2 + y;

    float cx = x2 * cr - y2 * sr2 + x;
    float cy = x2 * sr + y2 * cr2 + y;

    float dx = x1 * cr - y2 * sr2 + x;
    float dy = x1 * sr + y2 * cr2 + y;

    m_sQuad.bl.vertices = vertex3( RENDER_IN_SUBPIXEL(ax), RENDER_IN_SUBPIXEL(ay), m_fVertexZ );
    m_sQuad.br.vertices = vertex3( RENDER_IN_SUBPIXEL(bx), RENDER_IN_SUBPIXEL(by), m_fVertexZ );
    m_sQuad.tl.vertices = vertex3( RENDER_IN_SUBPIXEL(dx), RENDER_IN_SUBPIXEL(dy), m_fVertexZ );
    m_sQuad.tr.vertices = vertex3( RENDER_IN_SUBPIXEL(cx), RENDER_IN_SUBPIXEL(cy), m_fVertexZ );

    // Write vertices to atlas array
    m_uAtlasIndex = pSTB->m_AtlasIndex++;
    m_pobTextureAtlas->updateQuad(&m_sQuad, m_uAtlasIndex);
}
//------------------------------------------------------------------------------
void CCSprite2::drawSetup()
{
    CC_NODE_DRAW_SETUP();
//    ccGLBlendFunc(m_blendFunc.src, m_blendFunc.dst);
}
//------------------------------------------------------------------------------
void CCSprite2::draw()
{
    // Set clipping
    float clip_x = 0.0f;
    float clip_y = 0.0f;
    float clip_w = 0.0f;
    float clip_h = 0.0f;

    QNode *node = m_Sprite;
    while ((clip_w == 0.0f || clip_h == 0.0f) && node != NULL)
    {
        clip_x = node->clipX;
        clip_y = node->clipY;
        clip_w = node->clipW;
        clip_h = node->clipH;

        node = node->m_Parent;
    }

    if (clip_w > 0.0f && clip_h > 0.0f)
        QDirector::SetClippingRect( clip_x, clip_y, clip_w, clip_h);

    // Call out main draw function, which is dup'ed from Cocos2dx
    drawMain();

    // Reset clipping
    if (clip_w > 0.0f && clip_h > 0.0f)
        QDirector::ResetClippingRect();
 
    // Main debug draw
    if (m_Sprite->debugDraw == true)
    {
        QVec2 vertices[4]={
            QVec2(m_sQuad.tl.vertices.x,m_sQuad.tl.vertices.y),
            QVec2(m_sQuad.bl.vertices.x,m_sQuad.bl.vertices.y),
            QVec2(m_sQuad.br.vertices.x,m_sQuad.br.vertices.y),
            QVec2(m_sQuad.tr.vertices.x,m_sQuad.tr.vertices.y),
        };
        QDirector::DrawColor4F(m_Sprite->debugDrawColor.r, m_Sprite->debugDrawColor.g, m_Sprite->debugDrawColor.b, 1);
        QDirector::DrawPolyVert2F((const ccVertex2F*)vertices, 4, true);
    }
    if (m_Sprite->debugDrawTextureRegion == true)
    {
        // draw texture box
        CCSize s = this->getTextureRect().size;
        CCPoint offsetPix = this->getOffsetPosition();
        CCPoint vertices[4] = {
            ccp(offsetPix.x,offsetPix.y), ccp(offsetPix.x+s.width,offsetPix.y),
            ccp(offsetPix.x+s.width,offsetPix.y+s.height), ccp(offsetPix.x,offsetPix.y+s.height)
        };
        QDirector::DrawColor4F(1,0.75,0,1); // orange
        QDirector::DrawPolyVert2F((const ccVertex2F*)vertices, 4, true);
    }

    // Physics draw
    if  (
        (m_Sprite->physics) &&
        (physics::g_Sim->debugDraw)
        )
        m_Sprite->physics->draw();
}

//------------------------------------------------------------------------------
// QSprite
//------------------------------------------------------------------------------
QSprite::QSprite(bool createCCNode)
{
    xFlip = false;
    yFlip = false;
    uvRect.x = uvRect.y = 0.0f;
    uvRect.w = uvRect.h = 1.0f;

    blendMode = ""; // empty string means we get blendMode from the associated QAtlas
    timeScale = 1.0f;
    raisesAnimEvents = false;
    debugDrawTextureRegion = false;

	// Cocos stuff
	if (createCCNode == true)
    {
	    m_CCNode = new CCSprite2(this);
	    ((CCSprite*)m_CCNode)->init();
        m_CCNode->setAnchorPoint(ccp(0, 0));
    }
	else
	{
		// By default, if we are not creating a CC node, we
		// flag that we're not managing any CC node
		m_ManageCCNodeLifeCycle = false;
	}
    m_pAnimation = NULL;
    m_pAnimateAction = NULL;
    m_pRunAction = NULL;
    
    m_pFilter = NULL;
}
//------------------------------------------------------------------------------
QSprite::QSprite(CCSprite *sprite)
{
    uvRect.x = uvRect.y = 0.0f;
    uvRect.w = uvRect.h = 1.0f;

    blendMode = ""; // empty string means we get blendMode from the associated QAtlas
    timeScale = 1.0f;
    raisesAnimEvents = false;
    debugDrawTextureRegion = false;

    m_CCNode = new CCSprite2(this);
    ((CCSprite*)m_CCNode)->initWithTexture(sprite->getTexture());
    m_CCNode->setAnchorPoint(ccp(0, 0));

    CCPoint pos = sprite->getPosition();
    x = pos.x;
    y = pos.y;
    CCRect bounds = sprite->boundingBox();
    w = bounds.size.width;
    h = bounds.size.height;
    xScale = sprite->getScaleX();
    yScale = sprite->getScaleY();
    xSkew = sprite->getSkewX();
    ySkew = sprite->getSkewY();
    rotation = sprite->getRotation();
    xFlip = sprite->isFlipX();
    yFlip = sprite->isFlipY();

    m_pAnimation = NULL;
    m_pAnimateAction = NULL;
    m_pRunAction = NULL;

    m_pFilter = NULL;
}
//------------------------------------------------------------------------------
QSprite::~QSprite()
{
    CC_SAFE_DELETE(m_pFilter);
    
    if ( m_pAnimateAction)
    {
        m_CCNode->stopAction(m_pRunAction);
        CC_SAFE_RELEASE_NULL(m_pRunAction);
    }
    CC_SAFE_RELEASE_NULL(m_pAnimateAction);

//    QTrace("QSprite destroyed");
}
//------------------------------------------------------------------------------
CCSpriteFrame* QSprite::GetSpriteFrame() const
{
    // Note: Return values from m_pAnimateAction->GetFrame() are 1-based
    int f = m_pAnimateAction ? (m_pAnimateAction->GetFrame()-1) : 0;
    QAssert(m_pAnimation, "Sprite has no animation");
    CCSpriteFrame* pSF = m_pAnimation->GetFrame(f); // frame input is 0-based
    return pSF;
}
//------------------------------------------------------------------------------
void QSprite::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
        return;

    QNode::sync();
    
    // TODO - IMPROVE PERFORMANCE... WE DON'T WANT TO SEARCH FOR THE TEXTURE IN THIS LIST EVERY FRAME!
	// Check we've loaded the texture
	if (m_CCNode)
	{
        CCSprite* pCCNode = (CCSprite*)m_CCNode;

        // Update the width and height from the content
        w = pCCNode->getContentSize().width;
        h = pCCNode->getContentSize().height;

        uint8 alpha8 = (uint8)(_alphaInternal * color.a); // multiply "alpha" by color.a component
        if (pCCNode->getOpacity() != alpha8)
            pCCNode->setOpacity( alpha8);

		pCCNode->setColor(*(ccColor3B*)&color); // cast ccColor4B* to ccColor3B* should be OK

		pCCNode->updateTransform();

        if (pCCNode->isFlipX() != xFlip)
            pCCNode->setFlipX(xFlip);

        if (pCCNode->isFlipY() != yFlip)
            pCCNode->setFlipY(yFlip);

        // Process the blend function setup
        cocos2d::ccBlendFunc blend_func;
        GetBlendFunction( &blend_func);
        pCCNode->setBlendFunc( blend_func);
        
        // Handle filter change
        if (m_LastFilter != filter.name)
        {
            CC_SAFE_DELETE(m_pFilter);
            m_pFilter = QFilter::create(&filter, pCCNode);
            m_LastFilter = filter.name;
        }

        if (m_pFilter)
            m_pFilter->sync();

        // UV rect
		if	(
			(uvRect.x != 0.0f) ||
			(uvRect.y != 0.0f) ||
			(uvRect.w != 1.0f) ||
			(uvRect.h != 1.0f)
			)
		{
			// Results will be probably be undesired if
			// sprite has an animation (strictly speaking, if
			// the SpriteFrame doesn't cover whole texture)
			CCSpriteFrame* pSF = GetSpriteFrame();
			CCRect sfr = pSF->getRectInPixels();
#ifdef _DEBUG
			if	(
				(sfr.origin.x != 0.0f) ||
				(sfr.origin.y != 0.0f) ||
                (sfr.size.width != pCCNode->getTexture()->getPixelsWide()) ||
				(sfr.size.height != pCCNode->getTexture()->getPixelsHigh())
				)
			{
                if  (
                    (uvRect.x < 0.0f) || (uvRect.x >= 1.0f) ||
                    (uvRect.y < 0.0f) || (uvRect.y >= 1.0f) ||
                    (uvRect.w < 0.0f) || (uvRect.w >= 1.0f) ||
                    (uvRect.h < 0.0f) || (uvRect.h >= 1.0f)
                    )
                {
    				QWarning("Sprite frame does not cover whole bitmap, and uvRect dimensions not within unit square: may have undesired results.");
                }
			}
#endif
	        CCRect tr(  sfr.origin.x + (uvRect.x * sfr.size.width),
                        sfr.origin.y + (uvRect.y * sfr.size.height),
                        uvRect.w * sfr.size.width,
                        uvRect.h * sfr.size.height);
			pCCNode->setTextureRect(tr);

            // Update Sprite w,h from SpriteFrame and uvRect
            w = sfr.size.width * uvRect.w;
            h = sfr.size.height * uvRect.h;
		}
	}
}
//------------------------------------------------------------------------------
QAtlas* QSprite::getAtlas() const
{
    CCSpriteFrame* pSF = GetSpriteFrame();
    cocos2d::CCTexture2D* pTex = pSF->getTexture();
    QAtlas* pAtlas = (QAtlas*)pTex->m_uID;
    return pAtlas;
}
//------------------------------------------------------------------------------
void QSprite::pause()
{
    if ( m_pAnimateAction != NULL)
    {
        m_pAnimateAction->SetPlaying( false);
    }
}

//------------------------------------------------------------------------------
void QSprite::_play( int startFrame, int loopCount)
{
    if ( m_pAnimateAction != NULL)
    {
        if ( startFrame > 0)
        {
            set_frame( startFrame);
        }
        m_pAnimateAction->SetLoopCount( loopCount);
        m_pAnimateAction->SetPlaying( true);
    }
}
//------------------------------------------------------------------------------
void QSprite::setFrame( int frame)
{
    set_frame( frame);
}

//------------------------------------------------------------------------------
void QSprite::set_isPlaying(bool value)
{
    if ( m_pAnimateAction != NULL)
    {
        m_pAnimateAction->SetPlaying( value);
    }
}
//------------------------------------------------------------------------------
bool QSprite::get_isPlaying(void)
{
    return (m_pAnimateAction != NULL) && (m_pAnimateAction->IsPlaying());
}
//------------------------------------------------------------------------------
void QSprite::setAnimation(QAnimation *anim)
{
    set_animation( anim);
}
//------------------------------------------------------------------------------
void QSprite::set_animation(QAnimation *anim)
{
    // Release the old animator
    if ( m_pAnimateAction)
    {
        m_CCNode->stopAction(m_pRunAction);
        CC_SAFE_RELEASE_NULL(m_pRunAction);
    }
    CC_SAFE_RELEASE_NULL(m_pAnimateAction);

    m_pAnimation = anim;

    CCSprite* pCCNode = (CCSprite*)m_CCNode;
    CCSpriteFrame *pSpriteFrame = m_pAnimation->GetFrame(0);
	pCCNode->setDisplayFrame(pSpriteFrame);

    w = pCCNode->getContentSize().width;
    h = pCCNode->getContentSize().height;

    if ( m_pAnimation->GetFrameCount() > 1)
    {
        m_pAnimateAction = new QAnimate();
        m_pAnimateAction->initWithAnimation( m_pAnimation->GetCCAnimation());
        m_pAnimateAction->SetTimeScale( timeScale);
        m_pRunAction = CCRepeatForever::create(m_pAnimateAction);
        m_pRunAction->retain();
        m_CCNode->runAction( m_pRunAction);
    }
}
//------------------------------------------------------------------------------
QAnimation *QSprite::get_animation(void)
{
    return m_pAnimation;
}
//------------------------------------------------------------------------------
void QSprite::set_frame(int frame)
{
    if ( m_pAnimateAction)
    {
        m_pAnimateAction->SetFrame( frame);

        // We don't want auto animation if we are manually setting the frame
        m_pAnimateAction->SetPlaying( false);

        // Update the width and height from the content
        CCSprite* pCCNode = (CCSprite*)m_CCNode;
        w = pCCNode->getContentSize().width;
        h = pCCNode->getContentSize().height;
    }
}
//------------------------------------------------------------------------------
int QSprite::get_frame(void)
{
    int frame = 1;

    if ( m_pAnimateAction)
    {
        frame = m_pAnimateAction->GetFrame();
    }

    return frame;
}
//------------------------------------------------------------------------------
void QSprite::GetBlendFunction( cocos2d::ccBlendFunc *blend) const
{
    if ( blendMode == "normal")
    {
        blend->src = GL_ONE; // assumes pre-multipled alpha
        blend->dst = GL_ONE_MINUS_SRC_ALPHA;
    }
    else if ( blendMode == "add")
    {
        blend->src = GL_ONE;
        blend->dst = GL_ONE;
    }
    else if ( blendMode == "multiply")
    {
        blend->src = GL_ZERO;
        blend->dst = GL_SRC_COLOR;
    }
    else if ( blendMode == "screen")
    {
        blend->src = GL_ONE;
        blend->dst = GL_ONE_MINUS_SRC_COLOR;
    }
    else
    {
        // Take from QAtlas blend mode
		if (m_pAnimation && m_pAnimateAction)
		{
			QAtlas* pAtlas = getAtlas();
			blend->src = pAtlas->_blendSrc;
			blend->dst = pAtlas->_blendDst;
		}
		else
		{
			// QSprite may just be a wrapper around CCSprite, with
			// no QAtlas etc. set up
			blend->src = ((CCSprite*)m_CCNode)->getBlendFunc().src;
			blend->dst = ((CCSprite*)m_CCNode)->getBlendFunc().dst;
		}
    }
}

QUICK_NAMESPACE_END;
