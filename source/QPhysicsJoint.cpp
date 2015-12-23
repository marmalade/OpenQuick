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

#include "QDefines.h"
#include "QPhysicsJoint.h"
#include "QPhysics.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJoint
//------------------------------------------------------------------------------
QJoint::QJoint() : m_Joint(NULL), m_NodeA(NULL), m_NodeB(NULL), m_Next(NULL), m_Previous(NULL)
{
    // This is not accessible from LUA: call physics::_createNewJoint instead
}
//------------------------------------------------------------------------------
QJoint::~QJoint()
{
    // Remove the joint from our global list
    g_Sim->RemoveJoint(this);
}
//------------------------------------------------------------------------------
void QJoint::_sync()
{
    // EMPTY: RELY ON DERIVED METHOD
}
//------------------------------------------------------------------------------
bool QJoint::get_isActive()
{
    return m_Joint->IsActive();
}
//------------------------------------------------------------------------------
void QJoint::set_isActive(bool ac)
{
    QAssert(false, "'isActive' is a read only property");
}
//------------------------------------------------------------------------------
void QJoint::getAnchorA(float* x, float* y)
{
    b2Vec2 anchorWorld = m_Joint->GetAnchorA();
    *x = g_Sim->scaleP2D(anchorWorld.x);
    *y = g_Sim->scaleP2D(anchorWorld.y);
}
//------------------------------------------------------------------------------
void QJoint::getAnchorB(float* x, float* y)
{
    b2Vec2 anchorWorld = m_Joint->GetAnchorB();
    *x = g_Sim->scaleP2D(anchorWorld.x);
    *y = g_Sim->scaleP2D(anchorWorld.y);    
}
//------------------------------------------------------------------------------
void QJoint::getReactionForce(float* x, float* y)
{
    b2Vec2 reactionForce = m_Joint->GetReactionForce(g_Sim->getPhysicsHz());
    *x = reactionForce.x;
    *y = reactionForce.y;
} 
//------------------------------------------------------------------------------
float QJoint::getReactionTorque()
{
    return m_Joint->GetReactionTorque(g_Sim->getPhysicsHz());
}
//------------------------------------------------------------------------------
/*void QJoint::setRotationLimits(float lowerDeg, float upperDeg)
{
    switch(m_Joint->GetType())
    {
        case e_revoluteJoint:
            ((b2RevoluteJoint*)m_Joint)->SetLimits( g_Sim->angleD2P(lowerDeg), g_Sim->angleD2P(upperDeg));
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::setRotationLimits");
        break;
    }
}
//------------------------------------------------------------------------------
void QJoint::setLimits(float lowerLimit, float upperLimit)
{
    switch(m_Joint->GetType())
    {
        case e_prismaticJoint:
            ((b2PrismaticJoint*)m_Joint)->SetLimits(lowerLimit,upperLimit);
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::setLimits");
        break;
    }
}
//------------------------------------------------------------------------------
void QJoint::getLimits(float* lowerLimit  , float* upperLimit )
{
    switch(m_Joint->GetType())
    {
        case e_prismaticJoint:
            *lowerLimit = ((b2PrismaticJoint*)m_Joint)->GetLowerLimit();
            *upperLimit = ((b2PrismaticJoint*)m_Joint)->GetUpperLimit();
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::setLimits");
        break;
    }
}
//------------------------------------------------------------------------------
void QJoint::getRotationLimits(float* lowerDeg, float* upperDeg)
{
    switch(m_Joint->GetType())
    {
        case e_revoluteJoint:
            *lowerDeg = g_Sim->radiansToDeg(((b2RevoluteJoint*)m_Joint)->GetLowerLimit());
            *upperDeg = g_Sim->radiansToDeg(((b2RevoluteJoint*)m_Joint)->GetUpperLimit());
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getRotationLimits");
        break;
    }
}
//------------------------------------------------------------------------------
float QJoint::getJointAngle()
{
    switch(m_Joint->GetType())
    {
        case e_revoluteJoint:
            return g_Sim->radiansToDeg( ((b2RevoluteJoint*)m_Joint)->GetJointAngle() );
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getJointAngle");
        break;
    }
    return 0;
}
//------------------------------------------------------------------------------
void QJoint::getGroundAnchorA(float* x, float* y)
{
    b2Vec2 anchorA;
    switch(m_Joint->GetType())
    {
        case e_pulleyJoint:
            anchorA = ((b2PulleyJoint*)m_Joint)->GetGroundAnchorA();
            *x = g_Sim->scaleP2D(anchorA.x);
            *y = g_Sim->scaleP2D(anchorA.y);
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getGroundAnchorA");
        break;
    }
}
//------------------------------------------------------------------------------
void QJoint::getGroundAnchorB(float* x, float* y)
{
    b2Vec2 anchorB;
    switch(m_Joint->GetType())
    {
        case e_pulleyJoint:
            anchorB = ((b2PulleyJoint*)m_Joint)->GetGroundAnchorB();
            *x = g_Sim->scaleP2D(anchorB.x);
            *y = g_Sim->scaleP2D(anchorB.y);
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getGroundAnchorB");
        break;
    }
}
//------------------------------------------------------------------------------
void QJoint::setTarget(float absDX, float absDY)
{
    switch(m_Joint->GetType())
    {
        case e_mouseJoint:
            ((b2MouseJoint*)m_Joint)->SetTarget(b2Vec2(g_Sim->scaleD2P(absDX),g_Sim->scaleD2P(absDY)));
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::setTarget");
        break;
    }
}
//------------------------------------------------------------------------------
void QJoint::getTarget(float* absDX, float* absDY)
{
    b2Vec2 target;
    switch(m_Joint->GetType())
    {
        case e_mouseJoint:
            target = ((b2MouseJoint*)m_Joint)->GetTarget();
            *absDX = g_Sim->scaleP2D(target.x);
            *absDY = g_Sim->scaleP2D(target.y);
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getTarget");
        break;
    }
}
//------------------------------------------------------------------------------
QJoint* QJoint::getJoint1()
{
    switch(m_Joint->GetType())
    {
        case e_gearJoint:
            return (QJoint*) ((b2GearJoint*)m_Joint)->GetJoint1()->GetUserData();
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getJoint1");
        break;
    }
    return NULL;
}
//------------------------------------------------------------------------------
QJoint* QJoint::getJoint2()
{
    switch(m_Joint->GetType())
    {
        case e_gearJoint:
            return (QJoint*) ((b2GearJoint*)m_Joint)->GetJoint2()->GetUserData();
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getJoint2");
        break;
    }
    return NULL;
}
//------------------------------------------------------------------------------
b2LimitState QJoint::getLimitState()
{
    switch(m_Joint->GetType())
    {
        case e_ropeJoint:
            return ((b2RopeJoint*)m_Joint)->GetLimitState();
        break;
        default:
            QAssert(false, "Unsupported joint type in QJoint::getJoint2");
        break;
    }
    return e_inactiveLimit;//just a random default value
}
//------------------------------------------------------------------------------
float QJoint::get_motorTorque()
{
    return motorTorque;
    //return ((b2RevoluteJoint*)m_Joint)->GetMotorTorque(g_Sim->getPhysicsHz());
}
//------------------------------------------------------------------------------
void QJoint::set_motorTorque(float v)
{
    QAssert(false,"Attempted to write to QJoint::motorTorque");
}
//------------------------------------------------------------------------------
float QJoint::get_motorForce()
{
    return motorForce;
}
//------------------------------------------------------------------------------
void QJoint::set_motorForce(float v)
{
    QAssert(false,"Attempted to write to QJoint::motorForce");
}
//------------------------------------------------------------------------------
float QJoint::get_jointSpeed()
{
    return jointSpeed;
    //return g_Sim->radiansToDeg( ((b2RevoluteJoint*)m_Joint)->GetJointSpeed() );
}
//------------------------------------------------------------------------------
void QJoint::set_jointSpeed(float v)
{
    QAssert(false,"Attempted to write to QJoint::jointSpeed");
}
//------------------------------------------------------------------------------
float QJoint::get_jointTranslation()
{
    return jointTranslation;
}
//------------------------------------------------------------------------------
void QJoint::set_jointTranslation(float v)
{
    QAssert(false,"Attempted to write to QJoint::jointTranslation");
}
//------------------------------------------------------------------------------
float QJoint::get_length1()
{
    return length1;
}
//------------------------------------------------------------------------------
void QJoint::set_length1(float v)
{
    QAssert(false,"Attempted to write to QJoint::length1");
}
//------------------------------------------------------------------------------
float QJoint::get_length2()
{
    return length2;
}
//------------------------------------------------------------------------------
void QJoint::set_length2(float v)
{
    QAssert(false,"Attempted to write to QJoint::length2");
}
//------------------------------------------------------------------------------
float QJoint::get_ratio()
{
    return ratio;
}
//------------------------------------------------------------------------------
void QJoint::set_ratio(float v)
{
    QAssert(false,"Attempted to write to QJoint::ratio");
}*/

