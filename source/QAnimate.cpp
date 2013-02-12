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
#include "QAnimate.h"
#include "cocos2d.h"
#include "QSprite.h"
#include "QLuaHelpers.h"

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QAnimate
//------------------------------------------------------------------------------
QAnimate::QAnimate()
{
    m_TimeScale = 1.0f;
    m_Playing = true;
    m_fDuration = 0.0f;

    // Set the animation to be looping by default
    m_LoopCount = 0;
}
//------------------------------------------------------------------------------
QAnimate::~QAnimate()
{
}
//------------------------------------------------------------------------------
void QAnimate::step(float dt)
{
    // Allow for aniation pausing by killing the delta time
    if (!m_Playing)
        dt = 0.0f;

    // Modify for time compression on the fly
    dt *= m_TimeScale;

    // Check for looping
    if (m_Playing)
    {
        if (m_elapsed + dt >= m_fDuration)
        {
            CCSprite2 *target_node = (CCSprite2*)m_pTarget;
            bool raise_event = target_node->m_Sprite->raisesAnimEvents;

            // End of animation
            if ( raise_event)
            {
                LUA_EVENT_REUSE("anim");
                LUA_EVENT_SET_TOLUA_PTR("target", (void*)target_node->m_Sprite, "quick::QSprite");
            }

            const char *phase = "looped";

            if (m_LoopCount > 0)
            {
                m_LoopCount--;
                if (m_LoopCount == 0)
                {
                    // This is the end of the anim so pause
                    m_Playing = false;

                    dt = m_fDuration - m_elapsed;
                    phase = "complete";
                    m_nNextFrame = 0;
                }
                else
                {
                    if ( raise_event)
                    {
                        LUA_EVENT_SET_NUMBER("loopsleft", (float)m_LoopCount);
                    }
                }
            }

            // Now send the event
            if ( raise_event)
            {
                LUA_EVENT_SET_STRING("phase", phase);
                LUA_EVENT_SEND();
            }
        }
    }

    // Now step the parent class
    CCAnimate::step(dt);
}
//------------------------------------------------------------------------------
void QAnimate::update(float t)
{
    // Call the parent update
    CCAnimate::update(t);

    // Allow cocos to pass more than one frame at a time *sigh*
    unsigned int numberOfFrames = getAnimation()->getFrames()->count();
    while ( m_nNextFrame < (int)numberOfFrames && m_pSplitTimes->at(m_nNextFrame) <= t)
    {
        CCAnimate::update(t);
    }
}
//------------------------------------------------------------------------------
int QAnimate::GetFrame( void) const
{
	unsigned int numberOfFrames = getAnimation()->getFrames()->count();
    float time = m_elapsed / m_fDuration;

	unsigned int idx = (unsigned int)(time * numberOfFrames);
	if (idx >= numberOfFrames)
		idx = numberOfFrames - 1;

    // Lua frames are 1 based
    idx++;

    return idx;
}
//------------------------------------------------------------------------------
void QAnimate::SetFrame( int frame)
{
    // Lua frames are 1 based
    frame--;

    int numberOfFrames = getAnimation()->getFrames()->count();
    if (frame >= numberOfFrames)
		frame = numberOfFrames - 1;

    if (frame < 0)
        frame = 0;

    float time = (float)frame / (float)numberOfFrames;
    m_elapsed = time * m_fDuration;

    // Search for the next frame so the update loop works just right
    m_nNextFrame = 0;
    for (int i = 0; i < numberOfFrames; i++ )
    {
        float splitTime = m_pSplitTimes->at(i);
        if (splitTime > time)
            break;

        m_nNextFrame = i;
    }

    m_bFirstTick = false;
}
//------------------------------------------------------------------------------
void QAnimate::SetLoopCount(int loopCount)
{
    m_LoopCount = loopCount;
}

QUICK_NAMESPACE_END;
