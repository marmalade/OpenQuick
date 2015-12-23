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
-- Render Texture
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------

QRenderTexture = {}
table.setValuesFromTable(QRenderTexture, QNode) -- previous class in hierarchy
QRenderTexture.__index = QRenderTexture


QRenderTexture.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QRenderTexture), o))
	return obj
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
--[[
/*
Initialise the peer table for the C++ class QRenderTexture.
This must be called immediately after the QRenderTexture() constructor.
*/
--]]
function QRenderTexture:initRenderTexture(n)
    local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
    setmetatable(np, QRenderTexture)
    tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QRenderTexture.serialize
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Create a render texture node, with the specified size.
@param w The width of the texture.
@param h The height of the texture.
@param eFormat The pixel format of the texture.
@param uDepthStencilFormat The depthStencil format of the texture.
@return The created render texture object.
*/
--]]
function director:createRenderTexture(w, h, eFormat, uDepthStencilFormat, x, y)
    local args = {}
    if (type(w) == "table") then
        table.setValuesFromTable(args, w)
    else
        dbg.assertFuncVarTypes({"number", "number", "number", "number", "number", "number"}, w, h, eFormat, uDepthStencilFormat, x, y)
        args.w = w
        args.h = h
        args.eFormat = eFormat
        args.uDepthStencilFormat = uDepthStencilFormat
        args.x = x
        args.y = y
    end

    local n = quick.QRenderTexture(args.w, args.h, args.eFormat, args.uDepthStencilFormat, args.x, args.y)

    -- Must call init.. on all subclasses in hierarchy order
    QNode:initNode(n)
    QRenderTexture:initRenderTexture(n)

    self:addNodeToLists(n)

    return n
end

QRenderTexture.getSprite = function(o)
    local n = o:_getSprite()

    QNode:initNode(n)
    QSprite:initSprite(n)

    director:addNodeToLists(n)

    return n
end
