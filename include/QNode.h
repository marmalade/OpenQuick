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
	\file QNode.h
	\brief Base class for all OpenQuick display object intermediaries.
*/
//------------------------------------------------------------------------------

#ifndef __Q_NODE_H
#define __Q_NODE_H

#include "QDefines.h"
#include "QColor.h"
#include "QPhysics.h"
#include "QPhysicsNodeProps.h"
#include "QVec2.h"

#include "cocos2d.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QNode
//------------------------------------------------------------------------------
/**
The Node object is the base object for all display objects in the scene graph.
Any Node object can have another Node object as its parent, and any number of Node objects as its children.
Each Node holds full transform information including position, rotation, scale and skew.
Nodes also have color and alpha (opacity).
*/
class QNode { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    virtual const char* _getToLuaClassName() { return "quick::QNode"; }
    QNode();
    ~QNode();
    void _createCCNode();
    bool _isChild(QNode* pChild);
    void _setParent(QNode* pParent);
    void _addChild(QNode* pChild);
    void _removeChild(QNode* pChild);
    int _getNumChildren() { return m_Children.size(); }

    float _alphaInternal;    // used to calculate alpha value for Cocos2d, may or may not inherit from parent
    bool _timersPaused;     // true if ALL the node's timers should be paused. Default is false
    bool _tweensPaused;     // true if ALL the node's tweens should be paused. Default is false
    float _timersTimeScale; // time scaling factor to apply to the update timestep for timers. Default is 1
    float _tweensTimeScale; // time scaling factor to apply to the update timestep for tweens. Default is 1

    // BOUND, PUBLIC
    virtual void sync();

	/**
	Check if a display point is inside this Node.
	The Node's global transform is taken into account, as well as its shape (rectangular, circular, etc.)
	@param x Display x coordinate to check against.
	@param y Display y coordinate to check against.
	@param result True only if the display point is inside the Node.
	*/
    virtual bool isPointInside(float x, float y);

	/*
    DEPRECATE - USE node.color = {..} instead
	Set the color of the Node, specifying the (r, g, b) components.
	@param r The red value (0..255) to set.
	@param g The green value (0..255) to set.
	@param b The blue value (0..255) to set.
	*/
    void setColor(int r, int g, int b) { color.r = r, color.g = g, color.b = b; }

	/*
    DEPRECATE - USE node.color = {..} instead
	Set the color of the Node, specifying the (r, g, b, a).
	@param r The red value (0..255) to set.
	@param g The green value (0..255) to set.
	@param b The blue value (0..255) to set.
	@param a The alpha value (0..255) to set.
	*/
    void setColor(int r, int g, int b, int a) { color.r = r, color.g = g, color.b = b, color.a = a; }

    // Timers and tweens control
    void pauseTimers() { _timersPaused = true; }
    void resumeTimers() { _timersPaused = false; }
    void setTimersTimeScale(float f) { _timersTimeScale = f; }
    float getTimersTimeScale() { return _timersTimeScale; }
    void pauseTweens() { _tweensPaused = true; }
    void resumeTweens() { _tweensPaused = false; }
    void setTweensTimeScale(float f) { _tweensTimeScale = f; }
    float getTweensTimeScale() { return _tweensTimeScale; }
    
	/**
	The 'name' of the Node. Each Node can hold an arbitrary string as its name. This value need only be set by
	the app if it is considered useful. The default value is an empty string.
	*/
    std::string name;

	/**
	The x coordinate of the Node, relative to any parent Node.
    TODO COPY FROM COCOS2D DOCS
	*/
	float x;
	
	/**
	The y coordinate of the Node, relative to any parent Node.
    TODO COPY FROM COCOS2D DOCS
	*/
	float y;

	/**
	The width of the Node. This value is only relevant to certain object types:
	- For Sprite objects, it refers to the width of the texture or texture region being used by the Sprite.
	- For Rectangle objects, it refers to the width of the rectangle.
    TODO COPY FROM COCOS2D DOCS
	*/
	float w;

