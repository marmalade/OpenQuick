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

#include "QRenderTexture.h"
#include "QLuaHelpers.h"
#include "QSprite.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QRenderTexture
//------------------------------------------------------------------------------
QRenderTexture::QRenderTexture(int w, int h, int eFormat, unsigned int uDepthStencilFormat, int x, int y)
{
    m_CCNode = CCRenderTexture::create(w, h, static_cast<CCTexture2DPixelFormat>(eFormat), uDepthStencilFormat);
    m_CCNode->retain();

    CCSprite *sprite = static_cast<CCRenderTexture *>(m_CCNode)->getSprite();

    const CCSize &size = sprite->getContentSize();

    this->w = size.width;
    this->h = size.height;

    this->x = x;
    this->y = y;

    static bool normaliseProperties = true;

#ifdef MARMALADE
    static bool settingsRead;

    if (!settingsRead)
    {
        settingsRead = true;

        int legacyBehaviour = 0;

        if (S3E_RESULT_SUCCESS == s3eConfigGetInt("QUICK", "RenderTextureLegacyBehaviour", &legacyBehaviour))
        {
            normaliseProperties = legacyBehaviour == 0;
        }
    }
#endif

    if (normaliseProperties)
    {
        sprite->setAnchorPoint(ccp(0, 0));

        sprite->setScaleY(1.0f);

        sprite->setFlipY(true);
    }
}
//------------------------------------------------------------------------------
QRenderTexture::~QRenderTexture()
{
//    QTrace("QRenderTexture destroyed");
}
//------------------------------------------------------------------------------
void QRenderTexture::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
    {
        return;
    }

    QNode::sync();

    CCSprite *sprite = static_cast<CCRenderTexture *>(m_CCNode)->getSprite();

    const CCSize &size = sprite->getContentSize();

    w = size.width;
    h = size.height;
}

void QRenderTexture::begin(QColor *clear)
{
    if (NULL == clear)
    {
        static_cast<CCRenderTexture *>(m_CCNode)->begin();
    }
    else
    {
        ccColor4F c = clear->toCCC4F();
        static_cast<CCRenderTexture *>(m_CCNode)->beginWithClear(c.r, c.g, c.b, c.a);
    }
}

void QRenderTexture::endToLua()
{
    finish();
}

void QRenderTexture::finish()
{
    static_cast<CCRenderTexture *>(m_CCNode)->end();
}

bool QRenderTexture::saveToFile(const char *name)
{
    return static_cast<CCRenderTexture *>(m_CCNode)->saveToFile(name, kCCImageFormatPNG);
}

QSprite *QRenderTexture::_getSprite()
{
    return new QSprite(static_cast<CCRenderTexture *>(m_CCNode)->getSprite());
}

void QRenderTexture::setSprite(QSprite *var)
{
    static_cast<CCRenderTexture *>(m_CCNode)->setSprite(static_cast<CCSprite*>(var->m_CCNode));
}

void QRenderTexture::clear(QColor *color)
{
    ccColor4F c = color->toCCC4F();
    static_cast<CCRenderTexture *>(m_CCNode)->clear(c.r, c.g, c.b, c.a);
}

bool QRenderTexture::get_autodraw() const
{
    return static_cast<CCRenderTexture *>(m_CCNode)->isAutoDraw();
}

void QRenderTexture::set_autodraw(bool bAutoDraw)
{
    static_cast<CCRenderTexture *>(m_CCNode)->setAutoDraw(bAutoDraw);
}

QUICK_NAMESPACE_END;
