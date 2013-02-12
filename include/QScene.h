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
	\file QScene.h
	\brief Scene node.
*/
//------------------------------------------------------------------------------

#ifndef __Q_SCENE_H
#define __Q_SCENE_H

#include "QDefines.h"
#include "QNode.h"
#include "QSceneTextureBatch.h"

#include "cocos2d.h"
#include "CCAccelerometerDelegate.h"

//------------------------------------------------------------------------------
// CCScene2 - inherit from CLayer, with overrides
//------------------------------------------------------------------------------
class CCScene2 : public cocos2d::CCLayer
{
public:
    virtual ~CCScene2();
	virtual bool init( bool bAddScene);
	virtual void update(float dt);
    virtual void draw();

    // Touch events
	virtual void ccTouchesBegan(cocos2d::CCSet* pSet, cocos2d::CCEvent* pEvent);
	virtual void ccTouchesEnded(cocos2d::CCSet* pSet, cocos2d::CCEvent* pEvent);
	virtual void ccTouchesMoved(cocos2d::CCSet* pSet, cocos2d::CCEvent* pEvent);

    // Accelerometer events
    virtual void didAccelerate(cocos2d::CCAcceleration* pAccelerationValue);

    // Key events
    virtual void keyBackClicked();
    virtual void keyMenuClicked();

    quick::QScene* m_QScene;
};

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QScene
//------------------------------------------------------------------------------
/**
The Scene object should be the ultimate parent of all displayed Nodes.
In general, the Director displays a single Scene at any one time; exceptions are when transitioning between
scenes, or overlaying scenes.
It inherits from the Node object.
*/
class QScene : public QNode { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    virtual const char* _getToLuaClassName() { return "quick::QScene"; }
    QScene();
    ~QScene();

    /*!
        Initialise the QScene Node
        @param bAddScene Specify if this scene should be added to the update scheduler
    */
    void _init( bool bAddScene);
    // BOUND, PRIVATE

    // tolua_end

    // UNBOUND
    // Add a texture batch for the specified texture
    QSceneTextureBatch* AddTextureBatch(cocos2d::CCTexture2D* pCCTex);

    // Do we have a texture batch for the specified texture?
    QSceneTextureBatch* GetTextureBatch(cocos2d::CCTexture2D* pCCTex);

    void draw();
    void reset();

    std::vector<QSceneTextureBatch*> m_TextureBatches;
    bool    m_UseBatching; // true to use batching. Defaults to false

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_SCENE_H
