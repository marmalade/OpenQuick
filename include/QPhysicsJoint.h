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
	\file physicsJoint.h
	\brief Physics joint class.
*/
//------------------------------------------------------------------------------

#ifndef __Q_PHYSICSJOINT_H
#define __Q_PHYSICSJOINT_H

#include "QColor.h"
#include "QVec2.h"

#include "cocos2d.h" // TODO... WHY IS THIS REQUIRED TO GET std::string TO WORK?!
#include "Box2D/Box2D.h"

// tolua_begin
namespace quick {
class QNode;
namespace physics {
// tolua_end

//------------------------------------------------------------------------------
// Joint
//------------------------------------------------------------------------------
/**
A joint between two QNodes provided with physics.
This Class is a wrapper of all of the Box2D joint types and exposes their functions to Lua.
Most of the properties are directly exposed to LUA and are synchronized to the underlying Box2D layer
through the "_sync" method, which provides the synchronization for the read only properties as well.
Other properties are exposed through methods. 
Readonly properties cause an assertion failure when attempting to write to them.
Each created Joint instance is stored, as a pointer, in a double linked list owned by the global physics 
singleton, which add and removes item on Joints creation and destruction.
The physics global singleton calls the sinchronization method (_sync) for each Joints on update.
Joints can be destroyed also when their attached bodies are destroyed. This is managed 
through the Box2D joint userdata variable that stores a reference to the Joint that created it.
On body destruction Box2D triggers the destructor of all of the attached joints (Box2D joints), and physics
global singleton destroys all the wrapping Joints.
To create a specific joint type use the corresponding specialized method (e.g. _createBox2DRevoluteJoint).
Supported joint types: distance, friction, gear, pivot (revolute), piston (prismatic), pulley,
touch (mouse), wheel, weld, rope.
*/
class QJoint { // tolua_export
public:
    // tolua_begin
    
    // BOUND, PRIVATE
    /**
    The constructor that must be called by the physics global instance.
    */
    QJoint();

    /**
    The destructor that must be called by the physics global instance.
    */
    ~QJoint();
        
    // BOUND, PUBLIC
    /**
    Synchronizes the LUA variables to the underlying c++ object.
    The values of the field are read and written into their corresponding fields of
    Box2D joints according to the proper joint type.
    */
    virtual void _sync();

    /**
    Gets the node A which contains the bodyA to which this joint is attached.
    @return a pointer to a scene node that contains on of the body to which this joint is attached.
    */
    QNode* getNodeA();

    /**
    Gets the scene node B which contains the bodyB to which this joint is attached.
    @return a pointer to a scene node that contains on of the body to which this joint is attached.
    */
    QNode* getNodeB();
        
    /**
    Gets the anchor point on bodyA in world display coordinates.
    The LUA exported function will return all of the param[out] values in the same order as in this method declaration.
    @param[out] x the x world coordinate in display coordinates.
    @param[out] y the y world coordinate in display coordinates.
    */
    void getAnchorA(float* x=0, float* y=0);
        
    /**
    Gets the anchor point on bodyB in world display coordinates. 
    The LUA exported function will return all of the param[out] values in the same order as this method declaration.
    @param[out] x the x world coordinate in display coordinates.
    @param[out] y the y world coordinate in display coordinates.
    */
    void getAnchorB(float* x=0, float* y=0);

    /**
    Gets the active status of this joint. The active status is actually defined by the status of the connected body: 
    if both are active the joint is considered active.
    @return true if the both of the connected bodies are active, false otherwise
    */
    bool get_isActive();

    /**
    This method only throws an exception because isActive is a readonly property
    @param true just a placeholder
    */
    void set_isActive(bool ac);

    /**
    Gets the collide connected flag: if true the attached bodies may collide.
    @return the collide connected flag: true if the attached bodies can collide, false otherwise.
    */
    bool get_isCollideConnected();

    /**
    This method only throws an exception because isActive is a readonly property
    @param true just a placeholder
    */
    void set_isCollideConnected(bool val);

    /**
    Gets the reaction force in physics coordinates on bodyB at the joint anchor in Newtons. 
    The LUA exported function will return all of the param[out] values in the same order as this method declaration.
    @param[out] x the x world coordinate. 
    @param[out] y the y world coordinate. 
    */
    void getReactionForce(float* x=0, float* y=0);
        
