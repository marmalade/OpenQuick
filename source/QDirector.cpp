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

#include "QDirector.h"
#include "QLuaHelpers.h"
#include "QScene.h"
#include "QTransition.h"

#include "cocos2d.h"
#include "CCTransition.h"
#include "CCTransitionPageTurn.h"
#include "CCTransitionProgress.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;

QDirector* g_QDirector = NULL;

#define Q_TRANSITION_INCLUDE(str, cls) \
    if (_transitionType == str) \
    {\
        m_TransitionScene = cls::create(_transitionTime, incoming_cc_scene);\
    }\
    else

#define Q_OVERLAY_TRANSITION_CHECK(str, cls) \
    if (name == str)\
        pTransition = cls::create(t, scene);\
    else\

//------------------------------------------------------------------------------
// Creates an Overlay Transition 
//------------------------------------------------------------------------------
static CCTransitionScene* createOverlayTransition(std::string& name, float t, CCScene* scene, bool show)
{
    CCTransitionScene * pTransition = NULL;

    // Change with transition
    Q_OVERLAY_TRANSITION_CHECK("rotoZoom", QTransitionRotoZoom)
    Q_OVERLAY_TRANSITION_CHECK("jumpZoom", QTransitionJumpZoom)
    Q_OVERLAY_TRANSITION_CHECK("slideInL", QTransitionSlideInL)
    Q_OVERLAY_TRANSITION_CHECK("slideInR", QTransitionSlideInR)
    Q_OVERLAY_TRANSITION_CHECK("slideInB", QTransitionSlideInB)
    Q_OVERLAY_TRANSITION_CHECK("slideInT", QTransitionSlideInT)
    Q_OVERLAY_TRANSITION_CHECK("shrinkGrow", QTransitionShrinkGrow)
    Q_OVERLAY_TRANSITION_CHECK("flipX", QTransitionFlipX)
    Q_OVERLAY_TRANSITION_CHECK("flipY", QTransitionFlipY)
    Q_OVERLAY_TRANSITION_CHECK("flipAngular", QTransitionFlipAngular)
    Q_OVERLAY_TRANSITION_CHECK("zoomFlipX", QTransitionZoomFlipX)
    Q_OVERLAY_TRANSITION_CHECK("zoomFlipY", QTransitionZoomFlipY)
    Q_OVERLAY_TRANSITION_CHECK("zoomFlipAngular", QTransitionZoomFlipAngular)
    Q_OVERLAY_TRANSITION_CHECK("crossFade", QTransitionCrossFade)
    Q_OVERLAY_TRANSITION_CHECK("turnOffTiles", QTransitionTurnOffTiles) 
    Q_OVERLAY_TRANSITION_CHECK("splitCols", QTransitionSplitCols)
    Q_OVERLAY_TRANSITION_CHECK("splitRows", QTransitionSplitRows)
    Q_OVERLAY_TRANSITION_CHECK("fadeTR", QTransitionFadeTR)
    Q_OVERLAY_TRANSITION_CHECK("fadeBL", QTransitionFadeBL)
    Q_OVERLAY_TRANSITION_CHECK("fadeUp", QTransitionFadeUp)
    Q_OVERLAY_TRANSITION_CHECK("fadeDown", QTransitionFadeDown)
    Q_OVERLAY_TRANSITION_CHECK("progressRadialCCW", QTransitionProgressRadialCCW)
    Q_OVERLAY_TRANSITION_CHECK("progressRadialCW", QTransitionProgressRadialCW)
    Q_OVERLAY_TRANSITION_CHECK("progressHorizontal", QTransitionProgressHorizontal)
    Q_OVERLAY_TRANSITION_CHECK("progressVertical", QTransitionProgressVertical)
    Q_OVERLAY_TRANSITION_CHECK("progressInOut", QTransitionProgressInOut)
    Q_OVERLAY_TRANSITION_CHECK("progressOutIn", QTransitionProgressOutIn)
    Q_OVERLAY_TRANSITION_CHECK("fade", QTransitionFade)
    if (name == "pageTurn")
    {
        pTransition = QTransitionPageTurn::create(t, scene, show);
    }
    else
    {
        QWarning("Unknown overlay transition %s used", name.c_str());
    }

    return pTransition;
}
//------------------------------------------------------------------------------
// QDirector
//------------------------------------------------------------------------------
QDirector::QDirector()
{
    g_QDirector = this;

    _updateDisplayInfo( CCDirector::sharedDirector()->getWinSize().width,
                        CCDirector::sharedDirector()->getWinSize().height);

    nodesColor.set(0xff, 0xff, 0xff, 0xff);
    
    addNodesToScene = true;
    isAlphaInherited = true;

    // Fixed vertex data for closed circle: origin (0,0) and radius 100
    m_CircleNumVerts = 100;
    m_CircleVerts = new float[(m_CircleNumVerts+1) * 2];
    float* pCoord = m_CircleVerts;
    const float radius = 100.0f;
    for (int p = 0; p <= m_CircleNumVerts; p++)
    {
        float angle = p * PI * 2 / m_CircleNumVerts;
        float ca = cosf(angle);
        float sa = sinf(angle);
        *pCoord++ = ca * radius;
		*pCoord++ = sa * radius;
    }

    // Transition objects
    m_TransitionScene = NULL;
    _transitionScene = NULL;
    _transitionTime = 0.0f;
    _transitionType = "";

    _currentScene = NULL;
    
    m_OverlayTransitionScene = NULL;
    _overlayTransitionScene = NULL;
    _overlayTransitionTime = NULL;
    _overlayTransitionType = "";

    _overlayScene = NULL;

    _modalOverlay = false;

    m_DrawingScene = NULL;
}
//------------------------------------------------------------------------------
QDirector::~QDirector()
{
    g_QDirector = NULL;
}
//------------------------------------------------------------------------------
void QDirector::_updateDisplayInfo(float dw, float dh)
{
    // Update display variables, as specified
    displayWidth = dw;
    displayHeight = dh;
    displayCenterX = dw/2;
    displayCenterY = dh/2;
}
//------------------------------------------------------------------------------
void QDirector::drawLine(float x0, float y0, float x1, float y1)
{
    ccDrawLine(ccp(x0, y0), ccp(x1, y1));
}
//------------------------------------------------------------------------------
void QDirector::cleanupTextures()
{
    //QTrace("Cleaning up textures");

    // Remove any unused textures from the cache
   	CCTextureCache::sharedTextureCache()->removeUnusedTextures();
}
//------------------------------------------------------------------------------
void QDirector::startRendering()
{
    CCDirector::sharedDirector()->startRendering();
}
//------------------------------------------------------------------------------
QScene* QDirector::getCurrentScene()
{
    return _currentScene;
}
//------------------------------------------------------------------------------
void QDirector::RunScene()
{
    CCDirector* ccd = CCDirector::sharedDirector();
    CCScene* running_scene = ccd->getRunningScene();
    CCScene2* pDelegateScene = (CCScene2*)running_scene;

    bool changeOverlay = false;
    // Check if overlay is going to change its state
    if (_overlayTransitionScene)
    {
        bool isShowing = (_overlayScene == NULL);

        // Transition is not started yet
        if (m_OverlayTransitionScene == NULL)
        {            
            // Overlay with transition
            if (_overlayTransitionType.empty() == false)
            {
                CCScene * pNextScene = NULL;

                if (isShowing == false)
                {
                    // Create empty scene to replace overlay
                    pNextScene = CCScene::create();
                    pNextScene->init();
                    pNextScene->onEnter();
                    _overlayScene->isSynced = false;
                }
                else
                    pNextScene = (CCScene*)_overlayTransitionScene->m_CCNode;

                m_OverlayTransitionScene = createOverlayTransition(_overlayTransitionType, _overlayTransitionTime, pNextScene, isShowing);

                if (m_OverlayTransitionScene != NULL)
                {                   
                    // Setup transition 
                    m_OverlayTransitionScene->retain();
                    m_OverlayTransitionScene->onEnter();
                    m_OverlayTransitionScene->onEnterTransitionDidFinish();                    

                    ccd->setNotificationNode(m_OverlayTransitionScene);

                    _currentScene->isSynced = false;
                }
                else
                {
                    // invalid filter name
                    _overlayTransitionType.clear();

                    // Unable to create a transition then do instant change
                    if (isShowing == false)
                        pNextScene->release();

                    changeOverlay = true;
                }
            }
            else
                changeOverlay = true; // show overlay instantly
        }
        else
        {
            CCNode* pNotificationNode = ccd->getNotificationNode();

            // Transition finished
            if (pNotificationNode != m_OverlayTransitionScene)
            {
                m_OverlayTransitionScene->onExitTransitionDidStart();
                m_OverlayTransitionScene->onExit();
                m_OverlayTransitionScene->cleanup();

                CC_SAFE_RELEASE_NULL(m_OverlayTransitionScene);

                changeOverlay = true;
            }
        }
    }
    else
    {
        // Set overlay as delegate
        if (_overlayScene != NULL)
        {
            pDelegateScene = (CCScene2*)_overlayScene->m_CCNode;
        }
    }


    if (changeOverlay)
    {
        // Removing overlay
        if (_overlayScene)
        {
            _overlayScene->m_CCNode->onExit();
            _overlayScene->isSynced = true;
            _overlayScene->m_CCNode->unscheduleUpdate();
            ccd->setNotificationNode(NULL);

            _overlayTransitionScene = NULL;
            CallLUASideOverlayComplete();
        }

        _overlayScene = _overlayTransitionScene;
        _overlayTransitionScene = NULL;
        _currentScene->isSynced = true;

        // Adding overlay
        if (_overlayScene)
        {
            // It was an instant change
            if(_overlayTransitionType.empty())
                _overlayScene->m_CCNode->onEnter(); 
            
            if (_modalOverlay)
            {
                // Remove current scene from receiving notifications
                pDelegateScene->setTouchEnabled(false);
                pDelegateScene->setKeypadEnabled(false);
                pDelegateScene->setAccelerometerEnabled(false);                
            }

            // Enable all interactions for the overlay
            CCScene2 * pNode = (CCScene2*)_overlayScene->m_CCNode;            
            pNode->scheduleUpdate();
            ccd->setNotificationNode(pNode);
            pDelegateScene = pNode;

            _overlayScene->isSynced = true;            
        }
    }
    
    if (m_TransitionScene != NULL)
    {
        // We are currently in a scene transition7
        if (running_scene != m_TransitionScene)
        {
            // Hand off the transition
            CC_SAFE_RELEASE_NULL(m_TransitionScene);

            // Notify the LUA side that the transition is complete
            CallLUASideTransitionComplete();

            // Make sure the right scene gets accelerometer data
            //CCAccelerometer::sharedAccelerometer()->setDelegate((CCScene2*)_currentScene->m_CCNode);
            pDelegateScene = (CCScene2*)_currentScene->m_CCNode;

            // Re-enable the sync
            _currentScene->isSynced = true;
        }
        else
        {
            // running_scene is the Cocos2dx transition scene
//            pDelegateScene = (CCScene2*)_currentScene->m_CCNode;       
            pDelegateScene = (CCScene2*)_transitionScene->m_CCNode;       
        }
    }
    else
    {
        // NO TRANSITION
        // Ensure the cocos2d director is running a scene
        if ( running_scene == NULL)
        {
            // Should only happen if we get to update() before calling director:moveToScene()
            if ( _currentScene != NULL)
            {
                ccd->runWithScene((CCScene*)(_currentScene->m_CCNode));
                pDelegateScene = (CCScene2*)_currentScene->m_CCNode;
            }
        }
        else
        {
            // Get current and next scene
            QScene* pCurrScene = _currentScene;
            QScene* pNextScene = _transitionScene;
 
            if (pNextScene && (pNextScene != pCurrScene))
            {
                // We need to start a scene transition here
                CCScene* outgoing_cc_scene = (CCScene*)pCurrScene->m_CCNode;
                CCScene* incoming_cc_scene = (CCScene*)pNextScene->m_CCNode;

                // Default to a direct transition
                bool direct_transition = true;

                // Unschedule our current scene
                if (_transitionTime > 0.0f && _transitionType != "")
                {
                    // Change with transition
                    Q_TRANSITION_INCLUDE( "rotoZoom", CCTransitionRotoZoom)
                    Q_TRANSITION_INCLUDE( "jumpZoom", CCTransitionJumpZoom)
                    Q_TRANSITION_INCLUDE( "moveInL", CCTransitionMoveInL)
                    Q_TRANSITION_INCLUDE( "moveInR", CCTransitionMoveInR)
                    Q_TRANSITION_INCLUDE( "moveInT", CCTransitionMoveInT)
                    Q_TRANSITION_INCLUDE( "moveInB", CCTransitionMoveInB)
                    Q_TRANSITION_INCLUDE( "slideInL", CCTransitionSlideInL)
                    Q_TRANSITION_INCLUDE( "slideInR", CCTransitionSlideInR)
                    Q_TRANSITION_INCLUDE( "slideInB", CCTransitionSlideInB)
                    Q_TRANSITION_INCLUDE( "slideInT", CCTransitionSlideInT)
                    Q_TRANSITION_INCLUDE( "shrinkGrow", CCTransitionShrinkGrow)
                    Q_TRANSITION_INCLUDE( "flipX", CCTransitionFlipX)
                    Q_TRANSITION_INCLUDE( "flipY", CCTransitionFlipY)
                    Q_TRANSITION_INCLUDE( "flipAngular", CCTransitionFlipAngular)
                    Q_TRANSITION_INCLUDE( "zoomFlipX", CCTransitionZoomFlipX)
                    Q_TRANSITION_INCLUDE( "zoomFlipY", CCTransitionZoomFlipY)
                    Q_TRANSITION_INCLUDE( "zoomFlipAngular", CCTransitionZoomFlipAngular)
                    Q_TRANSITION_INCLUDE( "crossFade", CCTransitionCrossFade)
                    Q_TRANSITION_INCLUDE( "turnOffTiles", CCTransitionTurnOffTiles)
                    Q_TRANSITION_INCLUDE( "splitCols", CCTransitionSplitCols)
                    Q_TRANSITION_INCLUDE( "splitRows", CCTransitionSplitRows)
                    Q_TRANSITION_INCLUDE( "fadeTR", CCTransitionFadeTR)
                    Q_TRANSITION_INCLUDE( "fadeBL", CCTransitionFadeBL)
                    Q_TRANSITION_INCLUDE( "fadeUp", CCTransitionFadeUp)
                    Q_TRANSITION_INCLUDE( "fadeDown", CCTransitionFadeDown)
                    Q_TRANSITION_INCLUDE( "progressRadialCCW", CCTransitionProgressRadialCCW)
                    Q_TRANSITION_INCLUDE( "progressRadialCW", CCTransitionProgressRadialCW)
                    Q_TRANSITION_INCLUDE( "progressHorizontal", CCTransitionProgressHorizontal)
                    Q_TRANSITION_INCLUDE( "progressVertical", CCTransitionProgressVertical)
                    Q_TRANSITION_INCLUDE( "progressInOut", CCTransitionProgressInOut)
                    Q_TRANSITION_INCLUDE( "progressOutIn", CCTransitionProgressOutIn)
                    if (_transitionType == "fade")
                    {
                        // TODO: Fade colour verison
                        m_TransitionScene = CCTransitionFade::create(_transitionTime, incoming_cc_scene);
                    }
                    else
                    if (_transitionType == "pageTurn")
                    {
                        // TODO: backward version
                        m_TransitionScene = CCTransitionPageTurn::create(_transitionTime, incoming_cc_scene, false);
                    }
                    else
                    {
                        QWarning("Unknown transition %s used", _transitionType.c_str());
                    }

                    if ( m_TransitionScene != NULL)
                    {
                        // Make sure we keep the transition
                        m_TransitionScene->retain();

                        // Replace the scene with the transition
                        ccd->replaceScene(m_TransitionScene);
                        direct_transition = false;

                        // Disable sync in the new scenes
                        pCurrScene->isSynced = false;
                        pNextScene->isSynced = false;
                    }
                }

                if ( direct_transition)
                {
                    // Change immediately
                    ccd->replaceScene((CCScene*)pNextScene->m_CCNode);
                    pDelegateScene = (CCScene2*)pNextScene->m_CCNode;

                    // Make sure the right scene gets accelerometer data
                    //CCAccelerometer::sharedAccelerometer()->setDelegate((CCScene2*)pNextScene->m_CCNode);

                    // Notify the LUA side that the transition is complete
                    CallLUASideTransitionComplete();
                }

                // Clear the transition
                //_transitionScene = NULL; // TC REMOVED - WHY CLEAR IT?

                // Make sure the incoming scene has scheduling
                pCurrScene->m_CCNode->unscheduleUpdate();
                pNextScene->m_CCNode->scheduleUpdate();

    /*            // Remove old delegates
                ccd->getKeypadDispatcher()->removeDelegate((CCScene2*)outgoing_cc_scene);
                ccd->getTouchDispatcher()->removeDelegate((CCScene2*)outgoing_cc_scene);

                // Add new delegates
                ccd->getAccelerometer()->setDelegate((CCScene2*)incoming_cc_scene);
                CCAccelerometer::sharedAccelerometer()->setDelegate((CCScene2*)incoming_cc_scene);
                ccd->getKeypadDispatcher()->addDelegate((CCScene2*)incoming_cc_scene);
                ccd->getTouchDispatcher()->addStandardDelegate((CCScene2*)incoming_cc_scene, 0);
    */
            }
            else
            {
                // Check if the currently running scene isn't the scene the director has selected
                CCScene *wanted_scene = (CCScene*)_currentScene->m_CCNode;
                if ( running_scene != wanted_scene)
                {
                    running_scene->unscheduleUpdate();
                    ccd->replaceScene(wanted_scene);

                    pDelegateScene = (CCScene2*)_currentScene->m_CCNode;
                    // Make sure the right scene gets accelerometer data
                    //CCAccelerometer::sharedAccelerometer()->setDelegate((CCScene2*)_currentScene->m_CCNode);
                    wanted_scene->scheduleUpdate();
                }
            }
        }
    }

    // Ensure the required scene is always the delegate for event
    pDelegateScene->setTouchEnabled(true);
    pDelegateScene->setKeypadEnabled(true);

    // Cocos2d-x internal checking forces us to do this, in order to ensure delegate is correctly set!
//    pDelegateScene->setAccelerometerEnabled(false);
    pDelegateScene->setAccelerometerEnabled(true);

#ifndef _WIN32
    CCAccelerometer::sharedAccelerometer()->setDelegate(pDelegateScene);
#endif
}
//------------------------------------------------------------------------------
void QDirector::CallLUASideTransitionComplete()
{
	lua_getglobal(g_L, "director");
    lua_getfield(g_L, -1, "_transitionComplete");    // On stack: director._transitionComplete
    lua_getglobal(g_L, "director");
    lua_call(g_L, 1, 0);
    lua_pop(g_L, 1);
}
//------------------------------------------------------------------------------
void QDirector::CallLUASideOverlayComplete()
{
    lua_getglobal(g_L, "director");
    lua_getfield(g_L, -1, "_overlayComplete");    // On stack: director._overlayComplete
    lua_getglobal(g_L, "director");
    lua_call(g_L, 1, 0);
    lua_pop(g_L, 1);
}
//------------------------------------------------------------------------------
// Custom drawing
// The Cocos2D drawing functions are not flexible enough for us, and
// somewhat inefficient. So we have duplicated them here (into the Q
// namespace) and tweaked somewhat
//------------------------------------------------------------------------------
static bool s_bInitialized = false;
static CCGLProgram* s_pShader = NULL;
static int s_nColorLocation = -1;
static ccColor4F s_tColor = {1.0f,1.0f,1.0f,1.0f};
static int s_nPointSizeLocation = -1;
static GLfloat s_fPointSize = 1.0f;
//------------------------------------------------------------------------------
static void lazy_init( void )
{
    if( ! s_bInitialized ) {

        //
        // Position and 1 color passed as a uniform (to simulate glColor4ub )
        //
        s_pShader = CCShaderCache::sharedShaderCache()->programForKey(kCCShader_Position_uColor);

        s_nColorLocation = glGetUniformLocation( s_pShader->getProgram(), "u_color");
    CHECK_GL_ERROR_DEBUG();
        s_nPointSizeLocation = glGetUniformLocation( s_pShader->getProgram(), "u_pointSize");
    CHECK_GL_ERROR_DEBUG();

        s_bInitialized = true;
    }
}


