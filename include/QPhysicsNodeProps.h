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
	\file physicsNodeProp.h
	\brief Physics body properties for a node
*/
//------------------------------------------------------------------------------

#ifndef __Q_PHYSICSNODEPROPS_H
#define __Q_PHYSICSNODEPROPS_H

#include "QDefines.h"
#include "QColor.h"
#include "QVec2.h"

#include "cocos2d.h" // TODO... WHY IS THIS REQUIRED TO GET std::string TO WORK?!
#include "Box2D/Box2D.h"

// tolua_begin
namespace quick {
class QNode;
namespace physics {
// tolua_end

// Maximum number of points permitted on a body shape
#define MAX_SHAPE_POINTS 8

class QNodeProps { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
	QNodeProps(QNode* pNode);
	~QNodeProps();
    void _addShapePoint(float x, float y);

    /*
    Initialize a physics body adding to it a "fixture".
    The value "isSensor" of its fixture needs to be specifically passed.
    If isSensor is true the body will be included in the collision detection
    but will not prodice a collision response. Collision events are triggered normally.
    @param isSensor true if this body shall be only a collision detector without producing a collision response, false otherwise.
    */
    void _init(bool isSensor = false);

    /*
    Synchronizes the LUA variable towards the underlying Box2D layer.
    */
    void _sync();

	// BOUND, PUBLIC
    /**
    Apply a force at a world point. If the force is not
    applied at the center of mass, it will generate a torque and
    affect the angular velocity. This wakes up the body.
    @param fx The force x component, in display coordinates.
    @param fy The force y component, in display coordinates.
    @param px The x coord of the point to apply the force to, in body coordinates
    @param py The y coord of the point to apply the force to, in body coordinates
    */
    void applyForce(float fx, float fy, float px = 0.0f, float py = 0.0f);

    /**
    Applies an angular impulse to the rigid body.
    @param a The angular impulse.
    */
    void applyAngularImpulse(float i);

    /**
    Set the angular velocity.
    @param omega the new angular velocity in radians/second.
    */
    void setAngularVelocity(float32 omega);

    /**
    Get the angular velocity.
    @return the angular velocity in radians/second.
    */
    float getAngularVelocity();

    /**
    Apply a torque. This affects the angular velocity
    without affecting the linear velocity of the center of mass.
    This wakes up the body.
    @param torque about the z-axis (out of the screen), usually in N-m.
    */
    void applyTorque(float32 torque);

    /**
    Apply an impulse at a point. This immediately modifies the velocity.
    It also modifies the angular velocity if the point of application
    is not at the center of mass. This wakes up the body.
    @param ix The x coord of the world impulse vector, usually in N-seconds or kg-m/s.
    @param iy The y coord of the world impulse vector, usually in N-seconds or kg-m/s.
    @param px The x coord of the world position of the point to apply the impulse.
    @param py The y coord of the world position of the point to apply the impulse.
    */
    void applyLinearImpulse(float ix, float iy, float px=-1.0f, float py=-1.0f);

    /**
    Get the total mass of the body.
    @return the mass, usually in kilograms (kg).
    */
    float getMass();

    /**
    Get the rotational inertia of the body about the local origin.
    @return the rotational inertia, usually in kg-m^2.
    */
    float getInertia();

    /**
    Get the world coordinates of a point given the local coordinates.
    @param lx The x coord of a point on the body measured relative the the body's origin.
    @param ly The y coord of a point on the body measured relative the the body's origin.
    @return wx, wy The same point expressed in world coordinates.
    */
    void getWorldPoint(float lx, float ly, float* wx=0, float* wy=0);

    /**
    Get the world coordinates of a vector given the local coordinates.
    @param lx The x coord of a vector in body space
    @param ly The y coord of a vector in body space
    @return wx, wy The same vector expressed in world coordinates.
    */
    void getWorldVector(float lx, float ly, float* wx=0, float* wy=0);

    /**
    Gets a local point relative to the body's origin given a world point.
    @param lx The x coord of a point on the body, in world coords
    @param ly The y coord of a point on the body, in world coords
    @return wx, wy The same point expressed in local coordinates.
    */
    void getLocalPoint(float wx, float wy, float* lx=0, float* ly=0);

    /**
    Gets a local vector given a world vector.
    @param wx The x coord of a vector in world coords
    @param wy The y coord of a vector in world coords
    @return lx, ly The same vector expressed in local coordinates.
    */
    void getLocalVector(float wx, float wy, float* lx=0, float* ly=0);

    /**
    Get the world linear velocity of a world point attached to this body.
    @param wx The x coord of a point in world coords
    @param wy The y coord of a point in world coords
    @return vx, vy The linear velocity vector expressed in world coordinates.
    */
    void getLinearVelocityFromWorldPoint(float wx, float wy, float* vx=0, float* vy=0);

    /**
    Get the world velocity of a local point.
    @param lx The x coord of a point in local coords
    @param ly The y coord of a point in local coords
    @return vx, vy The linear velocity vector expressed in world coordinates.
    */
    void getLinearVelocityFromLocalPoint(float lx, float ly, float* vx=0, float* vy=0);

    // Get the linear damping of the body.
    float getLinearDamping();

    // Set the linear damping of the body.
    void setLinearDamping(float linearDamping);

    // Get the angular damping of the body.
    float getAngularDamping();

    // Set the angular damping of the body.
    void setAngularDamping(float32 angularDamping);

    // Get the gravity scale of the body.
    float getGravityScale();

    // Set the gravity scale of the body.
    void setGravityScale(float scale);

    /**
    The friction value.
    Default value is 0.5.
    */
	float friction;

    /**
    The density of the body.
    Default value is 10.
    */
	float density;

    /**
    The restitution, or "bounciness" of the body.
    Default value is 0.5.
    */
	float restitution;

    /**
    The radius of the body.
    If this is > 0, the body is assumed to be circular, otherwise it is assumed to be rectangular.
    (Note that, if points have been added using the 'shape' property, then the body has a different shape specified by the points themselves).
    Default value is 0.
    */
    float radius;

    /**
    The type of the body: 'static', 'dynamic', or 'kinematic'.
    The default is 'dynamic'.
    */
    std::string type;

    /**
    Gets the sensor flag, if true this body detects collisions but does not
    produce a response. 
    NOTE: if this body has multiple fixtures attached to it, the property
    is false if at least one of the fixtures is not a sensor.
    @return true if this body is a sensor, false otherwise.
    */
    bool get_isSensor();

    /**
    Read only property: this method only throws an assertion failure.
    */
    void set_isSensor(bool v);

    //! True only if we wish to display the body shape, for debugging purposes
    bool debugDraw;

    //! If debugDraw = true, this sets the color to draw with
    QColor debugDrawColor;

    // tolua_end
    // UNBOUND
	QNode* m_Node; // pointer to owning node
	::b2Body*	m_Body; // Box2D body
    QVec2 m_ShapePoints[MAX_SHAPE_POINTS];
    int m_NumShapePoints; // > 0 implies we should use a polygonal shape
	bool m_IsSensor; // true only if body is a sensor

    void draw();

}; // tolua_export

// tolua_begin
}
}
// tolua_end

#endif // __Q_PHYSICSNODEPROPS_H
