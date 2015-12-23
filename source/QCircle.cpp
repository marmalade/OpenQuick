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
#include "QCircle.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

// TODO OPTIMISE
// WITH A LITTLE BIT OF WORK, SURELY WE COULD LEVERAGE THE QDirector FIXED CIRQE VERTEX DATA?

//------------------------------------------------------------------------------
// CCSpriteCircle
//------------------------------------------------------------------------------
CCSpriteCircle::CCSpriteCircle(QVector* pVector) : CCSpriteVector(pVector)
{
    // Alloc buffer for GL verts
    pVector->m_NumPoints = 100; // hard-wire for now
    m_GLVerts = new float[(pVector->m_NumPoints * 2 + 1) * 2]; // inner/outer and x/y

    // Write index buffer for solid tri fan
    unsigned short* pInds = new unsigned short[pVector->m_NumPoints+1];
    m_GLInds = pInds;
    *pInds++ = 0;
    for (int i = 1; i <= pVector->m_NumPoints; i++)
        *pInds++ = i*2;
}
//------------------------------------------------------------------------------
void CCSpriteCircle::draw()
{
    QCircle* pCircle = (QCircle*)m_Vector;

    // Write vertex buffer
	int nump = m_Vector->m_NumPoints;
	int numl = nump-1;
	float w2 = m_Vector->strokeWidth / 2;

    float* pCoord = m_GLVerts + 2;
    float tx = 0.0f;
    float ty = 0.0f;
//    float xOfs = pCircle->xAnchor * pCircle->radius * 2;
//    float yOfs = pCircle->yAnchor * pCircle->radius * 2;
    float xOfs = pCircle->radius;
    float yOfs = pCircle->radius;
	for (int p = 0; p < nump; p++)
	{
        // Cocos2d has already set the GL transform...
        float angle = p * PI * 2 / (nump-1);
        float ca = cosf(angle);
        float sa = sinf(angle);

        *pCoord++ = xOfs + ca * (pCircle->radius + pCircle->strokeWidth/2);
		*pCoord++ = yOfs + sa * (pCircle->radius + pCircle->strokeWidth/2);
		*pCoord++ = xOfs + ca * (pCircle->radius - pCircle->strokeWidth/2);
		*pCoord++ = yOfs + sa * (pCircle->radius - pCircle->strokeWidth/2);
	}
    // Final GL point is centre-of-gravity, used for solid fill
    m_GLVerts[0] = xOfs + 0.0f;
    m_GLVerts[1] = yOfs + 0.0f;
    
    CCSpriteVector::draw();
}

//------------------------------------------------------------------------------
// QCircle
//------------------------------------------------------------------------------
QCircle::QCircle()
{
	// Cocos stuff
	m_CCNode = new CCSpriteCircle((QVector*)this);
	((CCSpriteCircle*)m_CCNode)->init();

    radius = 0.0f;
}
//------------------------------------------------------------------------------
QCircle::~QCircle()
{
//    QTrace("QCircle destroyed");
}
//------------------------------------------------------------------------------
void QCircle::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
    {
        return;
    }

    w = h = radius * 2.0f;
    QVector::sync();

    if (m_CCNode)
        ((CCSpriteCircle*)m_CCNode)->updateTransform();
}
//------------------------------------------------------------------------------
bool QCircle::isPointInside(float x, float y)
{
    CCPoint pws(x, y);
    CCPoint pns = m_CCNode->convertToNodeSpace(pws);

    float ox = radius * xAnchor * 2.0f;
    float oy = radius * yAnchor * 2.0f;
    float len2 = (pns.x - ox)*(pns.x - ox) + (pns.y - oy)*(pns.y - oy);
    bool result = len2 <= radius*radius;
    return result;
}

QUICK_NAMESPACE_END;