//------------------------------------------------------------------------------
void QDirector::DrawColor4F( GLfloat r, GLfloat g, GLfloat b, GLfloat a )
{
    s_tColor.r = r;
    s_tColor.g = g;
    s_tColor.b = b;
    s_tColor.a = a;
}
//------------------------------------------------------------------------------
void QDirector::DrawColor4B( GLubyte r, GLubyte g, GLubyte b, GLubyte a )
{
    s_tColor.r = r/255.0f;
    s_tColor.g = g/255.0f;
    s_tColor.b = b/255.0f;
    s_tColor.a = a/255.0f;
}
//------------------------------------------------------------------------------
void QDirector::DrawPolyVert2F( const cocos2d::ccVertex2F* poli, unsigned int numberOfPoints, bool closePolygon )
{
    lazy_init();

    s_pShader->use();
    s_pShader->setUniformForModelViewProjectionMatrix();
    s_pShader->setUniformLocationWith4fv(s_nColorLocation, (GLfloat*) &s_tColor.r, 1);

    ccGLEnableVertexAttribs( kCCVertexAttribFlag_Position );

    glVertexAttribPointer(kCCVertexAttrib_Position, 2, GL_FLOAT, GL_FALSE, 0, poli);

    if( closePolygon )
        glDrawArrays(GL_LINE_LOOP, 0, (GLsizei) numberOfPoints);
    else
        glDrawArrays(GL_LINE_STRIP, 0, (GLsizei) numberOfPoints);

    CC_INCREMENT_GL_DRAWS(1);
}
//------------------------------------------------------------------------------
void QDirector::SetClippingRect( float x, float y, float w, float h)
{
    glEnable(GL_SCISSOR_TEST);
    CCEGLView::sharedOpenGLView()->setScissorInPoints(x, y, w, h);
}
//------------------------------------------------------------------------------
void QDirector::ResetClippingRect( )
{
    glDisable(GL_SCISSOR_TEST);
}
//------------------------------------------------------------------------------

QUICK_NAMESPACE_END;

