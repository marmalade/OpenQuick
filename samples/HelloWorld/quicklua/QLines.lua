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
-- Lines
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------
QLines = {}
table.setValuesFromTable(QLines, QVector) -- previous class in hierarchy
QLines.__index = QLines

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QLines.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
--    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QLines), o))
--    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QVector), o))
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QLines.
This must be called immediately after the QLines() constructor.
*/
--]]
function QLines:initLines(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QLines)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QLines.serialize
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a lines node, specifying arbitrary input values.
@param values Lua table specifying name/value pairs.
@return The created lines object.
*/
--]]
function director:createLines(values)
end
--[[
/**
Create a lines node, with the specified coordinates.
@param coords The table of coordinates to initialise with. These are x,y pairs, so the size of the table must be even.
@return The created lines object.
*/
--]]
function director:createLines(x, y, coords)
    local n = quick.QLines()
    -- Must call init.. on all subclasses in hierarchy order
    QNode:initNode(n)
    QVector:initVector(n)
    QLines:initLines(n)

    if (type(x) == "table") then
        table.setValuesFromTable(n, x)
        if x.coords then
            n:append(x.coords)
        end
    else
        dbg.assertFuncVarTypes({"number", "number", "table"}, x, y, coords)
        n.x = x
        n.y = y
        if coords then
            n:append(coords)
        end
    end

    self:addNodeToLists(n)
    return n
end

--[[
/*
Append an array of points to the lines object.
The array is assumed to be x,y pairs, so must have an even number of entries.
*/
--]]
function QLines:append(coords)
    dbg.assertFuncVarType("table", coords)

    for i = 1,#coords,2 do
        self:_appendPoint(coords[i+0], coords[i+1])
    end
    self:_appendFinalise()
end
