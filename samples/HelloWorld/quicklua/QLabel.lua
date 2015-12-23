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
-- Labels
--------------------------------------------------------------------------------
QLabel = {}
QLabel.__index = QNode

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QLabel.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QLabel), o))
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QNode.
This must be called immediately after the QNode() constructor.
*/
--]]
function QLabel:initLabel(l)
    local lp = {}
    setmetatable(lp, QLabel)
    tolua.setpeer(l, lp)

    local mt = getmetatable(n) 
    mt.__serialize = QLabel.serialize
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a label node, specifying arbitrary input values.
@param values Lua table specifying name/value pairs.
@return The created label.
*/
--]]
function director:createLabel(values)
end

--[[
/**
Create a label node, at the specified screen position, with the specified text string.
@param x X coordinate of label origin.
@param y Y coordinate of label origin.
@param text Text string.
@param font a string or QFont defining the font to use.
@return The created label.
*/
--]]
function director:createLabel(x, y, text, font)
    local n = quick.QLabel()
    QNode:initNode(n)

    if (type(x) == "table") then
        -- Remove 'font' key from table, place in local variable
        font = x["font"] -- could be nil
        x["font"] = nil
        table.setValuesFromTable(n, x)
    else
        dbg.assertFuncVarTypes({"number", "number", "string"}, x, y, text)
        dbg.assertFuncVarTypes({"string", "userdata", "nil"}, font)
        n.x = x
        n.y = y
        n.text = text
    end
	if font == nil then
		-- Specify the default font
        if self.defaultFont == nil then
            dbg.print("Creating default font")
            self.defaultFont = self:createFont("fonts/Default.fnt")
        end
		font = self.defaultFont
	elseif type(font) == "string" then
		-- This version creates a font object from the string first
		font = self:createFont(font)
        n.fontlock = font
	end
	n.font = font
	n:init()
    self:addNodeToLists(n)

    -- Force a sync to allow changed parentage to take effect
    n:sync()

    return n
end