//------------------------------------------------------------------------------
/*void QJoint::_createBox2DDistanceJoint(QNode* nodeA, QNode* nodeB, float absADX, float absADY,float absBDX, float absBDY, bool collideConnected)
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newDistanceJoint(m_NodeA, m_NodeB,absADX, absADY,absBDX, absBDY, collideConnected);
    //the following line is needed to update LUA side from Box2D side.
    length = ((b2DistanceJoint*)m_Joint)->GetLength();
    QAssert(m_Joint->GetType() == e_distanceJoint, "ERROR in QJoint::_createBox2DDistanceJoint: wrong joint type");
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DRevoluteJoint(QNode* nodeA, QNode* nodeB, float absDX, float absDY, bool collideConnected)
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newRevoluteJoint(m_NodeA, m_NodeB,absDX, absDY, collideConnected);
    QAssert(m_Joint->GetType() == e_revoluteJoint, "ERROR in QJoint::_createBox2DRevoluteJoint: wrong joint type");
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DPrismaticJoint(QNode* nodeA, QNode* nodeB, float absDX, float absDY, float DXAxis, float DYAxis, bool collideConnected )
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newPrismaticJoint(m_NodeA, m_NodeB,absDX, absDY, DXAxis, DYAxis, collideConnected);
    QAssert(m_Joint->GetType() == e_prismaticJoint, "ERROR in QJoint::_createBox2DPrismaticJoint: wrong joint type");
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DWeldJoint(QNode* nodeA, QNode* nodeB, float absDX, float absDY, bool collideConnected )
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newWeldJoint(m_NodeA, m_NodeB, absDX, absDY, collideConnected);
    QAssert(m_Joint->GetType() == e_weldJoint, "ERROR in QJoint::_createBox2DWeldJoint: wrong joint type");
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DFrictionJoint(QNode* nodeA, QNode* nodeB, float absDX, float absDY, bool collideConnected)
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newFrictionJoint(m_NodeA, m_NodeB,absDX, absDY, collideConnected);
    QAssert(m_Joint->GetType() == e_frictionJoint, "ERROR in QJoint::_createBox2DFrictionJoint: wrong joint type");
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DWheelJoint(QNode* nodeA, QNode* nodeB, float absDX, float absDY, float DXAxis, float DYAxis, bool collideConnected)
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newWheelJoint(m_NodeA, m_NodeB,absDX, absDY, DXAxis, DYAxis, collideConnected);
    QAssert(m_Joint->GetType() == e_wheelJoint, "ERROR in QJoint::_createBox2DWheelJoint: wrong joint type");
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DPulleyJoint(QNode* nodeA, QNode* nodeB, float absGroungAX, float absGroungAY, 
        float absGroungBX, float absGroungBY, float absAX, float absAY, float absBX, float absBY,
        float ratio , bool collideConnected)
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newPulleyJoint(m_NodeA, m_NodeB,absGroungAX, absGroungAY, absGroungBX, absGroungBY, absAX, absAY, absBX, absBY, ratio, collideConnected);
    QAssert(m_Joint->GetType() == e_pulleyJoint, "ERROR in QJoint::_createBox2DPulleyJoint: wrong joint type");
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DMouseJoint(QNode* nodeA, float absAX, float absAY)
{
    m_NodeA = nodeA;
    m_Joint = g_Sim->_newMouseJoint(m_NodeA, absAX, absAY );
    QAssert(m_Joint->GetType() == e_mouseJoint, "ERROR in QJoint::_createBox2DMouseJoint: wrong joint type");
    frequency = ((b2MouseJoint*)m_Joint)->GetFrequency();
    dampingRatio = ((b2MouseJoint*)m_Joint)->GetDampingRatio();
    maxForce = ((b2MouseJoint*)m_Joint)->GetMaxForce();
    m_Joint->SetUserData(this);
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DGearJoint(QJoint* jointA, QJoint* jointB, bool collideConnected )
{
    m_NodeA = (QNode*)jointA->_get_b2Joint()->GetBodyA()->GetUserData();
    m_NodeB = (QNode*)jointB->_get_b2Joint()->GetBodyB()->GetUserData();
    m_Joint = g_Sim->_newGearJoint(jointA, jointB, collideConnected);
    QAssert(m_Joint->GetType() == e_gearJoint, "ERROR in QJoint::_createBox2DGearJoint: wrong joint type");
    gearRatio = ((b2GearJoint*)m_Joint)->GetRatio();
    m_Joint->SetUserData(this);
    jointA->m_ConnectedFatherJoint = this;
    jointB->m_ConnectedFatherJoint = this;
}
//------------------------------------------------------------------------------
void QJoint::_createBox2DRopeJoint(QNode* nodeA, QNode* nodeB, float absAX, float absAY, float absBX, float absBY, bool collideConnected )
{
    m_NodeA = nodeA;
    m_NodeB = nodeB;
    m_Joint = g_Sim->_newRopeJoint(m_NodeA, m_NodeB, absAX, absAY, absBX, absBY, collideConnected);
    QAssert(m_Joint->GetType() == e_ropeJoint, "ERROR in QJoint::_createBox2DRopeJoint: wrong joint type");
    maxLength = ((b2RopeJoint*)m_Joint)->GetMaxLength();
    m_Joint->SetUserData(this);
}*/
//------------------------------------------------------------------------------
QNode* QJoint::getNodeA()
{
    return m_NodeA;
}
//------------------------------------------------------------------------------
QNode* QJoint::getNodeB()
{
    return m_NodeB;
}
//------------------------------------------------------------------------------
bool QJoint::get_isCollideConnected()
{
    return m_Joint->GetCollideConnected();
}
//------------------------------------------------------------------------------
void QJoint::set_isCollideConnected(bool val)
{
    QAssert(false, "'isCollideConnected is a read only property'");
}
//------------------------------------------------------------------------------
b2Joint* QJoint::_get_b2Joint()
{
    return m_Joint;
}
//------------------------------------------------------------------------------
void QJoint::destroy()
{
    // TODO
/*    if(_get_b2Joint()->GetType() == e_gearJoint)
    {
        QAssert(m_ConnectedFatherJoint == NULL, "ERROR in QJoint::destroy -> gear joint has non null m_ConnectedFatherJoint");
        QJoint* j1 = (QJoint*)((b2GearJoint*)_get_b2Joint())->GetJoint1()->GetUserData();
        QJoint* j2 = (QJoint*)((b2GearJoint*)_get_b2Joint())->GetJoint2()->GetUserData();
        //disconnecting children joints
        j1->m_ConnectedFatherJoint = NULL;
        j2->m_ConnectedFatherJoint = NULL;
    }
    if(m_ConnectedFatherJoint)
    {
        QAssert(m_ConnectedFatherJoint->_get_b2Joint()->GetType() == e_gearJoint,"ERROR in QJoint::destroy -> connected joint is not a gear joint");
        QJoint* j1 = (QJoint*)((b2GearJoint*)m_ConnectedFatherJoint->_get_b2Joint())->GetJoint1()->GetUserData();
        QJoint* j2 = (QJoint*)((b2GearJoint*)m_ConnectedFatherJoint->_get_b2Joint())->GetJoint2()->GetUserData();
        m_ConnectedFatherJoint->destroy();
        //disconnecting this joint and its sibling 
        j1->m_ConnectedFatherJoint = NULL;
        j2->m_ConnectedFatherJoint = NULL;
    }*/
    g_Sim->_destroyJoint(this);
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
