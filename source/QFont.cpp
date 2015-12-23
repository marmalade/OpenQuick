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

//#include "AppDelegate.h"
#include "QFont.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QFont
//------------------------------------------------------------------------------
QFont::QFont()
{
	m_FontConfiguration = NULL;
}


//------------------------------------------------------------------------------
QFont::~QFont()
{
	CC_SAFE_RELEASE(m_FontConfiguration);

//    QTrace("QFont destroyed");
}


//------------------------------------------------------------------------------
bool QFont::initFromFntFile(std::string filename)
{
	// Make sure this object hasn't been previously initialised
	QAssert( m_FontConfiguration == NULL, "QFont has been previously initialised");
	
    // Create the font from the filename
    m_FontConfiguration = FNTConfigLoadFile(filename.c_str());
    if ( m_FontConfiguration == NULL)
    {
        return false;
    }
    m_FontConfiguration->retain();

    // Store the filename and height
	fileName = filename;
	height = m_FontConfiguration->m_nCommonHeight;	// MH: Renamed in CC 2.0.3 from m_uCommonHeight to m_nCommonHeight

	return true;
}


//------------------------------------------------------------------------------


QUICK_NAMESPACE_END;