    /**
    Gets the reaction torque on bodyB at the joint anchor in Newtons * Meters. 
    @return the reaction torque on bodyB.
    */
    float getReactionTorque();
        
    /**
    Gets the ground anchor point A for a pulley joint.
    @param[out] x the x world coordinate in display space. 
    @param[out] y the y world coordinate in display space. 
    */
    //void getGroundAnchorA(float* x=0, float* y=0);

    /**
    Gets the ground anchor point B for a pulley joint.
    @param[out] x the x world coordinate in display space. 
    @param[out] y the y world coordinate in display space. 
    */
    //void getGroundAnchorB(float* x=0, float* y=0);

    /**
    Sets the target for a touch joint (mouse joint).
    @param absDX the x world coordinate in display space.
    @param absDY the y world coordinate in display space.
    */
    //void setTarget(float absDX, float absDY);

    /**
    Gets the target for a touch joint (mouse joint).
    @param[out] absDX the x world coordinate in display space.
    @param[out] absDY the y world coordinate in display space.
    */
    //void getTarget(float* absDX = 0, float* absDY = 0);

    /**
    Gets the joint1 for a gear joint.
    @return a pointer to a Joint pointing to the joint1 wrapper of a gear joint.
    */
    //QJoint* getJoint1();

    /**
    Gets the joint2 for a gear joint.
    @return a pointer to a Joint pointing to the joint2 wrapper of a gear joint.
    */
    //QJoint* getJoint2();

    /**
    Gets the limit state for a rope joint.
    */
    //b2LimitState getLimitState();

    /**
    Calls the physics global instance which destroys this instance, and detaches it 
    from the connected Box2D bodies. 
    This may cause the connected bodies to begin colliding. 
    */
    void destroy();
       
    /**
    The length of the distance joint in physics space.
    */
    //float length;

    /**
    This parameter along with dampingRatio determines the softness of this joint.
    */
    //float frequency;

    /**
    This parameter along with frequency determines the softness of this joint.
    */
    //float dampingRatio;

    /**
    Spring parameter for wheel shock absorber.
    */
    //float springFrequency;

    /**
    Spring parameter for wheel shock absorber.
    */
    //float springDampingRatio;

    /**
    Sets the rotation limit for this joint if it is a pivot joint.
    The LUA exported function will return all of the param[out] values in the same order as this method declaration.
    @param lowerDeg the lower angle limit in degrees
    @param upperDeg the upper angle limit in degrees
    */
    //void setRotationLimits(float lowerDeg, float upperDeg);
        
    /**
    Gets the rotation limits for this joint.
    The LUA exported function will return all of the param[out] values in the same order as this method declaration.
    @param[out] lowerDeg the lower angle limit in degrees
    @param[out] upperDeg the upper angle limit in degrees
    */
    //void getRotationLimits(float* lowerDeg = 0 , float* upperDeg = 0);

    /**
    Sets linear limits for this joint.
    @param lowerLimit the lower limit in meters.
    @param upperLimit the upper limit in meters.
    */
    //void setLimits(float lowerLimit, float upperLimit);

    /**
    Gets linear limits for this joint.
    @param[out] lowerLimit the lower limit in meters.
    @param[out] upperLimit the upper limit in meters.
    */
    //void getLimits(float* lowerLimit = 0 , float* upperLimit = 0);

    /**
    Gets the current joint angle. 
    @return angle the current joint angle in degrees.
    */
    //float getJointAngle();

    /**
    Gets the current joint angular speed in degrees per second. 
    @return the current joint angular speed in degrees per second.
    */
    //float get_jointSpeed();

    /**
    Read only property.
    This method only throws an exception.
    @param v 
    */
    //void set_jointSpeed(float v);

    /**
    Gets the joint translation in physics space.
    */
    //float get_jointTranslation();

    /**
    Read only property.
    This method only throws an exception.
    */
    //void set_jointTranslation(float v);

    /**
    Gets the length1 of a pulley joint.
    @return the length1 parameter of a pulley joint in meters.
    */
    //float get_length1();

