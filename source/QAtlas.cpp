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
#include "QAtlas.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"
#include <stdlib.h>

//For GNUC compiler warnings. Cocos2d-x macro which isnt defined in our current version of CC
#ifndef CC_UNUSED
#ifdef __GNUC__
#define CC_UNUSED __attribute__ ((unused))
#else
#define CC_UNUSED
#endif
#endif

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QAtlas
//------------------------------------------------------------------------------
QAtlas::QAtlas()
{
	m_Texture = NULL;
    m_AutoGenerateNameIndex = 1;

    // Default blend mode
    _blendSrc = GL_ONE;
    _blendDst = GL_ONE_MINUS_SRC_ALPHA;
}
//------------------------------------------------------------------------------
QAtlas::~QAtlas()
{
    // Release our handle on the atlas texture
    if (m_Texture)
        CCTextureCache::sharedTextureCache()->removeTexture(m_Texture);
	CC_SAFE_RELEASE(m_Texture);

//    QTrace("QAtlas destroyed");
}
//------------------------------------------------------------------------------
bool QAtlas::initFromFile(std::string fileName)
{
    size_t pos = fileName.rfind('.');

    if (pos == std::string::npos)
        return false;

    std::string ext(fileName, pos);
    bool result = true;
    if (stricmp( ext.c_str(), ".plist") == 0)
    {
        // Call  the base class initialisation
        init();
        addSpriteFramesWithFile( fileName.c_str());
    }
    else
        result = InitFromTexture( fileName);

    // We need to set m_Texture
    if (!m_Texture)
    {
//        CCSpriteFrame* pSF = (CCSpriteFrame*)m_pSpriteFrames->objectForKey(0);
        CCSpriteFrame* pSF = this->GetFrame(0);
        m_Texture = pSF->getTexture();
    }

    // cocos2d::CCTexture must have pointer back to QAtlas
    QAssert(m_Texture, "Failed to set CCTexture for QAtlas");
    m_Texture->m_uID = (unsigned long)(void*)this;
    return result;
}
//------------------------------------------------------------------------------
bool QAtlas::initTexture(std::string filename)
{
    // Call  the base class initialisation
    init();

	CC_SAFE_RELEASE(m_Texture);
	m_Texture = CCTextureCache::sharedTextureCache()->addImage(filename.c_str());
    QAssert(m_Texture, "Failed to set CCTexture for QAtlas");
    m_Texture->retain();

    // cocos2d::CCTexture must have pointer back to QAtlas
    m_Texture->m_uID = (unsigned long)(void*)this;
    return true;
}
//------------------------------------------------------------------------------
void QAtlas::addSpriteFrame( float x, float y, float w, float h, bool rotated,
                        float ox, float oy, float sw, float sh)
{
    QAssert(m_Texture != NULL, "You must call initTexture before calling addSpriteFrame");

    CCSpriteFrame* frame = new CCSpriteFrame();

    frame->initWithTexture( m_Texture, 
				            CCRectMake(x, y, w, h), 
							rotated,
                            CCPointMake(ox, oy),
                            CCSizeMake(sw, sh)
							);

    AddSpriteWithAutogenName(frame);
}
//------------------------------------------------------------------------------
void QAtlas::getTextureSize(float *width, float *height)
{
    if (m_Texture != NULL)
    {
        CCSize texture_size = m_Texture->getContentSizeInPixels();

        *width = texture_size.width;
        *height = texture_size.height;
    }
}
//------------------------------------------------------------------------------
CCSpriteFrame* QAtlas::GetFrame(int frame) const
{
    QAssert(frame >=0 && frame < (int)m_pSpriteFrames->count(), "Tried to access an out of bounds sprite frame");

    CCString *key = (CCString *)(m_pSpriteFrames->allKeys()->objectAtIndex(frame));

    return (CCSpriteFrame*)m_pSpriteFrames->objectForKey( key->getCString());
}
//------------------------------------------------------------------------------
CCSpriteFrame* QAtlas::GetFrame( std::string frame) const
{
    CCSpriteFrame* pframe = (CCSpriteFrame*)m_pSpriteFrames->objectForKey( frame.c_str());

    QAssert(pframe != NULL, "Unable to find named frame");

    return pframe;
}
//------------------------------------------------------------------------------
static char* FormatAssertMsg(char* dest, const char* format, ...)
{
    va_list ap;
    va_start(ap, format);
    vsnprintf(dest, kMaxLogLen, format, ap);
    va_end(ap);
    return dest;
}
//------------------------------------------------------------------------------
void QAtlas::setTextureParams(const char* minFilter, const char* magFilter, const char* wrapS, const char* wrapT)
{
    // Default parameters
    ccTexParams cctp = 
    {
        GL_LINEAR_MIPMAP_NEAREST,
        GL_LINEAR,
        GL_CLAMP_TO_EDGE,
        GL_CLAMP_TO_EDGE,
    };

    struct NameValue { const char* s; int e; };

    // MIN FILTER
    static const NameValue minFilters[] =
    {
        {"GL_NEAREST_MIPMAP_NEAREST", GL_NEAREST_MIPMAP_NEAREST},
        {"GL_LINEAR_MIPMAP_NEAREST", GL_LINEAR_MIPMAP_NEAREST},
        {"GL_NEAREST_MIPMAP_LINEAR", GL_NEAREST_MIPMAP_LINEAR},
        {"GL_LINEAR_MIPMAP_LINEAR", GL_LINEAR_MIPMAP_LINEAR},
        {"GL_NEAREST", GL_NEAREST},
        {"GL_LINEAR", GL_LINEAR},
        {0, -1},
    };
    const NameValue* pNV = minFilters;
    while(pNV->e != -1)
    {
        if (!strcmp(minFilter, pNV->s))
        {
            cctp.minFilter = pNV->e;
            break;
        }
        pNV++;
    }
    char CC_UNUSED msg[kMaxLogLen + 1];
    QAssert(pNV->s, FormatAssertMsg(msg, "Unrecognised minFilter type: %s", minFilter));

    // MAG FILTER
    static const NameValue magFilters[] =
    {
        {"GL_NEAREST", GL_NEAREST},
        {"GL_LINEAR", GL_LINEAR},
        {0, -1},
    };
    pNV = magFilters;
    while(pNV->e != -1)
    {
        if (!strcmp(magFilter, pNV->s))
        {
            cctp.magFilter = pNV->e;
            break;
        }
        pNV++;
    }
    QAssert(pNV->s, FormatAssertMsg(msg, "Unrecognised magFilter type: %s", magFilter));

    // WRAP S
    static const NameValue wraps[] =
    {
        {"GL_REPEAT", GL_REPEAT},
        {"GL_CLAMP_TO_EDGE", GL_CLAMP_TO_EDGE},
        {"GL_MIRRORED_REPEAT", GL_MIRRORED_REPEAT},
        {0, -1},
    };

    if (!wrapS)
        cctp.wrapS = GL_CLAMP_TO_EDGE;
    else
    {
        pNV = wraps;
        while(pNV->e != -1)
        {
            if (!strcmp(wrapS, pNV->s))
            {
                cctp.wrapS = pNV->e;
                break;
            }
            pNV++;
        }
        QAssert(pNV->s, FormatAssertMsg(msg, "Unrecognised wrap type: %s", wrapS));
    }

    if (!wrapT)
        cctp.wrapT = GL_CLAMP_TO_EDGE;
    else
    {
        pNV = wraps;
        while(pNV->e != -1)
        {
            if (!strcmp(wrapT, pNV->s))
            {
                cctp.wrapT = pNV->e;
                break;
            }
            pNV++;
        }
        QAssert(pNV->s, FormatAssertMsg(msg, "Unrecognised wrap type: %s", wrapT));
    }

    // Set parameters on Cocos2d-x texture 
    m_Texture->setTexParameters(&cctp);
}
//------------------------------------------------------------------------------
void QAtlas::setBlendFunc(const char* blendSrc, const char* blendDst)
{
    // Default
    ccBlendFunc ccbf =
    {
        GL_ONE,
        GL_ONE,
    };

    struct NameValue { const char* s; int e; };
    static const NameValue funcs[] =
    {
        {"GL_ZERO", GL_ZERO},
        {"GL_ONE", GL_ONE},
        {"GL_SRC_COLOR", GL_SRC_COLOR},
        {"GL_ONE_MINUS_SRC_COLOR", GL_ONE_MINUS_SRC_COLOR},
        {"GL_DST_COLOR", GL_DST_COLOR},
        {"GL_ONE_MINUS_DST_COLOR", GL_ONE_MINUS_DST_COLOR},
        {"GL_SRC_ALPHA", GL_SRC_ALPHA}, 
        {"GL_ONE_MINUS_SRC_ALPHA", GL_ONE_MINUS_SRC_ALPHA},
        {"GL_DST_ALPHA", GL_DST_ALPHA},
        {"GL_ONE_MINUS_DST_ALPHA", GL_ONE_MINUS_DST_ALPHA},
        {"GL_CONSTANT_COLOR", GL_CONSTANT_COLOR},
        {"GL_ONE_MINUS_CONSTANT_COLOR", GL_ONE_MINUS_CONSTANT_COLOR},
        {"GL_CONSTANT_ALPHA", GL_CONSTANT_ALPHA},
        {"GL_ONE_MINUS_CONSTANT_ALPHA", GL_ONE_MINUS_CONSTANT_ALPHA},
        {"GL_SRC_ALPHA_SATURATE", GL_SRC_ALPHA_SATURATE},
        {0, -1},
    };
    const NameValue* pNV = funcs;
    while(pNV->e != -1)
    {
        if (!strcmp(blendSrc, pNV->s))
        {
            ccbf.src = pNV->e;
            break;
        }
        pNV++;
    }
    char CC_UNUSED msg[kMaxLogLen + 1];
    QAssert(pNV->s, FormatAssertMsg(msg, "Unrecognised blend function: %s", blendSrc));

    pNV = funcs;
    while(pNV->e != -1)
    {
        if (!strcmp(blendDst, pNV->s))
        {
            ccbf.dst = pNV->e;
            break;
        }
        pNV++;
    }
    QAssert(pNV->s, FormatAssertMsg(msg, "Unrecognised blend function: %s", blendDst));

    // Cocos2d-x stores these values on CCSprite etc.
    // We will store them directly on the QAtlas object, and copy across to CCSprite etc.
    // TODO - USING THESE VALUES FOR SPRITES ETC.
    _blendSrc = ccbf.src;
    _blendDst = ccbf.dst;
}

