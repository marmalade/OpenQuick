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

#include "QTransition.h"
#include "QDefines.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
bool initScenes(CCScene * pScene, CCScene** inScene, CCScene ** outScene)
{
    CCAssert(pScene != NULL, "Argument scene must be non-nil");

    CCScene * pOutScene = (CCScene*)CCDirector::sharedDirector()->getNotificationNode();
    if (pOutScene == NULL)
    {
        pOutScene = CCScene::create();
        pOutScene->init();
        pOutScene->onEnter();
    }
    
    pOutScene->retain();
    pScene->retain();

    CCAssert(pScene != pOutScene, "Incoming scene must be different from the outgoing scene");
    
    *inScene = pScene;
    *outScene = pOutScene;

    return true;
}
//------------------------------------------------------------------------------
bool finishAndCleanup(CCScene * pInScene, CCScene * pOutScene)
{
    // clean up     
    pInScene->setVisible(true);
    pInScene->setPosition(ccp(0, 0));
    pInScene->setScale(1.0f);
    pInScene->setRotation(0.0f);
    pInScene->getCamera()->restore();

    pOutScene->setVisible(false);
    pOutScene->setPosition(ccp(0, 0));
    pOutScene->setScale(1.0f);
    pOutScene->setRotation(0.0f);
    pOutScene->getCamera()->restore();


    // Before replacing, save the "send cleanup to scene"
    CCDirector *director = CCDirector::sharedDirector();
    director->setNotificationNode(pInScene);
    return director->isSendCleanupToScene();
}
//------------------------------------------------------------------------------
// QTransitionPageTurn
//------------------------------------------------------------------------------
/** creates a base transition with duration and incoming scene */
QTransitionPageTurn * QTransitionPageTurn::create(float t, CCScene *scene, bool backwards)
{
    QTransitionPageTurn * pTransition = new QTransitionPageTurn();
    pTransition->initWithDuration(t, scene, backwards);
    pTransition->autorelease();
    return pTransition;
}
//------------------------------------------------------------------------------
bool QTransitionPageTurn::initWithDuration(float t, CCScene* scene, bool backwards)
{
    // XXX: needed before [super init]
    m_bBack = backwards;
   
    if (CCScene::init() && initScenes(scene, &m_pInScene, &m_pOutScene))
    {
        m_fDuration = t;        
        sceneOrder();
        return true;
    }
    return false;
}
//------------------------------------------------------------------------------
void QTransitionPageTurn::finish()
{
    m_bIsSendCleanupToScene = finishAndCleanup(m_pInScene, m_pOutScene);
}

QUICK_NAMESPACE_END;