    /**
    Read only property.
    This method only throws an exception.
    @param v
    */
    //void set_length1(float v);

    /**
    Gets the length2 of a pulley joint.
    @return the length2 parameter of a pulley joint in meters.
    */
    //float get_length2();

    /**
    Read only property.
    This method only throws an exception.
    @param v
    */
    //void set_length2(float v);

    /**
    Gets the ratio of a pulley joint.
    @return the ratio parameter of a pulley joint.
    */
    //float get_ratio();

    /**
    Read only property.
    This method only throws an exception.
    @param v
    */
    //void set_ratio(float v);

    /**
    Enables / disables the rotation limits of this joint, that are set through the
    SetRotationLimits method.
    */
    //bool limitEnabled;

    /**
    Sets / Gets the maximum motor torque .
    */
    //float maxMotorTorque;

    /**
    Sets / Gets the maximum motor torque.
    */
    //float maxMotorForce;

    /**
    Sets / Gets the angular speed in degrees per second of this joint motor for a pivot (revolute) joint.
    Sets / Gets the linear speed in meters per second of this joint motor for a piston (prismatic) joint.
    */
    //float motorSpeed;

    /**
    Enables / disables this joint motor.
    */
    //bool motorEnabled;

    /**
    The maximum force in N.
    */
    //float maxForce;

    /**
    The maximum torque in M * m.
    */
    //float maxTorque;

    /**
    Gets the property motorForce.
    @return the motor force in N.
    */
    //float get_motorForce();

    /**
    Read only property: this method only throws an exception.
    @param v
    */
    //void set_motorForce(float v);

    /**
    Gets the motor torque in N * m.
    */
    //float get_motorTorque();

    /**
    Read only property: this method only throws an exception.
    */
    //void set_motorTorque(float v);

    // UNBOUND
    // tolua_end

    /**
    Next joint in the double global linked list of Joints
    */
    QJoint* m_Next;

    /**
    Previous joint in the double global linked list of Joints
    */
    QJoint* m_Previous;

    //Note: m_ConnectedFatherJoint might change into a double linked list of listeners,
    //but now the only joint that has this feature is the gear joint
    //therefore a more simple approach has been used

    /**
    A pointer to a connected joint, valid only if this joint 
    is used by a gear joint.
    */
    //QJoint* m_ConnectedFatherJoint;

    /**
    Gets the pointer to the underlying Box2D joint.
    @return the pointer to the underlying Box2D joint.
    */
    b2Joint* _get_b2Joint();
        
    /**
    The pointer to the underlying Box2D joint instance.
    */
    b2Joint* m_Joint;
        
    /**
    The pointer to the attached sceneNode that contains the pointer to the attached Box2D bodyA.
    */
    QNode* m_NodeA;
        
    /**
    The pointer to the attached sceneNode that contains the pointer to the attached Box2D bodyb.
    */
    QNode* m_NodeB;

    /**
    The x world position in display coordinates of the anchor point.
    Note Joints may have two anchor points, but in case of revolute joint they coincide.
    */
    float m_AnchorDX;

    /**
    The x world position in display coordinates of the anchor point.
    Note Joints may have two anchor points, but in case of revolute joint they coincide.
    */
    float m_AnchorDY;

    /**
    Read only. Gets the motor force.
    */
    //float motorForce;

    /**
    Read only. Gets the speed of the joint (degrees / second or m / s).
    */
    //float jointSpeed;

    /**
    Read only. Gets the joint translation in m.
    */
    //float jointTranslation;

    /**
    Read only. Gets the motor torque in N * m.
    */
    //float motorTorque;

    /**
    Read only. Gets the length1 of a pulley joint.
    */
    //float length1;

    /**
    Read only. Gets the length2 of a pulley joint.
    */
    //float length2;

    /**
    Read only. Gets the ratio of a pulley joint.
    */
    //float ratio;

    /**
    Sets / Gets the ratio for a gear joint.
    */
    //float gearRatio;

    /**
    Sets / Gets the max length of a rope joint.
    */
    //float maxLength;

}; // tolua_export

// tolua_begin
}
}
// tolua_end

#endif // __Q_PHYSICSJOINT_H
