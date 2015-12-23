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

#include "QLines.h"
#include "QLuaHelpers.h"
#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// CCSpriteLines
//------------------------------------------------------------------------------
void CCSpriteLines::draw()
{
    QLines* pLines = (QLines*)m_Vector;

    // Write vertex buffer
	int nump = m_Vector->m_NumPoints;
	int numl = nump-1;
	float w2 = m_Vector->strokeWidth / 2;

    float* pCoord = m_GLVerts + 2;
    float tx = 0.0f;
    float ty = 0.0f;
	for (int p = 0; p < nump; p++)
	{
        // Cocos2d has already set the GL transform...
        float ptx = pLines->m_Points[p].x;
        float pty = pLines->m_Points[p].y;
        float ntx = pLines->m_Norms[p].x;
        float nty = pLines->m_Norms[p].y;

        float w2n = w2 * pLines->m_NormLens[p];
        *pCoord++ = ptx + ntx * w2n;
		*pCoord++ = pty + nty * w2n;
		*pCoord++ = ptx - ntx * w2n;
		*pCoord++ = pty - nty * w2n;

        // Maintain vertex sum
        tx += ptx;
        ty += pty;
	}
    // Final GL point is centre-of-gravity, used for solid fill
    m_GLVerts[0] = tx / nump;
    m_GLVerts[1] = ty / nump;
    
    CCSpriteVector::draw();
}

//------------------------------------------------------------------------------
// QLines
//------------------------------------------------------------------------------
QLines::QLines()
{
	// Cocos stuff
	m_CCNode = new CCSpriteLines((QVector*)this);
	((CCSpriteLines*)m_CCNode)->init();
    m_CCNode->setAnchorPoint(ccp(0, 0));

    m_Centre = QVec2(0, 0);
    m_Closed = false;
}
//------------------------------------------------------------------------------
QLines::~QLines()
{
//    QTrace("QLines destroyed");
}
//------------------------------------------------------------------------------
void QLines::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
    {
        return;
    }

    QVector::sync();
    if (m_CCNode)
	{
        ((CCSpriteLines*)m_CCNode)->updateTransform();
    }
}
//------------------------------------------------------------------------------
void QLines::_appendPoint(float x, float y)
{
	m_Points.push_back(QVec2(x, y));
	m_Norms.push_back(QVec2::g_Zero);   // will be rewritten later
	m_NormLens.push_back(0.0f);         // will be rewritten later
	m_NumPoints = m_Points.size();
}
//------------------------------------------------------------------------------
void QLines::_appendFinalise()
{
	m_NumPoints = m_Points.size();
    m_Centre = QVec2(0, 0);
	QVec2 n, n0, n1;
	for (int p = 0; p < m_NumPoints-1; p++)
	{
		QVec2 v0 = m_Points[p+0];
		QVec2 v1 = m_Points[p+1];
		n = (v1-v0).GetNormal();
		if (!p)
		{
            // First point
			m_Norms[p] = n;
			n1 = n;
            m_NormLens[p] = 1.0f;
		}
		else
		{
			n0 = n1;
			n1 = n;
			m_Norms[p] = n0+n1;
			m_Norms[p].Normalize();

			// costheta = cos(theta)
			// costheta2 = cos(theta/2)
			// cos2 means cos^2, "cos squared", sqr(cos)
            float costheta = (float)n0.x*n1.x + (float)n0.y*n1.y;

			// cos(2theta) = 2 cos2(theta) - 1
			// cos(theta) = 2 cos2(theta2) - 1
			// sqrt((cos(theta)+1)/2) = cos(theta2)
            float costheta2 = sqrt(((costheta)+1)/2);
            float ac = abs(costheta2);
            QAssert(ac > 0.0f, ("Line segments must not double-back on themselves"));
            m_NormLens[p] = 1.0f / abs(costheta2);
		}
        m_Centre += v0;
	}

    // Last point
	if (m_Points[m_NumPoints-1] == m_Points[0])
	{
		// Closed shape
        m_Closed = true;
        m_Centre.x /= (m_NumPoints - 1);
        m_Centre.y /= (m_NumPoints - 1);

		n1 = n;
		n0 = m_Norms[0];
		m_Norms[m_NumPoints-1] = n0+n1;
		m_Norms[m_NumPoints-1].Normalize();
        float costheta = (float)n0.x*n1.x + (float)n0.y*n1.y;
        float costheta2 = sqrt(((costheta)+1)/2);
        m_NormLens[m_NumPoints-1] = 1.0f / abs(costheta2);
		m_Norms[0] = m_Norms[m_NumPoints-1];
		m_NormLens[0] = m_NormLens[m_NumPoints-1];
	}
	else
	{
		// Open shape
        m_Closed = false;
    	m_Centre += m_Points[m_NumPoints - 1];
        m_Centre.x /= m_NumPoints;
        m_Centre.y /= m_NumPoints;

		m_Norms[m_NumPoints-1] = n;
        m_NormLens[m_NumPoints-1] = 1.0f;
	}
    _appendReallocBuffers();
}
//------------------------------------------------------------------------------
void QLines::_appendReallocBuffers()
{
    // Realloc buffer for GL verts
    delete[] ((CCSpriteLines*)m_CCNode)->m_GLVerts;
    delete[] ((CCSpriteLines*)m_CCNode)->m_GLInds;
    ((CCSpriteLines*)m_CCNode)->m_GLVerts = new float[(m_NumPoints * 2 + 1) * 2]; // inner/outer and x/y

    // Write index buffer for solid tri fan
    unsigned short* pInds = new unsigned short[m_NumPoints+1];
    ((CCSpriteLines*)m_CCNode)->m_GLInds = pInds;
    *pInds++ = 0;
    for (int i = 1; i <= m_NumPoints; i++)
        *pInds++ = i*2;
}
//------------------------------------------------------------------------------
bool QLines::isPointInside(float x, float y)
{
    CCPoint pws(x, y);
    CCPoint pns = m_CCNode->convertToNodeSpace(pws);
    QVec2 pp(pns.x, pns.y);

    // Check each triangle portion (formed from each line segment endpoint, and the centre)
    // This is slower than doing a side-of-line check against each segment, but allows for
    // convex shapes such as stars
    int numP = m_Points.size();
    bool result = false;
    for (int p = 0; p < numP - 1; p++)
    {
		QVec2 v0 = m_Points[p+0];
		QVec2 v1 = m_Points[p+1];

        result = pp.isPointInsideTri(v0, v1, m_Centre);
        if (result == true)
            break;
    }
    return result;
}

bool QLines::isClosed()
{
    return m_Closed;
}

QUICK_NAMESPACE_END;
