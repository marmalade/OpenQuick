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
-- QAtlas
--------------------------------------------------------------------------------
QAtlas = {}
QAtlas.__index = QAtlas

-- Override QNode GC function (still call old one at the end)
QAtlas.oldGC = getmetatable(quick.QAtlas).__gc
QAtlas.newGC = function(n)
    if n.name then
        dbg.print("GC on atlas: " .. n.name)
    else
        dbg.print("GC on atlas: (unnamed)")
    end
    QAtlas.oldGC(n)
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QAtlas.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QAtlas.
This must be called immediately after the QAtlas() constructor.
*/
--]]
function QAtlas:initAtlas(n)
    local lp = {}
    setmetatable(lp, QAtlas)
    tolua.setpeer(n, lp)

    local mt = getmetatable(n) 
    mt.__serialize = QAtlas.serialize
    if config.debug.traceGC == true then
        mt.__gc = QAtlas.newGC
    end
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a texture atlas, specifying arbitrary input values.
@param values Lua table specifying name/value pairs, the path to a .plist file or the path to a texture.
@return The created atlas.
*/
--]]
function director:createAtlas(values)
    dbg.assertFuncVarTypes({"table", "string"}, values)
    local n = quick.QAtlas()
    QAtlas:initAtlas(n)

    if (type(values) == "table") then

        dbg.assert( values.textureName ~= nil, "director:createAtlas called without a valid textureName")
        n:initTexture( values.textureName)

        -- Calculate the scaling values for dynamic resolution support
        local texture_width, texture_height = n:getTextureSize()
        local source_width = values.originalSheetWidth or texture_width
        local source_height = values.originalSheetWidth or texture_width
        local scale_x = texture_width / source_width
        local scale_y = texture_width / source_width

        if values.frames ~= nil then
            -- initialise from a frames array
            for i,frame in ipairs(values.frames) do
                dbg.assert( frame.x ~= nil and frame.y ~= nil and frame.width ~= nil and frame.height ~= nil, "Each frame must contain an x, y, width and height member")

                local scaled_width = frame.width * scale_x
                local scaled_height = frame.height * scale_y

                n:addSpriteFrame( frame.x * scale_x, frame.y * scale_y,
                                    scaled_width, scaled_height,
                                    false,
                                    0, 0, scaled_width, scaled_height)

            end
        else
            -- initialise from a width/height/numFrames process
            dbg.assert( values.width ~= nil and values.height ~= nil and values.numFrames ~= nil, "Atlas simple parameter initialisation needs at least width, height and numFrames")

            -- Step the sprites at native resolution
            local sx = values.xStart or 0
            local x = sx
            local y = values.yStart or 0
            local remaining_frames = values.numFrames

            local border = values.border or 0
            local coverage_width = values.width + (border * 2)
            local coverage_height = values.height + (border * 2)

            local scaled_width = values.width * scale_x
            local scaled_height = values.height * scale_y

            -- Loop across and down the texture adding frames
            repeat
                repeat
                    n:addSpriteFrame( (x + border) * scale_x, (y + border) * scale_y,
                                       scaled_width, scaled_height,
                                       false,
                                       0, 0, scaled_width, scaled_height)

                    x = x + coverage_width

                    remaining_frames = remaining_frames - 1

                until (x + coverage_width) > texture_width or remaining_frames == 0

                x = sx
                y = y + coverage_height

            until (y + coverage_height) > texture_height or remaining_frames == 0

            dbg.assert( remaining_frames == 0, "The texture was too small for the number of images specified")

        end

    else
        -- Load via a path
        dbg.assertFuncVarTypes({"string"}, values)
        n:initFromFile(values)
    end

    -- Store this Atlas in the current QScene object's atlas list
--    dbg.print( "Adding atlas to scene "..tostring(self.currentScene))
    self.currentScene._atlasList[n] = n

    return n
end

