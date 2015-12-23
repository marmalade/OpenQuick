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
	\file QDirector.h
	\brief Director singleton.
*/
//------------------------------------------------------------------------------

#ifndef __Q_DIRECTOR_H
#define __Q_DIRECTOR_H

#include "QDefines.h"
#include "QColor.h"
#include <vector>
#include "cocos2d.h"

class CCScene2;

// tolua_begin
namespace quick {
// tolua_end

class QNode;
class QScene;

//------------------------------------------------------------------------------
// QDirector
//------------------------------------------------------------------------------
/**
The Director object handles everything to do with the display, including high-level actions
on the scene graph.

All display objects are created through "factory" functions on the Director.
*/
class QDirector { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
    QDirector();
    ~QDirector();
    void _updateDisplayInfo(float dw, float dh);

    QScene* _currentScene;          // the current scene as pointed to by the LUA code

    QScene* _transitionScene;       // if non-NULL (and not the current scene), we are about to transition to this
    float _transitionTime;          // duration of any imminent transition
    std::string _transitionType;    // type of transition to make

    QScene* _overlayScene;          // the overlay scene as pointed to by the LUA code

    QScene* _overlayTransitionScene;       // if non-NULL, we are about to transition to/from overlay
    float _overlayTransitionTime;          // duration of any imminent overlay transition
    std::string _overlayTransitionType;    // type of overlay transition to make
    
    bool _modalOverlay;                   // is the overlay modal
    // BOUND, PUBLIC
	/**
	The color to be set on all newly-created display objects (nodes).
	The default value is white (1, 1, 1).
	*/
    QColor nodesColor;

	/**
	Whether or not the Director should automatically add newly-created display objects to the current scene.
	The default value is true.
	*/
    bool addNodesToScene;

    /**
	Whether or not alpha (and strokeAlpha) should be inherited (propogated) through the scene graph.
    The default value is true.
	*/
    bool isAlphaInherited;

    // Debug drawing
    void drawLine(float x0, float y0, float x1, float y1);

    /*! Cleans up unused textures that remain in the texture cache.  This
        function is auto called after scene 
        
    */
    static void cleanupTextures(void);

    /** Start initial scene rendering when Quick scene is ready to draw */
    void startRendering();

    // tolua_end;

    // BOUND EXPLICITLY IN TOLUA PKG
	/** @var displayWidth
	The width of the display, in pixels, as far as the app is concerned.
	This is usually the physical width of the screen resolution if running in portrait orientation, or the physical
	height of the screen resolution if running in landscape orientation.
	If the Director is subject to any display scaling, then this may not be the case.
	*/
    Q_READONLY_VARIABLE( float, displayWidth);

	/** @var displayHeight
	The height of the display, in pixels, as far as the app is concerned.
	This is usually the physical height of the screen resolution if running in portrait orientation, or the physical
	width of the screen resolution if running in landscape orientation.
	If the Director is subject to any display scaling, then this may not be the case.
	*/
    Q_READONLY_VARIABLE( float, displayHeight);

	/** @var displayCenterX
	A convenience value, this is simply displayWidth / 2.
	*/
    Q_READONLY_VARIABLE( float, displayCenterX);

	/** @var displayCenterY
	A convenience value, this is simply displayHeight / 2.
	*/
    Q_READONLY_VARIABLE( float, displayCenterY);

    // UNBOUND

	/**
	Get the current Scene object, which may be the Director's global scene.
	@return The current Scene object.
	*/
    QScene* getCurrentScene();

    void RunScene();
    void CallLUASideTransitionComplete();
    void CallLUASideOverlayComplete();
    
    // Fixed vertex data for circle
    int m_CircleNumVerts;
    float* m_CircleVerts;

    // TODO - OPTIMISE BY RE-USING TRANSITION OBJECTS.
    // FOR NOW, WE CREATE THEM EACH TIME in QDirector::RunScene()
    cocos2d::CCTransitionScene* m_TransitionScene;
    cocos2d::CCTransitionScene* m_OverlayTransitionScene;

    // When drawing, we store a pointer to the current scene being drawn
    ::CCScene2* m_DrawingScene;

    static void DrawColor4F( GLfloat r, GLfloat g, GLfloat b, GLfloat a );
    static void DrawColor4B( GLubyte r, GLubyte g, GLubyte b, GLubyte a );
    static void DrawPolyVert2F( const cocos2d::ccVertex2F* poli, unsigned int numberOfPoints, bool closePolygon );

    static void SetClippingRect( float x, float y, float w, float h);
    static void ResetClippingRect( );

}; // tolua_export

extern QDirector* g_QDirector;

// tolua_begin
}
// tolua_end

#endif // __Q_DIRECTOR_H
