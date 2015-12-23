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
#include "QRectangle.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QRectangle
//------------------------------------------------------------------------------
QRectangle::QRectangle()
{
	// Cocos stuff
    // The CCSpriteLines is created by the parent constructor

    // Set up dummy points
    m_Points.push_back(QVec2::g_Zero);
    m_Points.push_back(QVec2::g_Zero);
    m_Points.push_back(QVec2::g_Zero);
    m_Points.push_back(QVec2::g_Zero);
    m_Points.push_back(QVec2::g_Zero);

    // Set up actual normals
    m_Norms.push_back(QVec2( -0.707f, -0.707f));
    m_Norms.push_back(QVec2(  0.707f, -0.707f));
    m_Norms.push_back(QVec2(  0.707f,  0.707f));
    m_Norms.push_back(QVec2( -0.707f,  0.707f));
    m_Norms.push_back(QVec2( -0.707f, -0.707f));

    // Set up actual normal lengths
    float r2 = float(sqrt(2.0f));
    m_NormLens.push_back(r2);
    m_NormLens.push_back(r2);
    m_NormLens.push_back(r2);
    m_NormLens.push_back(r2);
    m_NormLens.push_back(r2);

    // Set up GL buffers, etc.
	m_NumPoints = m_Points.size();
    _appendReallocBuffers();
}
//------------------------------------------------------------------------------
QRectangle::~QRectangle()
{
//    QTrace("QRectangle destroyed");
}
//------------------------------------------------------------------------------
void QRectangle::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
    {
        return;
    }

    QLines::sync();

    // Set points based on w, h
    m_Points[0].Set(0, 0);
    m_Points[1].Set(w, 0);
    m_Points[2].Set(w, h);
    m_Points[3].Set(0, h);
    m_Points[4].Set(0, 0);
}

QUICK_NAMESPACE_END;
