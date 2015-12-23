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
#include "QEvent.h"
#include "QLuaHelpers.h"
#include "QMain.h"
#include "QScene.h"
#include "QSystem.h"

USING_NS_CC;
USING_NS_QUICK;

//------------------------------------------------------------------------------
// CCScene2 - inherit from CQayer, with overrides
//------------------------------------------------------------------------------
CCScene2::~CCScene2()
{
//    QTrace( "CCScene2 destroyed");
}
//------------------------------------------------------------------------------
bool CCScene2::init( bool bAddScene)
{
    if (!CCLayer::init())
//    if (!CCScene::init())
        return false;

    // Add this scene to the scene stack if requested
    if ( bAddScene)
    {
        // Ensure our update() is called every frame
        scheduleUpdate();

        CCDirector::sharedDirector()->runWithScene((CCScene*)this);
    }

    // Force the CCNode to create a child list
    CCNode dn;
    addChild(&dn);
    removeChild(&dn, false);

    return true;
}
//------------------------------------------------------------------------------
void CCScene2::update(float dt)
{
    // Here's how we keep track of elapsed time, in a x-platform way
    g_QSystem->deltaTime = dt;
    g_QSystem->gameTime += dt;

    // All of our C++ update is driven through MainUpdate()

    MainUpdate(dt);
}
//------------------------------------------------------------------------------
void CCScene2::draw()
{
    g_QDirector->m_DrawingScene = this;

    if (m_QScene->m_UseBatching == false)
    {
        CCLayer::draw();
    }
    else
    {
        QAssert(m_QScene, "No QScene object");
        m_QScene->reset();
        CCLayer::draw();
        m_QScene->draw();
    }
}

#ifdef MARMALADE
static int GetSurfaceHeight()
{
    float angle = s3eSurfaceGetInt(S3E_SURFACE_DEVICE_BLIT_DIRECTION) * 90.0f;

    if ((angle == 90.0f) || (angle == 270.0f))
    {
        return s3eSurfaceGetInt(S3E_SURFACE_WIDTH);
    }
    return s3eSurfaceGetInt(S3E_SURFACE_HEIGHT);
}
#endif

