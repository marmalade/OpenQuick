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
	\file QFont.h
	\brief Font object intermediary.
*/
//------------------------------------------------------------------------------

#ifndef __Q_FONT_H
#define __Q_FONT_H

#include "QDefines.h"
#include "QNode.h"

#include "cocos2d.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QFont
//------------------------------------------------------------------------------
/*! The QFont class is an intermediary storage class for fonts.  It is used to
    make fonts memory resident before their use in the QLabel class.
*/
class QFont { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    QFont();
    ~QFont();

    // BOUND, PUBLIC
    /*! Initialises the intermediary from a .fnt file.  This function loads and
        parses the contents of the .fnt file and stores the characters and kerning
        defined within.  It also loads the associated texture file for this font

        @param  fileName    The fully qualified name of the .fnt file to be loaded
        @return             A flag denoting the successful loading of the font
    */
    bool initFromFntFile(std::string fileName);

	// tolua_end

	// BOUND EXPLICITLY IN TOLUA PKG
    /*! /var height
        The height of the font bound to this intermediary (read only)
    */
    Q_READONLY_VARIABLE( int, height);

    /*! /var fileName
        The filename of the font bound to this intermediary (read only)
    */
    Q_READONLY_VARIABLE( std::string,  fileName);

	// UNBOUND
	private:
	cocos2d::CCBMFontConfiguration *m_FontConfiguration;

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_FONT_H
