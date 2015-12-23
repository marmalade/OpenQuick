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

//------------------------------------------------------------------------------
/*!
\file QTransition.h
\brief Overrides create, initWithDuration and finish methods of CCTransitionScene inheritors
       to change their behaviour before and after transiting an overlay
*/
//------------------------------------------------------------------------------
#ifndef __QTRANSITION_H__
#define __QTRANSITION_H__

#include "cocos2d.h"

USING_NS_CC;

/* OVERRIDE_TRANSITION macro
*
*  Replaces functionality of CCTransitionScene inheritors to not to touch running scene
*  on initialization and set incoming scene as notification node on finish
*/

#define OVERRIDE_TRANSITION(cls,base,extra)\
class cls : public base\
{\
public:\
    static cls * create(float t, CCScene *scene){\
        cls * pTransition = new cls();\
        pTransition->initWithDuration(t, scene);\
        pTransition->autorelease();\
        return pTransition;\
    }\
    virtual bool initWithDuration(float t, CCScene* scene){\
        if (CCScene::init() && quick::initScenes(scene, &m_pInScene, &m_pOutScene)){\
            m_fDuration = t;\
            sceneOrder();\
            return true;\
        }\
        return false;\
    }\
    virtual void finish(){ m_bIsSendCleanupToScene = quick::finishAndCleanup(m_pInScene, m_pOutScene); }\
    extra\
};\

#define NO_EXTRA

// Overrides CCTransitionProgress::setupTransition
#define SETUP_PROGRESS_TRANISTION\
    virtual void setupTransition()\
    {\
        CCDirector* ccd = CCDirector::sharedDirector();\
        bool show = ccd->getNotificationNode() == NULL;\
        m_pSceneToBeModified = ccd->getRunningScene();\
        m_fFrom = show ? 100.f : 0.f;\
        m_fTo = show ? 0.f : 100.f;\
    }\

namespace quick {

    // Following two functions added to reuse common code for all overlay transitions
    bool initScenes(CCScene * pScene, CCScene** inScene, CCScene ** outScene);
    bool finishAndCleanup(CCScene * pInScene, CCScene * pOutScene);

    //------------------------------------------------------------------------------
    // QTransitionPageTurn
    // The class has additional parameter "backwards" in its creation/initialization
    // methods so we cannot use the macros here
    //------------------------------------------------------------------------------
    class QTransitionPageTurn : public CCTransitionPageTurn
    {
    public:    
        /** creates a base transition with duration and incoming scene */
        static QTransitionPageTurn * create(float t, CCScene *scene, bool backwards);
        virtual bool initWithDuration(float t, CCScene* scene, bool backwards);
        virtual void finish();
    };
    // The next classes declared using macro
    OVERRIDE_TRANSITION(QTransitionRotoZoom, CCTransitionRotoZoom, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionJumpZoom, CCTransitionJumpZoom, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionSlideInL, CCTransitionSlideInL, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionSlideInR, CCTransitionSlideInR, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionSlideInB, CCTransitionSlideInB, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionSlideInT, CCTransitionSlideInT, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionShrinkGrow, CCTransitionShrinkGrow, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionFlipX, CCTransitionFlipX, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionFlipY, CCTransitionFlipY, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionFlipAngular, CCTransitionFlipAngular, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionZoomFlipX, CCTransitionZoomFlipX, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionZoomFlipY, CCTransitionZoomFlipY, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionZoomFlipAngular, CCTransitionZoomFlipAngular, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionCrossFade, CCTransitionCrossFade, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionTurnOffTiles, CCTransitionTurnOffTiles, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionSplitCols, CCTransitionSplitCols, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionSplitRows, CCTransitionSplitRows, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionFadeTR, CCTransitionFadeTR, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionFadeBL, CCTransitionFadeBL, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionFadeUp, CCTransitionFadeUp, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionFadeDown, CCTransitionFadeDown, NO_EXTRA)
    OVERRIDE_TRANSITION(QTransitionProgressRadialCCW, CCTransitionProgressRadialCCW, SETUP_PROGRESS_TRANISTION)
    OVERRIDE_TRANSITION(QTransitionProgressRadialCW, CCTransitionProgressRadialCW, SETUP_PROGRESS_TRANISTION)
    OVERRIDE_TRANSITION(QTransitionProgressHorizontal, CCTransitionProgressHorizontal, SETUP_PROGRESS_TRANISTION)
    OVERRIDE_TRANSITION(QTransitionProgressVertical, CCTransitionProgressVertical, SETUP_PROGRESS_TRANISTION)
    OVERRIDE_TRANSITION(QTransitionProgressInOut, CCTransitionProgressInOut, SETUP_PROGRESS_TRANISTION)
    OVERRIDE_TRANSITION(QTransitionProgressOutIn, CCTransitionProgressOutIn, SETUP_PROGRESS_TRANISTION)
    OVERRIDE_TRANSITION(QTransitionFade, CCTransitionFade, NO_EXTRA)
}

#endif /* __QTRANSITION_H__ */