//------------------------------------------------------------------------------
void CCScene2::ccTouchesBegan(CCSet* pSet, CCEvent* pEvent)
{
    CCSetIterator itB = pSet->begin();
    CCSetIterator itE = pSet->end();
//    int id = 1;
    for (; itB != itE; ++itB)
    {
    	CCTouch* pTouch = (CCTouch*)*itB;
        CCPoint liv = pTouch->getLocationInView();

#ifdef MARMALADE
        liv.y = IwGLGetInt(IW_GL_HEIGHT) - liv.y;
#else
        liv.y = CCEGLView::sharedOpenGLView()->getFrameSize().height - liv.y;
#endif

        // SEND EVENT TO LUA
	    LUA_EVENT_REUSE("touch");
        LUA_EVENT_SET_NUMBER("x", liv.x);
        LUA_EVENT_SET_NUMBER("y", liv.y);
        LUA_EVENT_SET_STRING("phase", "began");
        LUA_EVENT_SET_NUMBER("id", pTouch->getID() + 1);
	    LUA_EVENT_SEND();
    }
}
//------------------------------------------------------------------------------
void CCScene2::ccTouchesEnded(CCSet* pSet, CCEvent* pEvent)
{
    CCSetIterator itB = pSet->begin();
    CCSetIterator itE = pSet->end();
//    int id = 1;
    for (; itB != itE; ++itB)
    {
    	CCTouch* pTouch = (CCTouch*)*itB;
        CCPoint liv = pTouch->getLocationInView();

#ifdef MARMALADE
        liv.y = IwGLGetInt(IW_GL_HEIGHT) - liv.y;
#else
        liv.y = CCEGLView::sharedOpenGLView()->getFrameSize().height - liv.y;
#endif

        // SEND EVENT TO LUA
	    LUA_EVENT_REUSE("touch");
        LUA_EVENT_SET_NUMBER("x", liv.x);
        LUA_EVENT_SET_NUMBER("y", liv.y);
        LUA_EVENT_SET_STRING("phase", "ended");
        LUA_EVENT_SET_NUMBER("id", pTouch->getID() + 1);
	    LUA_EVENT_SEND();
    }
}
//------------------------------------------------------------------------------
void CCScene2::ccTouchesMoved(CCSet* pSet, CCEvent* pEvent)
{
    CCSetIterator itB = pSet->begin();
    CCSetIterator itE = pSet->end();
//    int id = 1;
    for (; itB != itE; ++itB)
    {
    	CCTouch* pTouch = (CCTouch*)*itB;
        CCPoint liv = pTouch->getLocationInView();

#ifdef MARMALADE
        liv.y = IwGLGetInt(IW_GL_HEIGHT) - liv.y;
#else
        liv.y = CCEGLView::sharedOpenGLView()->getFrameSize().height - liv.y;
#endif

        // SEND EVENT TO LUA
	    LUA_EVENT_REUSE("touch");
        LUA_EVENT_SET_NUMBER("x", liv.x);
        LUA_EVENT_SET_NUMBER("y", liv.y);
        LUA_EVENT_SET_STRING("phase", "moved");
        LUA_EVENT_SET_NUMBER("id", pTouch->getID() + 1);
	    LUA_EVENT_SEND();
    }
}
//------------------------------------------------------------------------------
void CCScene2::didAccelerate(CCAcceleration* pAccelerationValue)
{
    static double lastX = 0.0;
    static double lastY = 0.0;
    static double lastZ = 0.0;

    // Only send an event if the reading has changed
    if  (
        (pAccelerationValue->x != lastX) ||
        (pAccelerationValue->y != lastY) ||
        (pAccelerationValue->z != lastZ)
        )
    {
        lastX = pAccelerationValue->x;
        lastY = pAccelerationValue->y;
        lastZ = pAccelerationValue->z;

        // SEND EVENT TO LUA
	    LUA_EVENT_REUSE("accelerometer");
        LUA_EVENT_SET_NUMBER("x", (float)pAccelerationValue->x);
        LUA_EVENT_SET_NUMBER("y", (float)pAccelerationValue->y);
        LUA_EVENT_SET_NUMBER("z", (float)pAccelerationValue->z);
	    LUA_EVENT_SEND();
    }
}
//------------------------------------------------------------------------------
void CCScene2::keyBackClicked()
{
    // SEND EVENT TO LUA
	LUA_EVENT_REUSE("key");
    LUA_EVENT_SET_NUMBER("keyCode", key::back);
    LUA_EVENT_SET_STRING("phase", "released");
	LUA_EVENT_SEND();
}
//------------------------------------------------------------------------------
void CCScene2::keyMenuClicked()
{
    // SEND EVENT TO LUA
	LUA_EVENT_REUSE("key");
    LUA_EVENT_SET_NUMBER("keyCode", key::menu);
    LUA_EVENT_SET_STRING("phase", "released");
	LUA_EVENT_SEND();
}

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QScene
//------------------------------------------------------------------------------
QScene::QScene()
{
	// Cocos stuff
	m_CCNode = new CCScene2;
    ((CCScene2*)m_CCNode)->m_QScene = this;

    // True to use batching. Defaults to false
    m_UseBatching = false;
}
//------------------------------------------------------------------------------
QScene::~QScene()
{
//    QTrace( "QScene destroyed");
}
//------------------------------------------------------------------------------
void QScene::_init( bool bAddScene)
{
    ((CCScene2*)m_CCNode)->init( bAddScene);
}
//------------------------------------------------------------------------------
QSceneTextureBatch* QScene::AddTextureBatch(cocos2d::CCTexture2D* pCCTex)
{
    QSceneTextureBatch* pSTB = new QSceneTextureBatch(pCCTex);
    m_TextureBatches.push_back(pSTB);
    return pSTB;
}
//------------------------------------------------------------------------------
QSceneTextureBatch* QScene::GetTextureBatch(cocos2d::CCTexture2D* pCCTex)
{
    std::vector<QSceneTextureBatch*>::iterator itB = m_TextureBatches.begin();
    std::vector<QSceneTextureBatch*>::iterator etB = m_TextureBatches.end();
    for (; itB != etB; ++itB)
    {
        if ((*itB)->m_CCTex == pCCTex)
            return *itB;
    }
    return NULL;
}
//------------------------------------------------------------------------------
void QScene::draw()
{
    std::vector<QSceneTextureBatch*>::iterator itB = m_TextureBatches.begin();
    std::vector<QSceneTextureBatch*>::iterator etB = m_TextureBatches.end();
    for (; itB != etB; ++itB)
        (*itB)->draw();
}
//------------------------------------------------------------------------------
void QScene::reset()
{
    std::vector<QSceneTextureBatch*>::iterator itB = m_TextureBatches.begin();
    std::vector<QSceneTextureBatch*>::iterator etB = m_TextureBatches.end();
    for (; itB != etB; ++itB)
        (*itB)->m_AtlasIndex = 0;
}

QUICK_NAMESPACE_END;
