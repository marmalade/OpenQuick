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
-- Rectangle
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------
QRectangle = {}
table.setValuesFromTable(QRectangle, QLines) -- previous class in hierarchy
QRectangle.__index = QRectangle

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QRectangle.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QRectangle), o))
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QLines), o))
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QVector), o))
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QRectangle.
This must be called immediately after the QRectangle() constructor.
*/
--]]
function QRectangle:initRectangle(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QRectangle)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QRectangle.serialize
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a rectangle node, specifying arbitrary input values.
@param values Lua table specifying name/value pairs.
@return The created rectangle object.
*/
--]]
function director:createRectangle(values)
end
--[[
/**
Create a rectangle node, with the specified position and radius.
@param x X coordinate of rectangle origin.
@param y Y coordinate of rectangle origin.
@param w The width of the rectangle.
@param h The height of the rectangle.
@return The created rectangle object.
*/
--]]
function director:createRectangle(x, y, w, h)
    local n = quick.QRectangle()
    -- Must call init.. on all subclasses in hierarchy order
    QNode:initNode(n)
    QVector:initVector(n)
    QLines:initLines(n)
    QRectangle:initRectangle(n)

    if (type(x) == "table") then
        table.setValuesFromTable(n, x)
    else
        dbg.assertFuncVarTypes({"number", "number", "number", "number"}, x, y, w, h)
        n.x = x
        n.y = y
        n.w = w
        n.h = h
    end

    self:addNodeToLists(n)
    return n
end
