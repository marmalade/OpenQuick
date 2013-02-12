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
	\file QVec2.h
	\brief Base class for all OpenQuick display object intermediaries.
*/
//------------------------------------------------------------------------------

#ifndef __Q_VEC2_H
#define __Q_VEC2_H

#include "Box2D/Box2D.h"

// tolua_begin
namespace quick {
// tolua_end

// DO WE REALLY NEED TO BIND ANY OF THIS?

//------------------------------------------------------------------------------
// QVec2
//------------------------------------------------------------------------------
// Use Box2D's 2D vector, and extend it
struct  QVec2 : public b2Vec2 { // tolua_export
public:
    QVec2() {};
    QVec2(float _x, float _y);

    inline QVec2 operator + (QVec2 const & v) const { return QVec2(x+v.x, y+v.y); }
    inline QVec2 operator - (QVec2 const & v) const { return QVec2(x-v.x, y-v.y); }
    
    // tolua_begin
    QVec2 GetNormal();
    // tolua_end

    static QVec2 g_Zero;

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_VEC2_H
