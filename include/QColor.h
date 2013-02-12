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
	\file QColor.h
	\brief 3-component color class (r, g, b) using float values.
*/
//------------------------------------------------------------------------------

#ifndef __Q_COLOR_H
#define __Q_COLOR_H

#include "QDefines.h"
#include "ccTypes.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QColor
//------------------------------------------------------------------------------
// The Color object is a 4-component color vector (r, g, b, a) using 8-bit values.
// tolua_begin
class QColor
{
public:
    QColor() {};
    QColor(int _r, int _g, int _b) { r=_r, g=_g, b=_b, a=0xff; }
    QColor(int _r, int _g, int _b, int _a) { r=_r, g=_g, b=_b, a=_a; }
   ~QColor() {};
    void set(int _r, int _g, int _b) { r=_r, g=_g, b=_b; }
	void set(int _r, int _g, int _b, int _a) { r=_r, g=_g, b=_b, a=_a; }

	// Set from ccColor4F
	// tolua_end
	QColor& operator = (cocos2d::ccColor4F const & ccc)
	{
		r = (int)(ccc.r * 255);
		g = (int)(ccc.g * 255);
		b = (int)(ccc.b * 255);
		a = (int)(ccc.a * 255);
		return *this;
	}
	// tolua_begin

	// Convert to ccColor4F
	cocos2d::ccColor4F toCCC4F()
	{
		cocos2d::ccColor4F c = cocos2d::ccc4f(r/255.0f, g/255.0f, b/255.0f, a/255.0f);
		return c;
	}

    unsigned char r, g, b, a;
};
// tolua_end

// tolua_begin
}
// tolua_end

#endif // __Q_COLOR_H
