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
	\file QAtlas.h
	\brief Texture source area definition
*/
//------------------------------------------------------------------------------

#ifndef __Q_ATLAS_H
#define __Q_ATLAS_H

#include "QDefines.h"
#include "QNode.h"

#include "cocos2d.h"
#include "CCDictionary.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QAtlas
//------------------------------------------------------------------------------
/*!
    The Atlas object acts as a single point to load and process textures and
    sprite frames.  Atlas is the first stop in the 2d artwork pipeline.  It can
    be created from textures or from a plist.
*/
class QAtlas : private cocos2d::CCSpriteFrameCache { // tolua_export
public:
    // tolua_begin
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
    QAtlas();
    ~QAtlas();

    // BOUND, PUBLIC
    /*! Initialises the atlas from a .plist or a texture file.  This operation
        results in the creation of one or more sprite frames.
        @param filename The path of the plist to load.
        @return Success of the operation
    */
	bool initFromFile(std::string filename);

    /*! Initialises the atlas' internal texture.  This operation doesn't create
        any sprite frames.
        @param filename The path of the texture to load.
        @return Success of the operation
    */
	bool initTexture(std::string filename);

    /*! Adds a sprite frame to the atlas.
        @param x,y The location of the frame in pixels
        @param w,h The dimensions of the frame in pixels
        @param rotated A flag to say the sprite is turned on it's side
        @param ox,oy The offset of the sprite frame in relation to the frame
        @param sw,sh The original size of the sprite frame
    */
    void addSpriteFrame( float x, float y, float w, float h, bool rotated,
                            float ox, float oy, float sw, float sh);

    /*! Gets the size of the texture as a multi variable return
    */
    void getTextureSize(float *x = 0, float *y = 0);

    /**
       Sets the min filter, mag filter, wrap s and wrap t texture parameters to be used by all objects
       referencing this texture.
    */
    void setTextureParams(const char* minFilter, const char* magFilter, const char* wrapS = 0, const char* wrapT = 0);

    /**
        Sets the blending function to be used by all objects referencing this texture.
    */
    void setBlendFunc(const char* blendSrc, const char* blendDst);

    // BOUND, PRIVATE
    int _blendSrc;  // blending function, src
    int _blendDst;  // blending function, dst
    
    // tolua_end

	// UNBOUND
    cocos2d::CCSpriteFrame* GetFrame(int frame) const;
    cocos2d::CCSpriteFrame* GetFrame(std::string frame) const;

    bool InitFromTexture(std::string filename);
    void AddSpriteWithAutogenName(cocos2d::CCSpriteFrame* frame);

    cocos2d::CCTexture2D* m_Texture;
    int m_AutoGenerateNameIndex;

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_ATLAS_H
