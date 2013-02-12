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
	\file QAnimate.h
	\brief Framed animation action helper class.
*/
//------------------------------------------------------------------------------

#ifndef __Q_ANIMATE_H
#define __Q_ANIMATE_H

#include "QDefines.h"
#include "QNode.h"
#include "cocos2d.h"

namespace quick {

//------------------------------------------------------------------------------
// QAnimate
//------------------------------------------------------------------------------
/*!
    The QAnimate class is used internally by OpenQuick to help play framed
    animations.  It's a subclass of the CCAnimate action that allows for
    modifications of playback speed as well as simple pause and play support.
*/
class QAnimate : public cocos2d::CCAnimate {
public:
    QAnimate();
    ~QAnimate();    

    /*! Run a single step of the animation
        @param dt The delta time of the frame
    */
   	virtual void step(float dt);		// MH: cocos2d::ccTime has been removed and replaced with float in CC 2.0.3

    /*! Update the animation
        @param t The time into the animation
    */
    virtual void update(float t);		// MH: cocos2d::ccTime has been removed and replaced with float in CC 2.0.3

    /*! Get the current playing status of this animate action.
        @returns A boolean saying if the animation is playing or not
    */
    bool IsPlaying(void) const { return m_Playing; }
    
    /*! Set the current playing state of this animate action.
        @param playing The play state to be set (false is stopped)
    */
    void SetPlaying(bool playing) { m_Playing = playing; }

    /*! Gets the current time scaling of this animate action.
        @return The current time scalar
    */
    float GetTimeScale(void) const { return m_TimeScale; }

    /*! Sets the current time scaling of this animate action.
        @param The current time scalar
    */
    void SetTimeScale(float value) { m_TimeScale = value; }

    /*! Gets the current animation frame number that this animate action is
        displaying.
        @return The current animation frame
    */
    int GetFrame(void) const;

    /*! Sets the current animation frame numver that this animate action is
        displaying.
        @param frame The current animation frame
    */
    void SetFrame(int frame);

    /*! Sets the current loop count for this animate action.
        @param frame The current loop count
    */
    void SetLoopCount(int loopCount);

private:
    /*! The time scaling applied to this animate action. */
    float m_TimeScale;

    /*! The current play state of this animate action. */
    bool m_Playing;

    /*! The number of loops to perform on this animate action. 0 = infinate */
    int m_LoopCount;
};

}

#endif // __Q_FRAMED_ANIMATOR_H
