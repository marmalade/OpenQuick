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

#include "QPhysics.h"
#include "QDirector.h"
#include "QLuaHelpers.h"
#include "QNode.h"

#include "Box2D/Box2D.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

QSim* g_Sim = NULL;

//------------------------------------------------------------------------------
// QSim
//------------------------------------------------------------------------------
QSim::QSim()
{
    g_Sim = this;

	// Set default simulation bounds from screen resolution
	float sw = g_QDirector->displayWidth;
	float sh = g_QDirector->displayHeight;

    m_Scale = 50.0f; // default scaling... so (0.1 - 10) in physics coords corresponds to (5 - 500) in display coords

    m_Gravity = b2Vec2(0.0f, -10.f);
    m_Paused = false;
    m_TimeScale = 1.0f;
    m_PhysicsHz = 60;
    m_TimeStep = 1.0f / m_PhysicsHz;
    m_VelIterations = 8;
    m_PosIterations = 3;
    m_Accumulator = 0.0f;
	m_GroundBody = NULL;

    // Initialise Box2D world?
    m_World = new b2World(m_Gravity);
    m_World->SetContactListener(&m_ContactListener);
    
    m_JointsList = NULL;

    debugDraw = false;
}
//------------------------------------------------------------------------------
QSim::~QSim()
{
    g_Sim = NULL;
}
//------------------------------------------------------------------------------
void QSim::setScale(float scale)
{
    m_Scale = scale;
}
//------------------------------------------------------------------------------
void QSim::_addNode(QNode* pNode)
{
	// Add this node to the simulation
	if (pNode->physics)
	{
		// Node is already part of the simulation
		return;
	}
    // Create our object to hold physics info
	// The QNodeProps object has a pointer back to pNode, so is self-contained.
	pNode->physics = new QNodeProps(pNode);
}
//------------------------------------------------------------------------------
void QSim::_removeNode(QNode* pNode)
{
	// Remove this node from the simulation
	if (!pNode->physics)
	{
		// Node is not part of the simulation
		return;
	}
    // Destroy our QNodeProps object, which will remove stuff from Box2D
	delete pNode->physics;
	pNode->physics = NULL;
}
//------------------------------------------------------------------------------
void QSim::AddJoint(QJoint* joint)
{
    if(m_JointsList)
    {
        m_JointsList->m_Next = joint;
        joint->m_Previous = m_JointsList;
    }
    m_JointsList = joint;
}
//------------------------------------------------------------------------------
void QSim::SyncJoints()
{
    QJoint* listIter = m_JointsList;//the iterator points to the end of the list
    for(; listIter ; listIter = listIter->m_Previous)
    {
        listIter->_sync();
    }
}
//------------------------------------------------------------------------------
void QSim::RemoveJoint(QJoint* joint)
{
    if(joint == m_JointsList)
    {
        m_JointsList = joint->m_Previous;
    }
    if(joint->m_Previous)
    {
        joint->m_Previous->m_Next = joint->m_Next;
    }
    if(joint->m_Next)
    {
        joint->m_Next->m_Previous = joint->m_Previous;
    }
}
//------------------------------------------------------------------------------
b2Body* QSim::GetGroundBody()
{
	if( m_GroundBody == NULL )
	{
		b2BodyDef groundBodyDef;
		groundBodyDef.type = b2_staticBody;
		groundBodyDef.allowSleep = true;
		groundBodyDef.active = true;
		groundBodyDef.position = b2Vec2(0,0);
		groundBodyDef.angle = 0;
		groundBodyDef.angularDamping = 1.0;
		groundBodyDef.angularVelocity = 0.0;
		groundBodyDef.fixedRotation = true;
		groundBodyDef.linearDamping = 1.0;
		groundBodyDef.linearVelocity = b2Vec2(0.0,0.0);    
		m_GroundBody = m_World->CreateBody(&groundBodyDef);
	}
    return m_GroundBody;
}
//------------------------------------------------------------------------------
void QSim::_destroyBody(b2Body* body)
{
    b2JointEdge* jointListIter = body->GetJointList();
    for(;jointListIter; jointListIter = jointListIter->next)
    {
        _destroyOnlyJoint((QJoint*)jointListIter->joint->GetUserData());
    }
    m_World->DestroyBody(body);//this also deletes the attached joints
}
//------------------------------------------------------------------------------
void QSim::_destroyOnlyJoint(QJoint* joint)
{
    RemoveJoint(joint);
}
//------------------------------------------------------------------------------
void QSim::_destroyJoint(QJoint* joint)
{
    m_World->DestroyJoint(joint->_get_b2Joint());//this removes the Box2D joint from the attached Box2D bodies
    _destroyOnlyJoint(joint);
}
//------------------------------------------------------------------------------
float QSim::getPhysicsHz()
{
    return (float)m_PhysicsHz;
}
//------------------------------------------------------------------------------
void QSim::Update(float dt)
{
	// physics loop (fixed timing at 60Hz)
//	m_Accumulator += m_DeltaTime;
    SyncJoints();
    if (m_Paused == false)
    {
	    m_Accumulator += dt * m_TimeScale;
	    while(m_Accumulator > 0.0f)
	    {
		    m_World->Step(m_TimeStep, m_VelIterations, m_PosIterations);
		    m_Accumulator -= m_TimeStep;
	    }
        // FIXED STEP FOR NOW, 1/30TH SECOND
//	    m_World->Step(1.0f / 30, velocityIterations, positionIterations);
    }
}
//------------------------------------------------------------------------------
void QSim::getGravity(float* x, float* y)
{
    *x = scaleP2D(m_Gravity.x);
    *y = scaleP2D(m_Gravity.y);
}
//------------------------------------------------------------------------------
void QSim::setGravity(float x, float y)
{
    //QTrace("QSim::setGravity %f,%f",x,y);
    m_Gravity.x = scaleD2P(x);
    m_Gravity.y = scaleD2P(y);
    m_World->SetGravity(m_Gravity);
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
