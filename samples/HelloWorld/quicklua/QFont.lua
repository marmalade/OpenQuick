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
-- Fonts
--------------------------------------------------------------------------------
QFont = {}
QFont.__index = QFont

-- Override QNode GC function (still call old one at the end)
QFont.oldGC = getmetatable(quick.QFont).__gc
QFont.newGC = function(n)
    if n.name then
        dbg.print("GC on font: " .. n.name)
    else
        dbg.print("GC on font: (unnamed)")
    end
    QFont.oldGC(n)
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QFont.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QNode.
This must be called immediately after the QNode() constructor.
*/
--]]
function QFont:initFont(n)
    local lp = {}
    setmetatable(lp, QFont)
    tolua.setpeer(n, lp)

    local mt = getmetatable(n) 
    mt.__serialize = QFont.serialize
    if config.debug.traceGC == true then
        mt.__gc = QFont.newGC
    end
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a font, specifying arbitrary input values.
@param values Lua table specifying name/value pairs.
@return The created font.
*/
--]]
function director:createFont(values)
end

--[[
/**
Create a font from a .fnt file.
@param filepath path to the .fnt file.
@return The created font.
*/
--]]
function director:createFont(filepath)
    dbg.assertFuncVarType("string", filepath)

    local n = quick.QFont()
    QFont:initFont(n)

    if (type(filepath) == "table") then
		error("director:createFont(values) is currently unsupported")
    else
        dbg.assertFuncVarType("string", filepath)
        local retval = n:initFromFntFile(filepath)
		dbg.assert(retval, "Failed to load .fnt file")
    end

    -- Store this Font in the current QScene object's font list
--    dbg.print( "Adding font to scene "..tostring(self.currentScene))
    self.currentScene._fontList[n] = n

    return n
end
