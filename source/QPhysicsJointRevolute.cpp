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
#include "QNode.h"
#include "QPhysics.h"
#include "QPhysicsJointRevolute.h"
#include "QPhysicsNodeProps.h"

QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJointRevolute
//------------------------------------------------------------------------------
QJointRevolute::QJointRevolute()
{
    lowerAngle = 0.0f;
    upperAngle = 0.0f;
    limitEnabled = false;

    maxMotorTorque = 0.0f;
    motorSpeed = 0.0f;
    motorEnabled = false;

    // Read-only
    jointSpeed = 0.0f;
    motorTorque = 0.0f;
}
//------------------------------------------------------------------------------
void QJointRevolute::_init(QNode* nodeA, QNode* nodeB, float absDX, float absDY, bool collideConnected)
{
    b2RevoluteJointDef jointDef;
        
    float worldXP = g_Sim->scaleD2P(absDX);
    float worldYP = g_Sim->scaleD2P(absDY);
    b2Vec2 worldP(worldXP, worldYP);
    jointDef.bodyA = nodeA->physics->m_Body;
    jointDef.bodyB = nodeB->physics->m_Body;
    jointDef.localAnchorA = nodeA->physics->m_Body->GetLocalPoint(worldP);
    jointDef.localAnchorB = nodeB->physics->m_Body->GetLocalPoint(worldP);
    jointDef.referenceAngle = g_Sim->angleD2P(nodeB->rotation - nodeA->rotation);
    jointDef.collideConnected = collideConnected;
    m_Joint = g_Sim->m_World->CreateJoint(&jointDef);
    m_Joint->SetUserData(this);
    g_Sim->AddJoint(this);
}
//------------------------------------------------------------------------------
void QJointRevolute::_sync()
{
    b2RevoluteJoint* revJoint = (b2RevoluteJoint*)m_Joint;

    revJoint->EnableLimit(limitEnabled);
    revJoint->SetLimits(g_Sim->angleD2P(lowerAngle), g_Sim->angleD2P(upperAngle));

    revJoint->EnableMotor(motorEnabled);
    revJoint->SetMaxMotorTorque(maxMotorTorque);
    revJoint->SetMotorSpeed(g_Sim->angleD2P(motorSpeed)); // should we allow Set AND Get of this?
    
    // READ-ONLYS
    jointSpeed = g_Sim->radiansToDeg(((b2RevoluteJoint*)m_Joint)->GetJointSpeed());
    motorTorque = revJoint->GetMotorTorque(g_Sim->getPhysicsHz());
    jointAngle = g_Sim->angleP2D(revJoint->GetJointAngle());
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