	/**
	The height of the Node. This value is only relevant to certain object types:
	- For Sprite objects, it refers to the height of the texture or texture region being used by the Sprite.
	- For Rectangle objects, it refers to the height of the rectangle.
    TODO COPY FROM COCOS2D DOCS
	*/
	float h;

	/**
	The scaling factor of the Node, along the X axis.
    TODO COPY FROM COCOS2D DOCS
	*/
	float   xScale;

	/**
	The scaling factor of the Node, along the Y axis.
    TODO COPY FROM COCOS2D DOCS
	*/
    float   yScale;

	/**
	The X skew angle of the Node in degrees.
    This angle describes the shear distortion in the X direction.
    Thus, it is the angle between the Y axis and the left edge of the Node's bounding box.
    The default angle is 0. Positive values distort the node in a CW direction.
    TODO COPY FROM COCOS2D DOCS
	*/
    float   xSkew;

	/**
	The Y skew angle of the Node in degrees.
    This angle describes the shear distortion in the Y direction.
    Thus, it is the angle between the X axis and the bottom edge of the Node's bounding box.
    The default angle is 0. Positive values distort the node in a CCW direction.
    TODO COPY FROM COCOS2D DOCS
    */
    float   ySkew;

    /**
    The rotation of the Node, in degrees.
    Positive values rotate in a CW direction.
    TODO COPY FROM COCOS2D DOCS
    */
    float   rotation;

    /**
    The X coordinate of the Node's anchor point, as a proportion of the Node's width.
    A value of 0 refers to the left edge of the Node's bounding box, whilst a value of 1 refers to the right edge.
    The default value is 0.
    TODO COPY FROM COCOS2D DOCS
    */
    float   xAnchor;

    /**
    The Y coordinate of the Node's anchor point, as a proportion of the Node's height.
    A value of 0 refers to the bottom edge of the Node's bounding box, whilst a value of 1 refers to the top edge.
    The default value is 0.
    TODO COPY FROM COCOS2D DOCS
    */
    float   yAnchor;

    /**
    True if the Node is to be displayed, otherwise false.
    The default value is true.
    TODO COPY FROM COCOS2D DOCS
    */
    bool	isVisible;

    /**
    The RGB color of the Node. Each component is in the range (0..1).
    For example, color.r = color.g = color.b = 1 is white, whilst color.r = 1, color.g = color.b = 0 is red.
    The default value is white.
    TODO COPY FROM COCOS2D DOCS
    */
    QColor color;

    /**
    The alpha value, or opacity, of the Node, in the range (0..1).
    For example, 1 is fully opaque, whilst 0 is fully transparent.
    The default value is 1.
    TODO COPY FROM COCOS2D DOCS
    */
	float	alpha;

    /**
    This value controls how Nodes are layered relative to one another.
    TODO COPY FROM COCOS2D DOCS
    TODO COPY FROM COCOS2D DOCS
    */
    int     zOrder;

    /**
    The physics properties of the Node.
    A nil value implies that the Node is not added to the physics simulation.
    */
    physics::QNodeProps* physics;

    /**
    The x coordinate of the clipping area used for this node (and it's children) in screen space.
    */
    float   clipX;

    /**
    The y coordinate of the clipping area used for this node (and it's children) in screen space.
    */
    float   clipY;

    /**
    The width of the clipping area used for this node (and it's children) in screen space.
    */
    float   clipW;

    /**
    The height of the clipping area used for this node (and it's children) in screen space.
    */
    float   clipH;
   
    //! True only if we wish to display the bounding rectangle as a box, for debugging purposes
    bool debugDraw;

    //! If debugDraw = true, this sets the color to draw with
    QColor debugDrawColor;

    //! True if the node (and it's children) will receive touch events
    bool isTouchable;


    // tolua_end

    //! True if sync should be called
    bool isSynced;

    // UNBOUND
    int     m_ZOrderLast; // copy of the last zOrder with which this node was added to its parent
    QNode* m_Parent;
    std::vector<QNode*> m_Children;

    // Cocos2dx
	cocos2d::CCNode* m_CCNode;

    static int  g_GUID; // increases each time a QNode is created

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_NODE_H
