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
-- QAnimation
--------------------------------------------------------------------------------
QAnimation = {}
QAnimation.__index = QAnimation -- presumably we can point down a chain of inheritance?

-- Override QNode GC function (still call old one at the end)
QAnimation.oldGC = getmetatable(quick.QAnimation).__gc
QAnimation.newGC = function(n)
    if n.name then
        dbg.print("GC on animation: " .. n.name)
    else
        dbg.print("GC on animation: (unnamed)")
    end
    QAnimation.oldGC(n)
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QAnimation.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QAnimation.
This must be called immediately after the QAnimation() constructor.
*/
--]]
function QAnimation:initAnimation(n)
    local lp = {}
    setmetatable(lp, QAnimation)
    tolua.setpeer(n, lp)

    local mt = getmetatable(n) 
    mt.__serialize = QAnimation.serialize
    if config.debug.traceGC == true then
        mt.__gc = QAnimation.newGC
    end
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create an animation, specifying arbitrary input values.
@param values Lua table specifying name/value pairs.
@return The created animation.
*/
--]]
function director:createAnimation(values)
    dbg.assertFuncVarTypes({"table", "userdata", "nil"}, values)

    local n = quick.QAnimation()
    QAnimation:initAnimation(n)

    if type(values) ~= "table" then
        -- super simple creation
        n:addFrame(1, values)
    else
        if values.frames ~= nil then
            n.usedAtlases = {}
            -- Framed creation
            for i,v in ipairs(values.frames) do
                local frame, atlas
                if type(v) == "table" then
                    dbg.assert( v.frame ~= nil and v.atlas ~= nil, "A frame and atlas must be supplied")
                    atlas = v.atlas
                    frame = v.frame
                else
                    dbg.assert( values.atlas ~= nil, "A default atlas must be supplied")
                    atlas = values.atlas
                    frame = v
                end

                -- Add a lua reference to the atlas to avoid it being released too soon
                table.insert( n.usedAtlases, atlas)

                if type(frame) == "string" then
                    n:addFrameByName( frame, atlas)
                else
                    n:addFrame( frame, atlas)
                end
            end
        else
            -- Simple creation
            dbg.assert( values.start ~= nil and values.count ~= nil and values.atlas ~= nil, "Simple creation requires start, count and atlas to be passed")

            local last_frame = values.start + values.count - 1
            for frame = values.start, last_frame do
                n:addFrame( frame, values.atlas)
            end

            -- Add a lua reference to the atlas to avoid it being released too soon
            n.usedAtlases = values.atlas
        end
    end

    n:setDelay( values.delay or 1)

     -- Store this animation in the current QScene object's atlas list
--    dbg.print( "Adding animation to scene "..tostring(self.currentScene))
    self.currentScene._animationList[n]  = n

    return n
end
