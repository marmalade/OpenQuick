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
	\file QRenderTexture.h
	\brief RenderTexture object intermediary.
*/
//------------------------------------------------------------------------------

#ifndef __Q_RENDER_TEXTURE_H
#define __Q_RENDER_TEXTURE_H

#include "QNode.h"

// tolua_begin
/**
The key namespace is used for specifying key code values which can be set on events of type "key".
*/
namespace pixel_format {
    enum
    {
        RGBA8888 = ::cocos2d::kCCTexture2DPixelFormat_RGBA8888,
        RGB888 = ::cocos2d::kCCTexture2DPixelFormat_RGB888,
        RGB565 = ::cocos2d::kCCTexture2DPixelFormat_RGB565,
        A8 = ::cocos2d::kCCTexture2DPixelFormat_A8,
        I8 = ::cocos2d::kCCTexture2DPixelFormat_I8,
        AI88 = ::cocos2d::kCCTexture2DPixelFormat_AI88,
        RGBA4444 = ::cocos2d::kCCTexture2DPixelFormat_RGBA4444,
        RGB5A1 = ::cocos2d::kCCTexture2DPixelFormat_RGB5A1,
        PVRTC4 = ::cocos2d::kCCTexture2DPixelFormat_PVRTC4,
        PVRTC2 = ::cocos2d::kCCTexture2DPixelFormat_PVRTC2,
        AUTO = ::cocos2d::kCCTexture2DPixelFormat_Default,
    };
}

namespace file_format {
    enum
    {
        JPEG = ::cocos2d::kCCImageFormatJPEG,
        PNG = ::cocos2d::kCCImageFormatPNG,
    };
}
// tolua_end

// tolua_begin
namespace quick {
// tolua_end

class QSprite;

//------------------------------------------------------------------------------
// QRenderTexture
//------------------------------------------------------------------------------
/**
The Render texture object provides the generic rendering target.
It inherits from the Node object.
*/
class QRenderTexture : public QNode { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    virtual const char* _getToLuaClassName() { return "quick::QRenderTexture"; }
    QRenderTexture(int w, int h, int eFormat, unsigned int uDepthStencilFormat, int x, int y);
    ~QRenderTexture();
    void* __serialize() { return NULL; }

    QSprite *_getSprite();

    // BOUND, PUBLIC
    virtual void sync();

    void begin(QColor *clear);

    //! tolua This method is deprecated. Use @ref finsh instead.
    void endToLua();

    void finish();

    bool saveToFile(const char *name);

    void setSprite(QSprite *var);

    void clear(QColor *color);

    // tolua_end

    // UNBOUND

    // tolua explicit accessors
    bool get_autodraw() const;          //! tolua parameter get access to AutoDraw
    void set_autodraw(bool bAutoDraw);  //! tolua parameter set access to AutoDraw

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_RENDER_TEXTURE_H
