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

QTiledMap = {}
table.setValuesFromTable(QTiledMap, QNode) -- previous class in hierarchy
QTiledMap.__index = QTiledMap

QTiledMapLayer = {}
table.setValuesFromTable(QTiledMapLayer, QNode) -- previous class in hierarchy
QTiledMapLayer.__index = QTiledMapLayer

-- from ccTMXTileFlags
tiledMap = {}
tiledMap.horizontal = 0x80000000
tiledMap.vertical = 0x40000000
tiledMap.diagonal = 0x20000000
tiledMap.flippedAll = 0xe0000000

QTiledMap.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QTiledMap), o))
	return obj
end
QTiledMapLayer.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QTiledMapLayer), o))
	return obj
end

function QTiledMap:initTiledMap(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QTiledMap)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QTiledMap.serialize
end

function QTiledMapLayer:initTiledMapLayer(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QTiledMapLayer)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QTiledMapLayer.serialize
end

function director:createTiledMap(plist)
    dbg.assertFuncVarType("string", plist)
	local n = quick.QTiledMap()
	QNode:initNode(n)
	QTiledMap:initTiledMap(n)

	-- Create CCNode from plist
	n:init(plist)

	-- Set up QTiledMap children to be QTiledMapLayers
	-- This reflects the hierarchy already in place between the
	-- CCTMXTiledMap and the CCTMXLayers
	local layer
	local numc = n:_getCCNodeNumChildren()
	for i=0,numc-1 do
		layer = n:_createQTiledMapLayer(i)
		QNode:initNode(layer)
		QTiledMapLayer:initTiledMapLayer(layer)
    	n:addChild(layer)
    end

    self:addNodeToLists(n)
	return n
end

--[[
Promoted from C++ to Lua, so that we can manage the lifecycle of the 
associated QSprite object. For each grid ref, a CCSprite already exists.
Only if we call getSpriteAtGridRef() do we create an associated QSprite.
--]]
function QTiledMapLayer:getSpriteAtGridRef(x, y)
	-- Get QSprite or nil
	local qs = self:_checkSpriteAtGridRef(x, y)
	if qs == nil then
		qs = director:_createSpriteNoCCNode()
		self._activeQSprite = qs
		self:_setActiveSpriteCCNode()
		self:addChild(qs)
	end
	
	return qs
end				

--[[
Promoted from C++ to Lua, so that we can manage the lifecycle of the 
associated QSprite object, which may or may not exist for any tile.
If it exists, here we remove it from the Lua scene graph.
--]]
function QTiledMapLayer:removeTileAtGridRef(x, y)
	-- Get QSprite or nil
	local qs = self:_checkSpriteAtGridRef(x, y)
	if qs then
		dbg.print("removeTileAtGridRef, removing QSprite")
		qs = qs:removeFromParent()
	end
	self:_removeTileAtGridRef(x, y)
end
