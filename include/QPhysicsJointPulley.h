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
	\file QPhysicsJointPulley.h
	\brief Physics joint class: pulley
*/
//------------------------------------------------------------------------------

#ifndef __Q_PHYSICSJOINTPULLEY_H
#define __Q_PHYSICSJOINTPULLEY_H

#include "QPhysicsJoint.h"

// tolua_begin
namespace quick {
class QNode;
namespace physics {
// tolua_end

//------------------------------------------------------------------------------
// QJointPulley
//------------------------------------------------------------------------------
class QJointPulley : public QJoint { // tolua_export
public:
    // tolua_begin
    
    // BOUND, PRIVATE
    QJointPulley();
    ~QJointPulley() {};
    void _init(QNode* nodeA, QNode* nodeB, float groundAnchorAX, float groundAnchorAY, float groundAnchorBX, float groundAnchorBY, float anchorAX, float anchorAY, float anchorBX, float anchorBY, float ratio, bool collideConnected = false);
    void _sync();

    float ratio;
    float lengthA;
    float lengthB;

    // tolua_end
    // READ ONLYS

    // UNBOUND

}; // tolua_export

// tolua_begin
}
}
// tolua_end

#endif // __Q_PHYSICSJOINTPULLEY_H
