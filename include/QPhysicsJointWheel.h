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
	\file QPhysicsJointWheel.h
	\brief Physics joint class: wheel
*/
//------------------------------------------------------------------------------

#ifndef __Q_PHYSICSJOINTWHEEL_H
#define __Q_PHYSICSJOINTWHEEL_H

#include "QPhysicsJoint.h"

// tolua_begin
namespace quick {
class QNode;
namespace physics {
// tolua_end

//------------------------------------------------------------------------------
// QJointWheel
//------------------------------------------------------------------------------
class QJointWheel : public QJoint { // tolua_export
public:
    // tolua_begin
    
    // BOUND, PRIVATE
    QJointWheel();
    ~QJointWheel() {};
    void _init(QNode* nodeA, QNode* nodeB, float localAxisX, float localAxisY, 
                float anchorAX, float anchorAY, float anchorBX, float anchorBY, 
                bool collideConnected = false);
    void _sync();

    float motorEnabled;
    float motorSpeed;
    float maxMotorTorque;
    float springFrequency;
    float springDampingRatio;

    // tolua_end
    // READ ONLYS

    Q_READONLY_VARIABLE(float, motorTorque);
    Q_READONLY_VARIABLE(float, jointSpeed);
    Q_READONLY_VARIABLE(float, jointTranslation);

    // UNBOUND

}; // tolua_export

// tolua_begin
}
}
// tolua_end

#endif // __Q_PHYSICSJOINTWHEEL_H
