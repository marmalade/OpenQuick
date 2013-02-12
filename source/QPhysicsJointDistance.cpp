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
#include "QPhysicsJointDistance.h"
#include "QPhysicsNodeProps.h"

QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJointDistance
//------------------------------------------------------------------------------
QJointDistance::QJointDistance()
{
    length = 0.0f; 
    frequency = 4.0f;
    dampingRatio = 0.5f;
}
//------------------------------------------------------------------------------
void QJointDistance::_init(QNode* nodeA, QNode* nodeB, float absADX, float absADY,float absBDX, float absBDY, bool collideConnected)
{
    b2DistanceJointDef jointDef;
    float worldXP = g_Sim->scaleD2P(absADX);
    float worldYP = g_Sim->scaleD2P(absADY);
    b2Vec2 worldPA(worldXP, worldYP);
    jointDef.bodyA = nodeA->physics->m_Body;
    jointDef.localAnchorA = nodeA->physics->m_Body->GetLocalPoint(worldPA);

    worldXP = g_Sim->scaleD2P(absBDX);
    worldYP = g_Sim->scaleD2P(absBDY);
    b2Vec2 worldPB(worldXP, worldYP);
    jointDef.bodyB = nodeB->physics->m_Body;
    jointDef.localAnchorB = nodeB->physics->m_Body->GetLocalPoint(worldPB);

    // WARNING: Box2D does not compute the length, if this parameter is left at its default the result might be different than expected
    jointDef.length = (worldPA - worldPB).Length();

    jointDef.collideConnected = collideConnected;
    m_Joint = g_Sim->m_World->CreateJoint(&jointDef);
    m_Joint->SetUserData(this);

    // The following line is needed to update LUA side from Box2D side.
    length = ((b2DistanceJoint*)m_Joint)->GetLength();

    // CHECK - WHERE DOES m_NodeA, m_NodeB get set?
    // SHOULDN'T THESE JUST BE nodeA, nodeB AND BE BOUND AS READ-ONLY FROM TOLUA?
    g_Sim->AddJoint(this);
}
//------------------------------------------------------------------------------
void QJointDistance::_sync()
{
    b2DistanceJoint* distJoint = (b2DistanceJoint*)m_Joint;
//    distJoint->SetLength(g_Sim->scaleD2P(length));
    distJoint->SetFrequency(frequency);
    distJoint->SetDampingRatio(dampingRatio);
    length = ((b2DistanceJoint*)m_Joint)->GetLength();
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
