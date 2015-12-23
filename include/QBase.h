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
	\file QBase.h
	\brief Base singleton.
*/
//------------------------------------------------------------------------------

#ifndef __Q_BASE_H
#define __Q_BASE_H

#include "QDefines.h"
//#include <string>

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QBaseObject
//------------------------------------------------------------------------------
// Base class interface for all objects that need bridging to Lua
class QBaseObject { // tolua_export
public:
    // tolua_begin
    QBaseObject() {};
    ~QBaseObject() {};

    // tolua_end
}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_BASE_H
