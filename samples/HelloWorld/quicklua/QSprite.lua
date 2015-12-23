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
QSprite = {}
table.setValuesFromTable(QSprite, QNode) -- previous class in hierarchy
QSprite.__index = QSprite

--------------------------------------------------------------------------------
-- For overriding specific keys to do more complex function calls
-- Currently just used for width and height assignment to scale sprites
-- Falls back to QNode version then to userdata/default behaviour
-- These are applied in initSprite()

function QSprite_set(t, name, value)
    if name == "xScale" then
        t._xScale = value --store user value to avoid rounding errors
        QNode_set(t, "xScale", t._relativeScaleX*value)
    elseif name == "yScale" then
        t._yScale = value
        QNode_set(t, "yScale", t._relativeScaleY*value)
    elseif name == "w" then
        local oldScale = t.xScale
        t._relativeScaleX = value/t._fileW
        QNode_set(t, "xScale",  oldScale * t._relativeScaleX)
        QNode_set(t, name, value)
    elseif name == "h" then
        local oldScale = t.yScale
        t._relativeScaleY = value/t._fileH
        QNode_set(t, "yScale",  oldScale * t._relativeScaleY)
        QNode_set(t, name, value)
    else
        QNode_set(t, name, value)
    end
end

--Using same style as QNode already does for similar overrides
local oldNodeMTI = getmetatable(quick.QNode).__index

function QSprite_get(t, name)
    if name == "xScale" then
        return t._xScale --could return oldNodeMTI(t, name) / t._relativeScaleX, but may get rounding errors
    elseif name == "yScale" then
        return t._yScale
    else
        return oldNodeMTI(t, name)
    end
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QSprite.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QSprite), o))
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QSprite.
This must be called immediately after the QSprite() constructor.
*/
--]]
function QSprite:initSprite(n)
    --override metamethods for node (see above)
    getmetatable(n).__newindex = QSprite_set
    getmetatable(n).__index = QSprite_get
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QSprite)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QSprite.serialize
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
    local w = nil
    local h = nil

    if type(x) == "table" then
        -- Copy any "source" input to local
        source = x["source"]
        x["source"] = nil
        
        --avoid setting w & h (via overrides) until sprite is set-up
        if x.w then
            w = x.w
            x.w = nil
        end
        if x.h then
            h = x.h
            x.h = nil
        end
        
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

    -- Allow the texture (Atlas) to be unspecified at the time of creation
    --dbg.assert(n.source, "Source data is nil")
    if n.source then
        n.animation = n.source
        n.source = nil
    end
    if frame then
        n.frame = frame
    end
    
    -- Set width and height after image has been loaded
    n._relativeScaleX = 1
    n._relativeScaleY = 1
    n._fileW = n.w
    n._fileH = n.h
    n.xScale = n._xScale or 1.0
    n.yScale = n._yScale or 1.0
    
    --We have overriden the assignment (_index) operator,
    --so assigning it now will update internals
    if w then
        n.w = w
    end
    if h then
        n.h = h
    end

    return n
end

-- PRIVATE
function director:_createSpriteNoCCNode()
    local n = quick.QSprite(false)
    QNode:initNode(n)
    QSprite:initSprite(n)
    self:addNodeToLists(n)
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

--[[
/*! Set the width and height to the file size of the texture.
    xScale and yScale will not be reset.
*/
--]]
function QSprite:resetSize()
    self.w = self._fileW
    self.h = self._fileH
end

    
