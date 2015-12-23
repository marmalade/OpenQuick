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

#include "QBase.h"

#include <cmath>
#ifndef SHP
#include <cfloat>
#else
#include <float.h>
#endif
#include <cstddef>
#include <limits>

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QVec2
//------------------------------------------------------------------------------
// Note: this class must have a sizeof 8, as the code assumes it can cast
// these objects to those of type b2Vec2 and ccVertex2F. So it must NOT
// have any members other than float x,y and must NOT have any virtual functions.
class QVec2 { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }

    // BOUND, PUBLIC
    QVec2() {};
    QVec2(float _x, float _y);
    
    void Set(float _x, float _y) { x = _x; y = _y; }
    float Length();
    float Normalize();

    // tolua_end
    // tolua++ does not support mapping these
    inline QVec2 operator + (QVec2 const & v) const { return QVec2(x+v.x, y+v.y); }
    inline QVec2 operator - (QVec2 const & v) const { return QVec2(x-v.x, y-v.y); }
    inline float operator * (QVec2 const & v) const { return x*v.x + y*v.y; }
    inline bool operator == (const QVec2& v) const { return (x==v.x) && (y==v.y); }

    inline void operator += (const QVec2& v) { x += v.x; y += v.y; }
    inline void operator -= (const QVec2& v) { x -= v.x; y -= v.y; }
    inline void operator *= (float a) { x *= a; y *= a; }
    // tolua_begin

    bool isPointInsideTri(QVec2& a, QVec2& b, QVec2& c);
    
    QVec2 GetNormal();

    float x, y;
    static QVec2 g_Zero;
    // tolua_end

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_VEC2_H
