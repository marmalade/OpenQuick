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
	\file QVector.h
	\brief Vector object intermediary.
*/
//------------------------------------------------------------------------------

#ifndef __Q_VECTOR_H
#define __Q_VECTOR_H

#include "QDefines.h"
#include "QColor.h"
#include "QNode.h"

// tolua_begin
namespace quick {
// tolua_end

class QVector;

//------------------------------------------------------------------------------
// CCSpriteVector
//------------------------------------------------------------------------------
class CCSpriteVector : public cocos2d::CCSprite {
public:
    CCSpriteVector(QVector* pVector);
    ~CCSpriteVector();
	virtual void draw();

    QVector* m_Vector;
    float* m_GLVerts;
    unsigned short* m_GLInds;

    cocos2d::CCGLProgram* m_Shader;
    int m_ColorLocation;
};

//------------------------------------------------------------------------------
// QVector
//------------------------------------------------------------------------------
class QVector : public QNode { // tolua_export
public:
    // tolua_begin
	// BOUND, PRIVATE
    virtual const char* _getToLuaClassName() { return "quick::QVector"; }
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
	QVector();
	~QVector();

    float   _strokeAlphaInternal; // used to calculate alpha value for Cocos2d, may or may not inherit from parent

    // BOUND, PUBLIC
    virtual void sync();
	
    /**
    The width, in display coordinates, of the shape outline.
    If 0, no outline is drawn. The default value is 1.
    */
	float strokeWidth;

    /**
    The color to use if outlining the shape.
    The default color is white.
    */
	QColor strokeColor;
    
    /**
    The alpha value (opacity) to use for the the shape outline.
    The default value is 1.0 (opaque).
    */
    float strokeAlpha;

    // tolua_end

    // UNBOUND
    int m_NumPoints; // should be written by superclass

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_VECTOR_H
