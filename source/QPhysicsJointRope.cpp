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
#include "QPhysicsJointRope.h"
#include "QPhysicsNodeProps.h"

QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJointRope
//------------------------------------------------------------------------------
QJointRope::QJointRope()
{
    maxLength = 0.0f;
}
//------------------------------------------------------------------------------
void QJointRope::_init(QNode* nodeA, QNode* nodeB, float absAX, float absAY, float absBX, float absBY, bool collideConnected )
{
    b2RopeJointDef jointDef;

    jointDef.bodyA = nodeA->physics->m_Body;
    jointDef.localAnchorA = nodeA->physics->m_Body->GetLocalPoint(b2Vec2(g_Sim->scaleD2P(absAX), g_Sim->scaleD2P(absAY)));

    jointDef.bodyB = nodeB->physics->m_Body;
    jointDef.localAnchorB = nodeB->physics->m_Body->GetLocalPoint(b2Vec2(g_Sim->scaleD2P(absBX), g_Sim->scaleD2P(absBY)));

    jointDef.collideConnected = collideConnected;
    m_Joint = g_Sim->m_World->CreateJoint(&jointDef);
    m_Joint->SetUserData(this);
    g_Sim->AddJoint(this);
}
//------------------------------------------------------------------------------
void QJointRope::_sync()
{
    b2RopeJoint* ropeJoint = (b2RopeJoint*)m_Joint;
    ropeJoint->SetMaxLength(g_Sim->scaleD2P(maxLength));
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
