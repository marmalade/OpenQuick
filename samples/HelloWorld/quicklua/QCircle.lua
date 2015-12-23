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
-- Circle
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------
QCircle = {}
table.setValuesFromTable(QCircle, QVector) -- previous class in hierarchy
QCircle.__index = QCircle

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QCircle.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QCircle), o))
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QVector), o))
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QCircle.
This must be called immediately after the QCircle() constructor.
*/
--]]
function QCircle:initCircle(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QCircle)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QCircle.serialize
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a circle node, specifying arbitrary input values.
@param values Lua table specifying name/value pairs.
@return The created circle object.
*/
--]]
function director:createCircle(values)
end
--[[
/**
Create a circle node, with the specified position and radius.
@param x X coordinate of circle origin.
@param y Y coordinate of circle origin.
@param radius The radius of the circle.
@return The created circle object.
*/
--]]
function director:createCircle(x, y, radius)
    local n = quick.QCircle()
    -- Must call init.. on all subclasses in hierarchy order
    QNode:initNode(n)
    QVector:initVector(n)
    QCircle:initCircle(n)

    if (type(x) == "table") then
        table.setValuesFromTable(n, x)
    else
        dbg.assertFuncVarTypes({"number", "number", "number"}, x, y, radius)
        n.x = x
        n.y = y
        n.radius = radius
    end

    self:addNodeToLists(n)
    return n
end
