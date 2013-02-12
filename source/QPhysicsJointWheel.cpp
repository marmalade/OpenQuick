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
#include "QPhysicsJointWheel.h"
#include "QPhysicsNodeProps.h"

QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJointWheel
//------------------------------------------------------------------------------
QJointWheel::QJointWheel()
{
    motorEnabled = 0.0f;
    motorSpeed = 0.0f;
    maxMotorTorque = 0.0f;
    springFrequency = 2.0f;
    springDampingRatio = 0.7f;

    motorTorque = 0.0f;
    jointSpeed = 0.0f;
    jointTranslation = 0.0f;
}
//------------------------------------------------------------------------------
void QJointWheel::_init(QNode* nodeA, QNode* nodeB, float localAxisX, float localAxisY, 
                        float anchorAX, float anchorAY, float anchorBX, float anchorBY,
                        bool collideConnected)
{
    b2WheelJointDef jointDef;

    jointDef.bodyA = nodeA->physics->m_Body;
    jointDef.localAnchorA = nodeA->physics->m_Body->GetLocalPoint(b2Vec2(g_Sim->scaleD2P(anchorAX), g_Sim->scaleD2P(anchorAY)));

    jointDef.bodyB = nodeB->physics->m_Body;
    jointDef.localAnchorB = nodeB->physics->m_Body->GetLocalPoint(b2Vec2(g_Sim->scaleD2P(anchorBX), g_Sim->scaleD2P(anchorBY)));

    jointDef.localAxisA = b2Vec2(localAxisX, localAxisY);
    jointDef.collideConnected = collideConnected;

    m_Joint = g_Sim->m_World->CreateJoint(&jointDef);
    m_Joint->SetUserData(this);
    g_Sim->AddJoint(this);
}
//------------------------------------------------------------------------------
void QJointWheel::_sync()
{
    b2WheelJoint* wheelJoint = (b2WheelJoint*)m_Joint;
    wheelJoint->EnableMotor(motorEnabled);
    wheelJoint->SetMotorSpeed(g_Sim->angleD2P(motorSpeed));
    wheelJoint->SetMaxMotorTorque(maxMotorTorque);
    wheelJoint->SetSpringFrequencyHz(springFrequency);
    wheelJoint->SetSpringDampingRatio(springDampingRatio);

    // Readonly
    jointSpeed = g_Sim->angleP2D(wheelJoint->GetJointSpeed());
    motorTorque = wheelJoint->GetMotorTorque(g_Sim->getPhysicsHz());
    jointTranslation = g_Sim->scaleP2D(wheelJoint->GetJointTranslation());
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
