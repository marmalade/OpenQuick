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
#include "QVector.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// CCSpriteVector
//------------------------------------------------------------------------------
CCSpriteVector::CCSpriteVector(QVector* pVector)
{
    m_Vector = pVector;
    m_GLVerts = NULL;
    m_GLInds = NULL;

    m_Shader = CCShaderCache::sharedShaderCache()->programForKey(kCCShader_Position_uColor);
    m_ColorLocation = glGetUniformLocation(m_Shader->getProgram(), "u_color");
}
//------------------------------------------------------------------------------
CCSpriteVector::~CCSpriteVector()
{
    delete [] m_GLVerts;
    delete [] m_GLInds;
}
//------------------------------------------------------------------------------
void CCSpriteVector::draw()
{
	int nump = m_Vector->m_NumPoints;

    // Set state
    ccGLBindTexture2D(0);
    ccGLEnableVertexAttribs( kCCVertexAttribFlag_Position );

    m_Shader->use();
    m_Shader->setUniformForModelViewProjectionMatrix();

    // Draw stroke
    float color[4];
    if (m_Vector->strokeWidth > 0.0f)
    {
        color[0] = m_Vector->strokeColor.r / 255.0f;
        color[1] = m_Vector->strokeColor.g / 255.0f;
        color[2] = m_Vector->strokeColor.b / 255.0f;
        color[3] = (m_Vector->_strokeAlphaInternal * m_Vector->strokeColor.a) / 255.0f;
        m_Shader->setUniformLocationWith4fv(m_ColorLocation, (GLfloat*)color, 1);

        if (color[3] < 1.0f)
            ccGLBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        else
            ccGLBlendFunc(GL_ONE, GL_ZERO); // turn off blending, respect Cocos2d-x GL cache

        glVertexAttribPointer(kCCVertexAttrib_Position, 2, GL_FLOAT, GL_FALSE, 0, m_GLVerts + 2);
	    glDrawArrays(GL_TRIANGLE_STRIP, 0, nump*2);
        CC_INCREMENT_GL_DRAWS(1);
        if (color[3] < 1.0f)
			ccGLBlendFunc(CC_BLEND_SRC, CC_BLEND_DST);
        else
            ccGLBlendFunc(GL_ONE, GL_ZERO); // turn off blending, respect Cocos2d-x GL cache
    }

    // Draw fill
    // Shape points must be in CCW order, so that filled area matches with inside of stroke (not outside)
    float a = m_Vector->_alphaInternal * m_Vector->color.a;
    if (a > 0.0f && nump > 2)
    {
        color[0] = m_Vector->color.r / 255.0f;
        color[1] = m_Vector->color.g / 255.0f;
        color[2] = m_Vector->color.b / 255.0f;
        color[3] = a / 255.0f;
        m_Shader->setUniformLocationWith4fv(m_ColorLocation, (GLfloat*)color, 1);

        if (color[3] < 1.0f)
            ccGLBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        else
            ccGLBlendFunc(GL_ONE, GL_ZERO); // turn off blending, respect Cocos2d-x GL cache

        glVertexAttribPointer(kCCVertexAttrib_Position, 2, GL_FLOAT, GL_FALSE, 0, m_GLVerts);
        glDrawElements(GL_TRIANGLE_FAN, nump+1, GL_UNSIGNED_SHORT, m_GLInds);
        CC_INCREMENT_GL_DRAWS(1);
        if (color[3] < 1.0f)
			ccGLBlendFunc(CC_BLEND_SRC, CC_BLEND_DST);
        else
            ccGLBlendFunc(GL_ONE, GL_ZERO); // turn off blending, respect Cocos2d-x GL cache
    }

    // Physics draw
    if  (
        (m_Vector->physics) &&
        (physics::g_Sim->debugDraw)
        )
        m_Vector->physics->draw();
}

//------------------------------------------------------------------------------
// QVector
//------------------------------------------------------------------------------
QVector::QVector()
{
    strokeWidth = 4.0f;
    strokeColor.set(0x80, 0x80, 0x80, 0xff);
    strokeAlpha = 1.0f;
    _strokeAlphaInternal = 1.0f;
    
    m_NumPoints = 0;
}
//------------------------------------------------------------------------------
QVector::~QVector()
{
}
//------------------------------------------------------------------------------
void QVector::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
    {
        return;
    }

    QNode::sync();
    
	if (m_CCNode)
	{
		// TODO
	}
}

QUICK_NAMESPACE_END;
