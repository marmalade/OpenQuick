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
#include "QPhysicsJointPulley.h"
#include "QPhysicsNodeProps.h"

QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJointPulley
//------------------------------------------------------------------------------
QJointPulley::QJointPulley()
{
    ratio = 1.0f;
    lengthA = 0.0f;
    lengthB = 0.0f;
}
//------------------------------------------------------------------------------
void QJointPulley::_init(QNode* nodeA, QNode* nodeB, float groundAnchorAX, float groundAnchorAY, float groundAnchorBX, float groundAnchorBY, float anchorAX, float anchorAY, float anchorBX, float anchorBY, float ratio, bool collideConnected)
{
    b2PulleyJointDef jointDef;

    // Node A stuff
    jointDef.bodyA = nodeA->physics->m_Body;
    jointDef.groundAnchorA = b2Vec2(g_Sim->scaleD2P(groundAnchorAX), g_Sim->scaleD2P(groundAnchorAY));
    jointDef.localAnchorA = b2Vec2(g_Sim->scaleD2P(anchorAX), g_Sim->scaleD2P(anchorAY));

    // Node B stuff
    jointDef.bodyB = nodeB->physics->m_Body;
    jointDef.groundAnchorB = b2Vec2(g_Sim->scaleD2P(groundAnchorBX), g_Sim->scaleD2P(groundAnchorBY));
    jointDef.localAnchorB = b2Vec2(g_Sim->scaleD2P(anchorBX), g_Sim->scaleD2P(anchorBY));

    // Initial lengths, all calculated in physics space
    jointDef.lengthA = (jointDef.groundAnchorA - jointDef.localAnchorA).Length();
    jointDef.lengthB = (jointDef.groundAnchorB - jointDef.localAnchorB).Length();

    jointDef.ratio = ratio;
    jointDef.collideConnected = collideConnected;
    m_Joint = g_Sim->m_World->CreateJoint(&jointDef);
    m_Joint->SetUserData(this);
    g_Sim->AddJoint(this);
}
//------------------------------------------------------------------------------
void QJointPulley::_sync()
{
    b2PulleyJoint* pulleyJoint = (b2PulleyJoint*)m_Joint;
    ratio = pulleyJoint->GetRatio();
    lengthA = g_Sim->scaleP2D(pulleyJoint->GetLengthA());
    lengthB = g_Sim->scaleP2D(pulleyJoint->GetLengthB());
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
