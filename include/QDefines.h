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
	\file QDefines.h
	\brief Core defines file for the OpenQuick project.
*/
//------------------------------------------------------------------------------

#ifndef __Q_DEFINES_H
#define __Q_DEFINES_H

#ifdef _MSC_VER
#pragma warning ( disable : 4800 ) // thrown by tolua_boolean forcing int to bool
#pragma warning ( disable : 4251 ) // "...needs to have dll-interface to be used by clients of class..."
#pragma warning ( disable : 4996 ) // This function or variable may be unsafe.
#endif

#include "cocos2d.h"

// Macros for default namespace
#define QUICK_NAMESPACE_BEGIN namespace quick {
#define QUICK_NAMESPACE_END }
#define USING_NS_QUICK using namespace quick

#define PHYSICS_NAMESPACE_BEGIN namespace physics {
#define PHYSICS_NAMESPACE_END }
#define USING_NS_PHYSICS using namespace physics

// Assert, trace, warning
#ifdef MARMALADE
extern void MarmQuickTrace(const char * pszFormat, ...);
extern void MarmQuickWarning(const char * pszFormat, ...);
extern void MarmQuickAssert(bool cond, const char * pszFormat, ...);
#define QTrace MarmQuickTrace
#define QWarning MarmQuickWarning
#define QAssert MarmQuickAssert
#else
#define QAssert(cond, msg) CCAssert(cond, msg)
#define QTrace CCLOG
#define QWarning CCLOG
#endif

// Tolua helper for declaring readonly variables in C++
#define Q_READONLY_VARIABLE(type, name) \
    type get_##name( void) const { return name; } \
    void set_##name( type value) { QAssert( false, "Attempt to write to readonly variable '" #name "'"); } \
	type name

// Ensure definition
#ifndef PI
#define PI 3.141592653589793f
#endif

#endif // __Q_DEFINES_H

