--[[/*
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
 */--]]

--[[
Notes on connection between Sprite and Texture:

QSprite
    cocos2d::CCNode* (CCSprite2*, public cocos2d::CCSprite*)
    QAnimation* m_pAnimation;
    QAnimate* m_pAnimateAction; // used to animate sprite if it has > 1 frame
    cocos2d::CCRepeatForever* m_pRunAction; // used to encapsulate the AnimateAction

QAnimate (public cocos2d::CCAnimate)
    // Animation controller, simply a wrapper around CCAnimate

QAnimation
    cocos2d::CCAnimation* m_Animation;
    // Animation, simply a wrapper for CCAnimation
    // CCAnimation contains CCSpriteFrames
    // CCSpriteFrame contains CCTexture2D

To get current CCTexture for sprite:

int f = QAnimate::GetFrame()                // gets current frame ID
CCSpriteFrame* pSF = QAnimation::GetFrame(f)    // gets CCSpriteFrame from fram ID
CCTexture2D* pTex = pSF->getTexture()       // gets CCTexture2D

We really need to store QAtlas* as userdata on the CCTexture2D
USE CCObject:m_uID
--]]

--------------------------------------------------------------------------------
-- Sprite
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QSprite = quick.QSprite
else
	QSprite = {}
    table.setValuesFromTable(QSprite, QNode) -- previous class in hierarchy
	QSprite.__index = QSprite
end


--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
--[[
/*
Initialise the peer table for the C++ class QSprite.
This must be called immediately after the QSprite() constructor.
*/
--]]
function QSprite:initSprite(n)
	local np
	if not config.debug.mock_tolua == true then
	    local np = {}
        local ep = tolua.getpeer(n)
        table.setValuesFromTable(np, ep)
	    setmetatable(np, QSprite)
	    tolua.setpeer(n, np)

--[[        local mt = getmetatable(n)
        mt.__gc = function(self)
            director.runTextureCleanup = true
            self:delete()
        end
        ]]
	else
		np = n
	end
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a sprite node, specifying arbitrary input values.
@param values Lua table specifying name/value pairs.
@return The created sprite.
*/
--]]
function director:createSprite(values)
end
--[[
/**
Create a sprite node, at the specified screen position, with the specified texture name.
@param x X coordinate of sprite.
@param y Y coordinate of sprite.
@param source Either a full filename (including extension) of the texture or an animation to associate with
@return The created sprite.
*/
--]]
function director:createSprite(x, y, source)
    local n = quick.QSprite()
    QNode:initNode(n)
    QSprite:initSprite(n)
    self:addNodeToLists(n)

    local frame = nil

    if type(x) == "table" then
        -- Copy any "source" input to local
        source = x["source"]
        x["source"] = nil
        table.setValuesFromTable(n, x)
        if x.frame then
            frame = x.frame
        end
    else
        dbg.assertFuncVarTypes({"number", "number", "string"}, x, y, source)
        n.x = x
        n.y = y
    end
    n.source = source

    -- See if we need to create a real source
    if type(source) == "string" then
        -- "source" is assumed to point to a single image file
        -- Create an atlas and animation from this file
        local atlas = director:createAtlas(source)
        n.source = director:createAnimation( { start = 1, count = 1, atlas = atlas } )
        n.animationlock = n.source
    end

    dbg.assert(n.source, "Source data is nil")
    n.animation = n.source
    n.source = nil
    if frame then
        n.frame = frame
    end

    return n
end

--[[
/*! Play the current assigned animation.
    @param n (optional) A table containing playback parameters
        startFrame (optional) = The first frame of the animation to play
        loopCount (optional) = The number of times to play the animation. 0 = infinate
*/
--]]
function QSprite:play(n)
	dbg.assertFuncVarTypes({"nil", "table"}, n)

    local startFrame = 1
    local loopCount = 0

    if type(n) == "table" then
        if n.startFrame ~= nil then
            startFrame = n.startFrame
        end
        if n.loopCount ~= nil then
            loopCount = n.loopCount
        end
    end

    self:_play( startFrame, loopCount)
end

