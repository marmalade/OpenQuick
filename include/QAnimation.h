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
	\file QAnimation.h
	\brief Animation storage class
*/
//------------------------------------------------------------------------------

#ifndef __Q_ANIMATION_H
#define __Q_ANIMATION_H

#include "QDefines.h"
#include "QNode.h"
#include "QAtlas.h"

#include "cocos2d.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QAnimation
//------------------------------------------------------------------------------
/**
The Animation object acts as a storage for framed animation data.
*/
// TODO could this inherit from a CCAnimation object just to expose the bindings?
class QAnimation { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    QAnimation();
    ~QAnimation();

    // BOUND, PUBLIC
    /*! Adds a frame from an atlas to the current animation.
        @param frame The frame number to be retrieved from the atlas
        @param atlas The atlas that defines the sprite frame to be added
    */
    void addFrame( int frame, const QAtlas *atlas);

    /*! Adds a frame from an atlas to the current animation.
        @param frame_name The frame name to be retrieved from the atlas
        @param atlas The atlas that defines the sprite frame to be added
    */
    void addFrameByName( std::string frame_name, const QAtlas *atlas);

    /*! Sets the amount of time, in seconds, each frame of the animation should
        be displayed for.
        @param delay The time, in seconds, that each frame is displayed for
    */
    void setDelay( float delay);

    /*! Gets the playing duration of the animation
        @return The duration of the animation
    */
    float getDuration() const;

    // tolua_end

	// UNBOUND
public:
    /*! Retrieves a sprite frame from the animation
            @param frame The frame number to retrieve
            @return The SpriteFrame for the requested animation frame
    */
    cocos2d::CCSpriteFrame* GetFrame(int frame);

    /*! Gets the number of frames in this animation
        @return The frame count
    */
    int GetFrameCount(void) const;

    /*! Gets the CCAnimation used internally in the class
        @return The Underlying CCAnimation
    */
    cocos2d::CCAnimation* GetCCAnimation() const { return m_Animation; }

private:
    /*! The underlying CCAnimation object */
    cocos2d::CCAnimation* m_Animation;

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_FONT_H
