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
	\file CCTemplate.h
	\brief Template file for all C++ header files in the OpenQuick project.
*/
//------------------------------------------------------------------------------

#ifndef __Q_TEMPLATE_H
#define __Q_TEMPLATE_H

// Everything is in the "cl" namespace
QUICK_NAMESPACE_BEGIN; // defines to "namespace quick {" and avoids IDE indentation 

// Defines get the Q_ prefix
#define Q_SOME_DEFINE "something"

// Enums get the Q_ prefix
enum
{
    Q_VALUE_0,
    Q_VALUE_1,
};

// Classes get the Q prefix, and a comment block at top
//------------------------------------------------------------------------------
// QFoo
//------------------------------------------------------------------------------
class QFoo
{
public:
    QFoo() {};
    ~QFoo() {};

    // Methods first, CamelCase
    void SomeMethodOrOther(int x, int y, bool isTrue) {};

    // Members next, m_ prefix but no Hungarian
    int m_X;
    int m_Y;
    bool m_IsTrue;
};

QUICK_NAMESPACE_END; // defines to "}"

#endif // __Q_TEMPLATE_H

