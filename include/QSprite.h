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
	\file QSprite.h
	\brief Sprite object intermediary.
*/
//------------------------------------------------------------------------------

#ifndef __Q_SPRITE_H
#define __Q_SPRITE_H

#include "QDefines.h"
#include "QNode.h"
#include "QAnimation.h"
#include "QAnimate.h"
#include "QRect.h"
#include "QFilter.h"

#include "cocos2d.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// CCSprite2
//------------------------------------------------------------------------------
// Inherit, so that we can overload ::draw method, e.g. to provide more flexible debug rendering
class QSprite;
class CCSprite2 : public cocos2d::CCSprite {
public:
    CCSprite2(QSprite* pSprite) : m_Sprite(pSprite) {}
	void drawMain();
	void drawSetup();
	virtual void draw();
    QSprite* m_Sprite;
};

//------------------------------------------------------------------------------
// QSprite
//------------------------------------------------------------------------------
/**
The Sprite object is probably the most common of all Nodes. It displays a single rectangular texture map region.
It inherits from the Node object.
*/
class QSprite : public QNode { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    virtual const char* _getToLuaClassName() { return "quick::QSprite"; }
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
    QSprite(bool createCCNode = true);
    QSprite(CCSprite *sprite);
    ~QSprite();
    void _play( int startFrame, int loopCount);

    // BOUND, PUBLIC
    virtual void sync();

    /*! Pause the current assingned animation.
    */
    void pause();

    /*! Sets the current frame the sprite will display in the in the assigned.
        animation.
        @param frame The frame to display.
    */
    void setFrame( int frame);

    /*! Sets the animation to get frames from to display on this sprite.
        @param anim The animation to associate
    */
    void setAnimation( QAnimation *anim);

    //! Sprite x flip
    /*! The xFlip boolean stores the current horizontal render flip state of the sprite. */
    bool xFlip;

    //! Sprite y flip
    /*! The yFlip boolean stores the current vertical render flip state of the sprite. */
    bool yFlip;

    // The UV rectangle to display. Defaults to xywh = 0011
    QRect uvRect;

    /*! The blend mode to use when rendering this sprite.
        Available options are.
        - "normal"\n
          Standard alpha blended
        - "add"\n
          Standard additive
        - "multiply"\n
          Standard multiply
        - "screen"\n
          Source + (dest * (1 - source))
    */
    std::string blendMode;
 
    //! The animation time scale
    float timeScale;

    //! True only if we wish to display the texture region as box, for debugging purposes
    bool debugDrawTextureRegion;

    /*! True only if we wish the animation system to report animation events
        for this sprite.
    */
    bool raisesAnimEvents;

    /*! Filter parameters
    */
    QFilterData filter;
    
    /**
        Get the current atlas object referenced by this sprite.
    */
    QAtlas* getAtlas() const;

    // tolua_end

    // UNBOUND
    void GetBlendFunction(cocos2d::ccBlendFunc *blend) const;
    cocos2d::CCSpriteFrame* GetSpriteFrame() const;

    // tolua explicit accessors
    void set_isPlaying(bool value);         //! tolua parameter set access for isPlaying
    bool get_isPlaying(void);               //! tolua parameter get access for isPlaying

    void set_animation(QAnimation *anim);   //! tolua parameter set access to m_pAnimation
    QAnimation *get_animation(void);        //! tolua parameter get access to m_pAnimation

    void set_frame(int frame);              //! tolua parameter set access to frame
    int get_frame(void);                    //! tolua parameter get access to frame

    //! the animation currently associated with this sprite
    QAnimation *m_pAnimation;

    //! the QAnimate action used to animate this sprite if it has more
    //! than one frame in the attached animation
    QAnimate *m_pAnimateAction;

    //! the CCRepeatForever action used to encapsulate the AnimateAction
    cocos2d::CCRepeatForever *m_pRunAction;

    //! Currently applied filter
    QFilter * m_pFilter;
    //! The Last applied filter name
    std::string m_LastFilter;
    
}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_SPRITE_H
