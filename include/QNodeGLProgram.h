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
    \file QNodeGLProgram.h
    \brief Base class for all OpenQuick display object intermediaries.
*/
//------------------------------------------------------------------------------

#ifndef __Q_NODE_GL_PROGRAM_H
#define __Q_NODE_GL_PROGRAM_H

#include "QDefines.h"
#include "QBase.h"
#include "QColor.h"
#include "QPhysics.h"
#include "QPhysicsNodeProps.h"
#include "QVec2.h"

#include "cocos2d.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QNodeGLProgram
//------------------------------------------------------------------------------
class QNodeGLProgram : public QBaseObject { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    virtual const char* _getToLuaClassName() { return "quick::QNodeGLProgram"; }
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }

    QNodeGLProgram();
    ~QNodeGLProgram();

    // BOUND, PUBLIC
    /** Initializes the CCGLProgram with a vertex and fragment with bytes array */
    bool initWithVertexShaderByteArray(const char* vShaderByteArray, const char* fShaderByteArray);
    /** Initializes the CCGLProgram with a vertex and fragment with contents of filenames */
    bool initWithVertexShaderFilename(const char* vShaderFilename, const char* fShaderFilename);
    /**  It will add a new attribute to the shader */
    void addAttribute(const char* attributeName, unsigned int index);
    /** links the glProgram */
    bool link();
    /** it will call glUseProgram() */
    void use();

/** It will create 4 uniforms:
    - kCCUniformPMatrix
    - kCCUniformMVMatrix
    - kCCUniformMVPMatrix
    - kCCUniformSampler

 And it will bind "kCCUniformSampler" to 0

 */
    void updateUniforms();
    /** calls glUniform1i only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith1i(int location, int i1);

    /** calls glUniform1f only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith1f(int location, float f1);

    /** calls glUniform2f only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith2f(int location, float f1, float f2);

    /** calls glUniform3f only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith3f(int location, float f1, float f2, float f3);

    /** calls glUniform4f only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith4f(int location, float f1, float f2, float f3, float f4);

    /** calls glUniform2fv only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith2fv(int location, float* floats, unsigned int numberOfArrays);

    /** calls glUniform3fv only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith3fv(int location, float* floats, unsigned int numberOfArrays);

    /** calls glUniform4fv only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWith4fv(int location, float* floats, unsigned int numberOfArrays);

    /** calls glUniformMatrix4fv only if the values are different than the previous call for this same shader program. */
    void setUniformLocationWithMatrix4fv(int location, float* matrixArray, unsigned int numberOfMatrices);
    
    /** will update the builtin uniforms if they are different than the previous call for this same shader program. */
    void setUniformsForBuiltins();

    /** will apply uniform model view matrix to the shader. */
    void setUniformForModelViewProjectionMatrix();

    /** Return uniform location from shader program. */
    int getUniformLocation(const char* szUniformName);

    /** Map texture to uniform. */
    bool mapTextureToUniform(const char* szUniformName, const char* szTextureFile, int nTextureInd);

    /** returns the vertexShader error log */
    const char* vertexShaderLog();
    /** returns the fragmentShader error log */
    const char* fragmentShaderLog();
    /** returns the program error log */
    const char* programLog();
    
    /** Remove shader, so you will need to reinitialize it. */
    void reset();
    
    /** Return program id. */
    unsigned int getProgram();

    /** Allocate memory for shader program. */
    void _createCCGLProgram();

    // UNBOUND
    cocos2d::CCGLProgram* m_CCProgram;

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_NODE_GL_PROGRAM_H
