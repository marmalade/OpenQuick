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
#include "QAnimation.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QAnimation
//------------------------------------------------------------------------------
QAnimation::QAnimation()
{
    m_Animation = new CCAnimation();
    m_Animation->init();
}
//------------------------------------------------------------------------------
QAnimation::~QAnimation()
{
    CC_SAFE_RELEASE_NULL(m_Animation);

//    QTrace("QAnimation destroyed");
}
//------------------------------------------------------------------------------
void QAnimation::addFrame(int frame, const QAtlas *atlas)
{
    // LUA frames will be 1 based
    frame--;

    // Get the sprite frame from the atlas and set it onto the CCAnimation
    CCSpriteFrame *sprite_frame = atlas->GetFrame( frame);
    m_Animation->addSpriteFrame( sprite_frame);
}
//------------------------------------------------------------------------------
void QAnimation::addFrameByName( std::string frame_name, const QAtlas *atlas)
{
    // Get the sprite frame from the atlas and set it onto the CCAnimation
    CCSpriteFrame *sprite_frame = atlas->GetFrame( frame_name);
    m_Animation->addSpriteFrame( sprite_frame);
}
//------------------------------------------------------------------------------
void QAnimation::setDelay( float delay)
{
    m_Animation->setDelayPerUnit( delay);
}
//------------------------------------------------------------------------------
float QAnimation::getDuration( void) const
{
    return m_Animation->getDuration();
}
//------------------------------------------------------------------------------
CCSpriteFrame *QAnimation::GetFrame( int frame)
{
    QAssert(m_Animation != NULL,"Trying to get a frame from a null animation");
    QAssert(m_Animation->getFrames() != NULL,"Trying to get a frame from an uninitialised animation");

    CCAnimationFrame *animf = (CCAnimationFrame*)m_Animation->
                              getFrames()->objectAtIndex(frame);

    return animf->getSpriteFrame();
}
//------------------------------------------------------------------------------
int QAnimation::GetFrameCount( void) const
{
    return (int)(m_Animation->getFrames()->count());
}


QUICK_NAMESPACE_END;