//------------------------------------------------------------------------------
// Private API
//------------------------------------------------------------------------------
bool QAtlas::InitFromTexture(std::string fileName)
{
    if (!initTexture( fileName))
        return false;

    CCSpriteFrame *spriteFrame = new CCSpriteFrame();
    spriteFrame->initWithTexture( m_Texture, 
                                    CCRectMake( 0.0f, 0.0f, (float)m_Texture->getPixelsWide(), (float)m_Texture->getPixelsHigh()), 
						            false,
                                    CCPointMake( 0.0f, 0.0f),
                                    CCSizeMake( (float)m_Texture->getPixelsWide(), (float)m_Texture->getPixelsHigh())
						            );

    AddSpriteWithAutogenName(spriteFrame);

    return true;
}
//------------------------------------------------------------------------------
void QAtlas::AddSpriteWithAutogenName(cocos2d::CCSpriteFrame* frame)
{
    // Create a unique number string for this sprite
    char number_buffer[8];
    number_buffer[7] = 0;
    char *number_ptr = &number_buffer[7];

    int index = m_AutoGenerateNameIndex++;
    while (index > 0)
    {
        number_ptr--;
        *number_ptr = (index % 10) + '0';
        index /= 10;
    }

    // Create a unique name for this spriteframe
    char name_buffer[16];
    strcpy(name_buffer, "QUICK_");
    strcat(name_buffer, number_ptr);

    // Add the spriteframe to the cache
    CCSpriteFrameCache::addSpriteFrame(frame, name_buffer);

    // Now the spriteframe has been put in the cache, we can release our handle
    frame->release();
}

QUICK_NAMESPACE_END;
