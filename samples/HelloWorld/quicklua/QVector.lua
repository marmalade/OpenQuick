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
-- Vector
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------
QVector = {}
table.setValuesFromTable(QVector, QNode) -- previous class in hierarchy
QVector.__index = QVector

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QVector.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QVector), o))
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QVector.
This must be called immediately after the QVector() constructor.
*/
--]]
function QVector:initVector(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QVector)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QVector.serialize
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
