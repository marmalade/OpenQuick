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
#include "QPhysicsJointGear.h"
#include "QPhysicsNodeProps.h"

QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QJointGear
//------------------------------------------------------------------------------
QJointGear::QJointGear()
{
    ratio = 1.0f;
    joint1 = NULL;
    joint2 = NULL;
}
//------------------------------------------------------------------------------
void QJointGear::_init(QJoint* joint1, QJoint* joint2, float ratio)
{
    b2GearJointDef jointDef;

    jointDef.joint1 = joint1->m_Joint;
    jointDef.joint2 = joint2->m_Joint;
    jointDef.bodyA = joint1->m_Joint->GetBodyA();
    jointDef.bodyB = joint2->m_Joint->GetBodyA();
    jointDef.ratio = ratio;
    m_Joint = g_Sim->m_World->CreateJoint(&jointDef);
    m_Joint->SetUserData(this);
    g_Sim->AddJoint(this);
}
//------------------------------------------------------------------------------
void QJointGear::_sync()
{
    b2GearJoint* gearJoint = (b2GearJoint*)m_Joint;
    gearJoint->SetRatio(ratio);
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;
