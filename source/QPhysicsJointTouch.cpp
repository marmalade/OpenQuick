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
#include "QPhysicsJointTouch.h"
#include "QPhysicsNodeProps.h"

QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJointTouch
//------------------------------------------------------------------------------
QJointTouch::QJointTouch()
{
}
//------------------------------------------------------------------------------
void QJointTouch::_init(QNode* nodeA, float dampingRatio, float frequency, float maxForce)
{
    b2MouseJointDef jointDef;

    this->dampingRatio = dampingRatio;
    this->frequency = frequency;
    this->maxForce = maxForce;

    jointDef.bodyA = g_Sim->GetGroundBody();    // dummy "ground body" singleton
    jointDef.bodyB = nodeA->physics->m_Body;    // note our "nodeA" goes into Box2D "bodyB" !
    jointDef.dampingRatio = dampingRatio;
    jointDef.frequencyHz = frequency;
    jointDef.maxForce = maxForce;

    m_Joint = g_Sim->m_World->CreateJoint(&jointDef);
    m_Joint->SetUserData(this);
    g_Sim->AddJoint(this);
}
//------------------------------------------------------------------------------
void QJointTouch::_sync()
{
    b2MouseJoint* mouseJoint = (b2MouseJoint*)m_Joint;
    mouseJoint->SetDampingRatio(dampingRatio);
    mouseJoint->SetFrequency(frequency);
    mouseJoint->SetMaxForce(maxForce);
}
//------------------------------------------------------------------------------
void QJointTouch::setTarget(float tx, float ty)
{
    b2MouseJoint* mouseJoint = (b2MouseJoint*)m_Joint;
    mouseJoint->SetTarget(b2Vec2(g_Sim->scaleD2P(tx), g_Sim->scaleD2P(ty)));
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
