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
#include "QVec2.h"

QUICK_NAMESPACE_BEGIN;

QVec2 QVec2::g_Zero = QVec2(0.0f, 0.0f);

//------------------------------------------------------------------------------
// QVec2
//------------------------------------------------------------------------------
QVec2::QVec2(float _x, float _y)
{
    x = _x;
    y = _y;
}
//------------------------------------------------------------------------------
QVec2 QVec2::GetNormal()
{
    QVec2 n;
	n.x =  y;
	n.y = -x;
	n.Normalize();
	return n;
}
//------------------------------------------------------------------------------
float QVec2::Length()
{
    return std::sqrt(x * x + y * y);
}
//------------------------------------------------------------------------------
float QVec2::Normalize()
{
    float length = Length();
    if (length < FLT_EPSILON)
    {
        return 0.0f;
    }
    float invLength = 1.0f / length;
    x *= invLength;
    y *= invLength;

    return length;
}
//------------------------------------------------------------------------------
bool QVec2::isPointInsideTri(QVec2& a, QVec2& b, QVec2& c) 
{
    // From http://www.blackpawn.com/texts/pointinpoly/default.html

    // Compute vectors        
    QVec2 v0 = c - a;
    QVec2 v1 = b - a;
    QVec2 v2 = *this - a;

    // Compute dot products
    float dot00 = v0 * v0;
    float dot01 = v0 * v1;
    float dot02 = v0 * v2;
    float dot11 = v1 * v1;
    float dot12 = v1 * v2;

    // Compute barycentric coordinates
    float invDenom = 1 / (dot00 * dot11 - dot01 * dot01);
    float u = (dot11 * dot02 - dot01 * dot12) * invDenom;
    float v = (dot00 * dot12 - dot01 * dot02) * invDenom;

    // Check if point is in triangle
    return (u >= 0) && (v >= 0) && (u + v < 1);
}

QUICK_NAMESPACE_END;
