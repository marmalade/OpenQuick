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
	\file physics.h
	\brief Physics simulation main singleton.
*/
//------------------------------------------------------------------------------

#ifndef __Q_PHYSICS_H
#define __Q_PHYSICS_H

#include "QColor.h"
#include "QVec2.h"
#include "QPhysicsContactListener.h"
#include "QPhysicsJoint.h"

#include "cocos2d.h" // TODO... WHY IS THIS REQUIRED TO GET std::string TO WORK?!
#include "Box2D/Box2D.h"

// tolua_begin
namespace quick {
class QNode;
namespace physics {
// tolua_end

//------------------------------------------------------------------------------
// QSim
//------------------------------------------------------------------------------
class QSim { // tolua_export
public:
    // tolua_begin

    // BOUND, PRIVATE
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
    QSim();
    ~QSim();
    void _addNode(QNode* pNode); // add node to the simulation
    void _removeNode(QNode* pNode); // remove node from the simulation

    /**
    Gets the frequency of update of the physics engine.
    @return the frequency of update of the physics engine in Hz.
    */
    float getPhysicsHz();

    /**
    Destroys a Qjoint and its underlying Box2D joint instance.
    @param joint the pointer to the Joint instance to destroy.
    */
    void _destroyJoint(QJoint* joint);

    /**
    Destroys only the instance of a Joint without destroying its underlying Box2D joint.
    @param joint the pointer to the Joint instance to destroy.
    */
    void _destroyOnlyJoint(QJoint* joint);

    /**
    Destroys a Box2D vody and also triggers the destructor of the attached joints.
    @param body the pointer to the instance of the Box2D body to be destroyed.
    */
    void _destroyBody(b2Body* body);

    // BOUND, PUBLIC

    /**
    Set the scaling factor that converts from display coordinates to physics simulation coordinates.
    @param scale The scaling factor to use.
    */
    void setScale(float scale);

    // Note how the use of pointers with default parameters allows tolua to accept no inputs and return two values
    /**
    Get the gravity vector, in display coordinates. Returns an (x, y) number pair to Lua.
    @return The gravity vector, as an (x, y) pair.
    */
    void getGravity(float* x=0, float* y=0);

    /**
    Set the gravity vector, in display coordinates.
    @param The X coordinate of the gravity vector.
    @param The Y coordinate of the gravity vector.
    */
    void setGravity(float x, float y);

    // Pause, resume and timeScale
    void pause() { m_Paused = true; }
    void resume() { m_Paused = false; }
    void setTimeScale(float f) { m_TimeScale = f; }
    float getTimeScale() { return m_TimeScale; }

    /**
    Set the number of position and velocity iterations used by the physics simulation step.
    @param pos The number of position iterations.
    @param vel The number of velocity iterations.
    */
    void setIterations(int pos, int vel) { m_PosIterations = pos, m_VelIterations = vel; }

    /**
    Set whether or not the simulation should allow bodies to go to sleep.
    @param sleep True if we wish to allow sleeping, otherwise false.
    */
    void setAllowSleeping(bool sleep) { m_World->SetAllowSleeping(sleep); }

    /**
    True only if we wish to turn on debug drawing for the physics simulation.
    Debug drawing will draw an outline of the body shape for all display objects in the simulation.
    Selective objects can be excluded from the debug drawing, by setting their object.physics.debugDraw = false
    Each object's debug drawing color can also be set, using object.physics.debugDrawColor.
    By default, the debug drawing color matches the shape type: blue for circles, red for rectangles,
    yellow for polygons (which is, of course, the right way to do things: http://www.staff.science.uu.nl/~kreve101/composable-art/colorshapes.html ).
    */
    bool debugDraw;

    // tolua_end

    // UNBOUND
    /**
    Transform a value (e.g. x coordinate, y coordinate, or length) from display coordinates to physics coordinates.
    @param v The value in display coordinates.
    @return The value in physics coordinates.
    */
    inline float scaleD2P(float v) { return v / m_Scale; }

    /**
    Transform a value (e.g. x coordinate, y coordinate, or length) from physics coordinates to display coordinates.
    @param v The value in physics coordinates.
    @return The value in display coordinates.
    */
    inline float scaleP2D(float v) { return v * m_Scale; }

    /**
    Convert degrees into radians.
    NOTE: For a complete transformation from display to physics spaces, use angleD2P()
    @param deg the value in degrees to convert.
    @return the converted value in radians.
    */
    inline float degToRadians(float deg) { return deg * b2_pi / 180.0f ;}
    
    /**
    Convert radians into degrees.
    NOTE: For a complete transformation from physics to display spaces, use angleP2D()
    @param rad the value in radians to convert.
    @return the converted value in degrees.
    */
    inline float radiansToDeg(float rad) { return rad * 180.0f / b2_pi;}

    /**
    Converts an angle from degrees in display space to and angle in 
    radians in physics space (they have opposite positive angles conventions).
    @param degAngle the angle in degrees in display space.
    @return the converted angle in radians in physics space
    */
    inline float angleD2P(float a) { return -degToRadians(a); };

    /**
    Converts an angle from degrees in display space to and angle in 
    radians in physics space (they have opposite positive angles conventions).
    @param degAngle the angle in degrees in display space.
    @return the converted angle in radians in physics space
    */
    inline float angleP2D(float a) { return -radiansToDeg(a); };

    /**
    Gets the ground body, a convenience static body without a shape.
    @return a pointer to the ground body.
    */
    b2Body* GetGroundBody();

    /**
    Adds a joint to the global double linked list of Joint pointers.
    @param joint pointer to a Joint instance.
    */
    void AddJoint(QJoint* joint);

    /**
    Removes a joint from the global double linked list of Joint pointers.
    @param joint pointer to a Joint instance.
    */
    void RemoveJoint(QJoint* joint);

    /**
    Invokes the _sync method of all the registered joints, i.e. all of the joints
    which have a pointer stored in the global double lilnked list of Joint pointers.
    */
    void SyncJoints();

    /**
    Updates the joints and the simulation.
    @param dt elapsed time since last call.
    */
    void Update(float dt);

	/**
    Scaling factor between display and physics coords
    */
    float	m_Scale; 

    /**
    The vector representing the gravity force affecting the world.
    */
    b2Vec2      m_Gravity;

    /**
    The pointer to the underlying Box2D world.
    */
    b2World*    m_World;

    /**
    Static non colliding object created in the physics constructor that represents the static world.
    Useful for the mouse joint.
    */
    b2Body*     m_GroundBody;

    /**
    Is paused flag.
    */
    bool        m_Paused;
    float       m_TimeScale;

    /**
    The frequency of update in Hz.
    */
    int	        m_PhysicsHz;

    /**
    The duration of a physics step = 1.0 / m_PhysicsHz
    */
    float	    m_TimeStep;

    int	        m_VelIterations;
    int	        m_PosIterations;
    float		m_Accumulator;

    QContactListener m_ContactListener;

    /**
    The pointer to the global double linked list of Joint.
    Each Joint contains a pointer to the previous and the next entry in the list.
    This pointer is changed when adding an element to the list or when removing the only element
    from the list.
    */
    QJoint* m_JointsList;

}; // tolua_export

extern QSim* g_Sim;

// tolua_begin
}
}
// tolua_end

#endif // __Q_PHYSICS_H
