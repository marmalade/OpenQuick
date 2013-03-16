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

--------------------------------------------------------------------------------
-- Scene
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QScene = quick.QScene
else
	QScene = {}
    table.setValuesFromTable(QScene, QNode) -- previous class in hierarchy
	QScene.__index = QScene
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
--[[
/*
Initialise the peer table for the C++ class QScene.
This must be called immediately after the QScene() constructor.
*/
--]]
function QScene:initScene(n)
	local np
	if not config.debug.mock_tolua == true then
	    local np = {}
        local ep = tolua.getpeer(n)
        table.setValuesFromTable(np, ep)
	    setmetatable(np, QScene)
	    tolua.setpeer(n, np)
	else
		np = n
	end

    -- Set the scene width and height to match the screen dimensions
    n.w = director.displayWidth
    n.h = director.displayHeight
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a scene node, and set it to be the director's current scene.
Note that no transition occurs from any previous scene, and no scene events are thrown.
*/
--]]
function director:createScene(v)
    dbg.assertFuncVarTypes({"table", "nil"}, v)

    local n = quick.QScene()
    QNode:initNode(n)
    QScene:initScene(n)
    n:_init(false)
    table.setValuesFromTable(n, v)
    self:setCurrentScene(n)

    -- Mark that setUp has NOT been called yet
    n.isSetUp = false
    return n
end

--[[
/*! Play the current assigned animation.
    @param n (optional) A table containing playback parameters
        startFrame (optional) = The first frame of the animation to play
        loopCount (optional) = The number of times to play the animation. 0 = infinate
*/
--]]
function QScene:play(n)
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

