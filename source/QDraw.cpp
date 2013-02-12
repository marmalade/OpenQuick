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

#include "QDraw.h"
#include "cocos2d.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
QDraw::QDraw()
{
	m_CCNode = new CCDrawNode();
	((CCDrawNode*)m_CCNode)->init();
//	((CCDrawNode*)m_CCNode)->setBlendFunc(kCCBlendFuncDisable);
    m_CCNode->setAnchorPoint(ccp(0, 0));
}
//------------------------------------------------------------------------------
QDraw::~QDraw()
{
}
//------------------------------------------------------------------------------
void QDraw::drawDot(float x, float y, float radius)
{
	ccColor4F col = ccc4f(color.r/255.0f, color.g/255.0f, color.b/255.0f, color.a * _alphaInternal/255.0f);
	((CCDrawNode*)m_CCNode)->drawDot(ccp(x, y), radius, col);
}
//------------------------------------------------------------------------------
void QDraw::drawSegment(float x0, float y0, float x1, float y1, float radius)
{
	ccColor4F col = ccc4f(color.r/255.0f, color.g/255.0f, color.b/255.0f, color.a * _alphaInternal/255.0f);
	((CCDrawNode*)m_CCNode)->drawSegment(ccp(x0, y0), ccp(x0, y0), radius, col);
}

QUICK_NAMESPACE_END;
