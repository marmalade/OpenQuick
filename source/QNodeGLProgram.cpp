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

#include "QNodeGLProgram.h"
#include "QDirector.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"
#include <stdlib.h>

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
QNodeGLProgram::QNodeGLProgram()
: m_CCProgram(NULL)
{
}

//------------------------------------------------------------------------------
QNodeGLProgram::~QNodeGLProgram()
{
    if (m_CCProgram)
    {
        CC_SAFE_RELEASE_NULL(m_CCProgram);
    }
}

//------------------------------------------------------------------------------
bool QNodeGLProgram::initWithVertexShaderByteArray
    (const char* vShaderByteArray
    ,const char* fShaderByteArray
    )
{
    if (m_CCProgram)
    {
        return m_CCProgram->initWithVertexShaderByteArray(vShaderByteArray, fShaderByteArray);
    }
    return false;
}

//------------------------------------------------------------------------------
bool QNodeGLProgram::initWithVertexShaderFilename
    (const char* vShaderFilename
    ,const char* fShaderFilename
    )
{
    if (m_CCProgram)
    {
        return m_CCProgram->initWithVertexShaderFilename(vShaderFilename, fShaderFilename);
    }
    return false;
}

//------------------------------------------------------------------------------
void QNodeGLProgram::addAttribute(const char* attributeName, unsigned int index)
{
    if (m_CCProgram)
    {
        m_CCProgram->addAttribute(attributeName, index);
    }
}

//------------------------------------------------------------------------------
bool QNodeGLProgram::link()
{
    if (m_CCProgram)
    {
        return m_CCProgram->link();
    }
    return false;
}

//------------------------------------------------------------------------------
void QNodeGLProgram::use()
{
    if (m_CCProgram)
    {
        m_CCProgram->use();
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::updateUniforms()
{
    if (m_CCProgram)
    {
        m_CCProgram->updateUniforms();
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith1i(int location, int i1)
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith1i(location, i1);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith1f(int location, float f1)
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith1f(location, f1);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith2f(int location, float f1, float f2)
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith2f(location, f1, f2);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith3f
    (int location
    ,float f1
    ,float f2
    ,float f3
    )
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith3f(location, f1, f2, f3);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith4f
    (int location
    ,float f1
    ,float f2
    ,float f3
    ,float f4
    )
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith4f(location, f1, f2, f3, f4);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith2fv
    (int location
    ,float* floats
    ,unsigned int numberOfArrays
    )
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith2fv(location, floats, numberOfArrays);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith3fv
    (int location
    ,float* floats
    ,unsigned int numberOfArrays
    )
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith3fv(location, floats, numberOfArrays);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWith4fv
    (int location
    ,float* floats
    ,unsigned int numberOfArrays
    )
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWith4fv(location, floats, numberOfArrays);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformLocationWithMatrix4fv
    (int location
    ,float* matrixArray
    ,unsigned int numberOfMatrices
    )
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformLocationWithMatrix4fv(location, matrixArray, numberOfMatrices);
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformsForBuiltins()
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformsForBuiltins();
    }
}

//------------------------------------------------------------------------------
void QNodeGLProgram::setUniformForModelViewProjectionMatrix()
{
    if (m_CCProgram)
    {
        m_CCProgram->setUniformForModelViewProjectionMatrix();
    }
}

//------------------------------------------------------------------------------
int QNodeGLProgram::getUniformLocation(const char* szUniformName)
{
    if (m_CCProgram)
    {
        return m_CCProgram->getUniformLocation(szUniformName);
    }
    return -1;
}

bool QNodeGLProgram::mapTextureToUniform
    (const char* szUniformName
    ,const char* szTextureFile
    ,int nTextureInd
    )
{
    int nUniformLocation = getUniformLocation(szUniformName);
    setUniformLocationWith1i(nUniformLocation, nTextureInd);
    if (nUniformLocation == -1)
    {
        return false;
    }
    CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(szTextureFile);
    if (pTexture == NULL)
    {
        return false;
    }
    pTexture->setAliasTexParameters();

    use();

    glActiveTexture(GL_TEXTURE0 + nTextureInd);
    glBindTexture(GL_TEXTURE_2D, pTexture->getName());
    glActiveTexture(GL_TEXTURE0);
    return true;
}

//------------------------------------------------------------------------------
const char* QNodeGLProgram::vertexShaderLog()
{
    if (m_CCProgram)
    {
        return m_CCProgram->vertexShaderLog();
    }
    return "";
}

//------------------------------------------------------------------------------
const char* QNodeGLProgram::fragmentShaderLog()
{
    if (m_CCProgram)
    {
        return m_CCProgram->fragmentShaderLog();
    }
    return "";
}

//------------------------------------------------------------------------------
const char* QNodeGLProgram::programLog()
{
    if (m_CCProgram)
    {
        return m_CCProgram->programLog();
    }
    return "";
}

//------------------------------------------------------------------------------
void QNodeGLProgram::reset()
{
    if (m_CCProgram)
    {
        m_CCProgram->reset();
    }
}

//------------------------------------------------------------------------------
unsigned int QNodeGLProgram::getProgram()
{
    if (m_CCProgram)
    {
        return m_CCProgram->getProgram();
    }
    return 0;
}

//------------------------------------------------------------------------------
void QNodeGLProgram::_createCCGLProgram()
{
    CCAssert(!m_CCProgram, "Cocos2d GLProgram already exists");

    m_CCProgram = new CCGLProgram();
    m_CCProgram->autorelease();
    m_CCProgram->retain();
}

//------------------------------------------------------------------------------

QUICK_NAMESPACE_END;
