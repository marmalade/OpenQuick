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
-- Nodes
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------
QNode = {}
QNode.__index = QNode

-- Explicit override when setting color property, to allow for assignment
prop_setColor = function(prop, value)
    if value.r then
        -- Assume value is an existing QColor object: copy r,g,b,a
        prop.r = value.r or 0xff
        prop.g = value.g or 0xff
        prop.b = value.b or 0xff
        prop.a = value.a or 0xff
    else
        -- Assume value is a tuple, copy 1,2,3,4
        prop.r = value[1] or 0xff
        prop.g = value[2] or 0xff
        prop.b = value[3] or 0xff
        prop.a = value[4] or 0xff
    end
end

-- Explicit override when setting rect property, to allow for assignment
prop_setRect = function(prop, value)
    if value.w then
        -- Assume value is an existing rect object: copy x,y,w,h
        prop.x = value.x or 0
        prop.y = value.y or 0
        prop.w = value.w or 0
        prop.h = value.h or 0
    else
        -- Assume value is a tuple, copy 1,2,3,4
        prop.x = value[1] or 0
        prop.y = value[2] or 0
        prop.w = value[3] or 0
        prop.h = value[4] or 0
    end
end

-- Explicit override when setting vec2 property, to allow for assignment
prop_setVec2 = function(prop, value)
    if value.x then
        -- Assume value is an existing QVec2 object: copy x,y
        prop.x = value.x or 0
        prop.y = value.y or 0
    else
        -- Assume value is a tuple, copy 1,2
        prop.x = value[1] or 0
        prop.y = value[2] or 0
    end
end

local oldNodeMTNI = getmetatable(quick.QNode).__newindex
QNode_set = function(t, name, value)
    if name == "color" then
        prop_setColor(t.color, value)
    elseif name == "strokeColor" then -- Handle fillColor here also, even though it's a property of QVector
        prop_setColor(t.strokeColor, value)
    elseif name == "debugDrawColor" then
        prop_setColor(t.debugDrawColor, value)
    elseif name == "uvRect" then -- Handle uvRect, even though it's a property of QSprite
        prop_setRect(t.uvRect, value)
    else
        oldNodeMTNI(t, name, value)
    end
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QNode.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QNode.
This must be called immediately after the QNode() constructor.
*/
--]]
-- Override QNode GC function (still call old one at the end)
QNode.oldGC = getmetatable(quick.QNode).__gc
QNode.newGC = function(n)
    if config.debug.traceGC == true then
--        local s = "GC on node (" .. n:_getToLuaClassName() .. "): "
        local s = "GC on node: "
        if n.name then
            s = s .. n.name
        else
            s = s.. "(unnamed)"
        end
        dbg.print(s)
    end
    -- Remove from physics?
    if n.physics then
        physics:removeNode(n)
    end
    QNode.oldGC(n)
end
    
function QNode:initNode(n)
    -- Allow explicit control over assignment... see above
	getmetatable(n).__newindex = QNode_set

    -- ALWAYS set this, because it does stuff even in non-debug mode, e.g. remove node from physics
    getmetatable(n).__gc = QNode.newGC

	local np
	np = {}
	setmetatable(np, QNode)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QNode.serialize

    np.parent = nil
    np.children = {}
    np.tweens = {}
    np.eventListeners = {}
    np.timers = {}
end

--[[
/*
Handle events sent to this node. If there are any children, we work down the hierarchy.
@param event The event to handle.
@return True only if the event was caught.
*/
--]]
function QNode:handleEvent(event)
    dbg.assertFuncVarType("table", event)
    dbg.assert(event.name ~= "touch")

    local result = false

    -- Handle the event
	result = handleEventWithListeners(event, self.eventListeners)

    -- Propagate the event to our children
	if result == false and not event.nopropagation then
		for i = 1,#self.children do
			result = self.children[i]:handleEvent(event)
			if result == true then
				break
			end
		end
	end

	return result
end

--[[
/*
Update any tweens attached to this node.
@param dt The delta time to apply
*/
--]]
function QNode:updateTweens(dt)
    dbg.assertFuncVarType("number", dt)
	-- Update tweens list
	for i,v in ipairs(self.tweens) do
		if v.isComplete == false then
			local remove = v:update(dt)
			if remove == true then
                v.target = nil
				table.remove(self.tweens, i)
			end
		end
	end
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/*
Create a node (base class object), specifying arbitrary input values.
@return The created node.
*/
--]]
function director:createNode(v)
    dbg.assertFuncVarTypes({"table", "nil"}, v)
    
    local n = quick.QNode()
    n:_createCCNode()
    QNode:initNode(n)
    self:addNodeToLists(n)
    table.setValuesFromTable(n, v)
    return n
end

--[[
/**
Get the number of children of this node.
@return The number of children.
*/
--]]
function QNode:getNumChildren()
    return table.getn(self.children)
end

--[[
/**
Determine if the specified node is a child of this node.
@param nc The node to test against.
@return True only if the specified node is a child of this node.
*/
--]]
function QNode:isChild(nc)
    dbg.assertFuncVarType("userdata", nc)
    
    return table.hasValue(self.children, nc)
end

--[[
/**
Set this node's parent to be the specified node.
If this node already has a parent, it is cleanly detached from that node first,
before being added as a child to the specified node.
@param np The node to set as the new parent.
*/
--]]
function QNode:setParent(np)
    if np == nil and self.parent then
        self:removeFromParent()
    else
        dbg.assertFuncVarType("userdata", np)

        if self.parent then
            self.parent:removeChild(self)
        end
        self.parent = np
        self:_setParent(np)
    end
end

--[[
/**
Get this node's parent.
@return The node's parent.
*/
--]]
function QNode:getParent()
    return self.parent
end

--[[
/**
Add the specified node to this node as a child.
If the specified node already has a parent, it is cleanly detached from its parent first,
before being added as a child to this node.
@param nc The node to add as a child.
*/
--]]
function QNode:addChild(nc)
    dbg.assertFuncVarType("userdata", nc)

    if nc.parent then
        nc.parent:removeChild(nc)
    end
    table.insert(self.children, nc)
    nc.parent = self
    nc:refreshTweens(false)
    self:_addChild(nc)
end

--[[
/**
This function with 'drop = true' will break back link of all tweens
with 'drop = false' this will restore them
Needed to GC to destroy this node end tweens linked with it
@param drop boolean parameter
*/
--]]
function QNode:refreshTweens(drop)
    for i,v in ipairs(self.tweens) do
        if drop then
            v.target = nil
        else
            v.target = self
        end
	end
    for i,v in ipairs(self.children) do
        v:refreshTweens(drop)
    end
end

--[[
/**
Remove the specified child node from this node.
If the node is not a child of this node, a failure message is displayed.
@param nc The child node to remove from this node.
*/
--]]
function QNode:removeChild(nc)
    dbg.assertFuncVarType("userdata", nc)
    dbg.assert(table.hasValue(self.children, nc), "Specified node is not a child of this node")

    nc.parent = nil
    for i,v in ipairs(self.children) do
        if v == nc then
            table.remove(self.children, i)
            break
        end
    end
    nc:refreshTweens(true)
    self:_removeChild(nc)
end

--[[
/**
Remove a node from its parent, and therefore from any scene it belongs to.
If the node has no parent, we assert.
*/
--]]
function QNode:removeFromParent()
    dbg.assert(self.parent, "Node has no parent")
    self.parent:removeChild(self)
end

--[[
/**
Add an event listener to the node.
@param name The name of the event or a table of event names to listen for.
@param funcortable The listener: either a listener function, or a Lua table with an index named <name> that is a listener function.
*/
--]]
function QNode:addEventListener(name, funcortable)
    dbg.assertFuncVarTypes({"string", "table"}, name)
    dbg.assertFuncVarTypes({"function", "table", "userdata"}, funcortable)

    -- Use the QSystem global function
    _addEventListener(self, name, funcortable)
end

--[[
/**
Remove an event listener from this node.
@param name The name of the event or a table of event names associated with the listener(s) to remove.
@param funcortable The listener to remove: either a listener function, or a Lua table with an index named <name> that is a listener function.
*/
--]]
function QNode:removeEventListener(name, funcortable)
    dbg.assertFuncVarTypes({"string", "table"}, name)
    dbg.assertFuncVarTypes({"function", "table", "userdata"}, funcortable)

    -- Use the QSystem global function
    _removeEventListener(self, name, funcortable)
end

--[[
/**
Add a timed event to this node.
@param funcortable The listener: either a listener function, or a Lua table with an index named <name> that is a listener function.
@param period The period of the timer, in seconds.
@param iterations The maximum number of times the listener will be called, or 0 to call it indefinitely. Default value is 0.
@param delay An initial delay which must elapse before we start counting down the first period. Default value is 0.
@return The timer object. This can be used to pause, resume or cancel the timer.
*/
--]]
function QNode:addTimer(funcortable, period, iterations, delay)
    period = period or 1
    iterations = iterations or 0
    delay = delay or 0

    dbg.assertFuncVarTypes({"function", "table", "userdata"}, funcortable)
    dbg.assertFuncVarType("number", period)
    dbg.assertFuncVarType("number", iterations)
    dbg.assertFuncVarType("number", delay)

    local el = quick.QEventListener:new()
    QEventListener:initEventListener(el, "timer", funcortable)
    local timer = quick.QTimer:new()
    QTimer:initTimer(timer, el, period, iterations, delay)
    timer.target = self
    table.insert(self.timers, timer)
    return timer
end

--[[
/**
Rotate a node by a specified angle.
@param a The angle to rotate by, in degrees, anticlockwise.
*/
--]]
function QNode:rotate(a)
    dbg.assertFuncVarType("number", a)
    self.rotation = self.rotation + a
end

--[[
/**
Scale a node by a specified amount, specifying the x and y scales to multiply by.
@param sx The multiplier for the scale along the x axis.
@param sy The multiplier for the scale along the y axis.
*/
--]]
function QNode:scale(sx, sy)
    dbg.assertFuncVarType("number", sx)
    dbg.assertFuncVarTypes({"number", "nil"}, sy)

    sy = sy or sx -- if sy not passed in, we set it to the same as sx
    self.xScale = self.xScale * sx
    self.yScale = self.yScale * sy
end

--[[
/**
Translate a node by a specified amount.
@param dx The delta to move along the x axis.
@param dy The delta to move along the y axis.
*/
--]]
function QNode:translate(dx, dy)
    dbg.assertFuncVarTypes({"number", "number"}, dx, dy)
    self.x = self.x + dx
    self.y = self.y + dy
end


--------------------------------------------------------------------------------
-- Utility functions to allow operating on trees of nodes at once
-- and performing useful operations in onComplete callbacks with
-- tweens and timers.

--[[
/**
Cancel all timers on a node.
myNode.cancelTimers can be passed as an onComplete callback since
onComplete is automatically passed the owning node as its first and
only parameter (i.e. self).
*/
--]]
function QNode:cancelTimers()
    for k,v in pairs(self.timers) do
        v:cancel()
    end
end

--[[
/**
Cancel all timers on a node plus it's children and any descendants.
myNode.cancelTimersInTree can be passed as an onComplete callback.
*/
--]]
function QNode:cancelTimersInTree()
    self:cancelTimers()
    
    for k,child in pairs(self.children) do
        child:cancelTimersInTree()
    end
end

--[[
/**
Cancel all tweens on a node.
myNode.cancelTweens can be passed as an onComplete callback.
*/
--]]
function QNode:cancelTweens()
    --tween:cancel() causes tween to be removed from node.tweens in an ipairs loop
    --This relyies on that being true - using another pairs loop here would break.
    --FIXME: Prob should also update tween:cancel in SDK to call break once it removes a tween
    --for a tiny bit of performance (or replace cancel()'s loop with index by id or somesuch).
    while self.tweens[1] do
        tween:cancel(self.tweens[1])
    end
end

--[[
/**
Cancel all tweens on a node plus it's children and any descendants.
myNode.cancelTweensInTree can be passed as an onComplete callback.
*/
--]]
function QNode:cancelTweensInTree()
    self:cancelTweens()
    
    for k,child in pairs(self.children) do
        child:cancelTweensInTree()
    end
end


--[[
/**
Pauses timers for a node and all its descendants in the
scene-graph.
*/
--]]
function QNode:pauseTimersInTree()
    self:pauseTimers()
    for k,child in pairs(self.children) do
        child:pauseTimersInTree()
    end
end

--[[
/**
Resumes paused timers for a node and all its descendants in the
scene-graph.
*/
--]]
function QNode:resumeTimersInTree()
    self:resumeTimers()
    for k,child in pairs(self.children) do
        child:resumeTimersInTree()
    end
end


--[[
/**
Pauses tweens for a node and all its descendants in the
scene-graph.
*/
--]]
function QNode:pauseTweensInTree()
    self:pauseTweens()
    for k,child in pairs(self.children) do
        child:pauseTweensInTree()
    end
end

--[[
/**
Resumes paused timers and tweens for a node and all its descendants in the
scene-graph.
*/
--]]
function QNode:resumeTweensInTree()
    self:resumeTweens()
    for k,child in pairs(self.children) do
        child:resumeTweensInTree()
    end
end

--[[
/**
Pauses timers and tweens for a node and all its descendants in the
scene-graph.
*/
--]]
function QNode:pauseTree()
    self:pauseTimers()
    self:pauseTweens()
    for k,child in pairs(self.children) do
        child:pauseTree()
    end
end

--[[
/**
Resumes paused timers and tweens for a node and all its descendants in the
scene-graph.
*/
--]]
function QNode:resumeTree()
    self:resumeTimers()
    self:resumeTweens()
    for k,child in pairs(self.children) do
        child:resumeTree()
    end
end


--[[
/**
-- Remove the nodes from its parent, and therefore the current scene,
-- cancelling all its timers and tweens and removing from the physics
-- simulation if using physics.
-- myNode.destroy can be passed as an onComplete callback
-- You still need to manually nil any explicit handles to the node
-- before it will be garbage collected.
-- Timers are cancelled becuase otherwise they can keep running until
-- the node is garbage collected.
-- Always returns nil to match node:removeFromParent() behaviour.
-- Call myNode = myNode:destroy() to destroy and nil local references
-- in one call.
*/
--]]
function QNode:destroy()
    self:cancelTimers()
    self:cancelTweens()
    
    if self.physics then
        physics:removeNode(self)
    end
    
    return self:removeFromParent()
end

--[[
/**
-- Remove the nodes from its parent, and therefore the current scene,
-- cancelling all its timers and tweens and removing from the physics
-- simulation if using physics. Also recursively performs the same
-- operations on all children of the node.
-- myNode.destroyTree can be passed as an onComplete callback
-- You still need to manually nil any explicit handles to the node
-- before it will be garbage collected.
-- Timers are cancelled because otherwise they can keep running until
-- the node is garbage collected.
-- Returns nil to match node:removeFromParent() behaviour.
-- Call myNode = myNode:destroyTree() to destroy and nil local
-- references to myNode in one call.
-- @param preseveRoot Set this true to just remove children and 
-- keep root node. Equivalent to calling myNode:destroyChildren(),
-- however, destroyChildren can be passed as onComplete callbacks.
*/
--]]
function QNode:destroyTree(preserveRoot)
    --Note: Each eventual call to node:destroy() calls removeFromParent(), which finds
    --the node in parent's .children array and uses table.remove.
    --Here, we can't use pairs() as order is not guaranteed. Can't use
    --ipairs as behaviour is undefined after table.remove during ipairs loop.
    --So, we use a manual loop, knowing that the SDK's .remove call will collapse
    --the tree meaning we don't need to increment the index.
    local i = 1
    while self.children[i] do
        --workaround to support VirtualResolution: don't delete the scalar node
        local preserveThisNode = (self.children[i] == self.scalerRootNode)
        
        self.children[i]:destroyTree(preserveThisNode)
        if preserveThisNode then
            i = i + 1 --but we do increment if we didn't delete the node
        end
    end
    
    if not preserveRoot then
        return self:destroy()
    end
    
    --FIXME: we could probably make this more efficient by traversing the other
    --way and calling removeChild instead of node:destroy -> removeFromParent...
end

--[[
/**
-- Remove all child nodes and decendents from this one, and therefore
-- the current scene, cancelling timers and tweens and removing from the
-- physics simulation if using physics.
-- The node itself is not affected.
-- myNode.destroyChildren can be passed as an onComplete callback,
-- which is not possible if using myNode:destroyTree(true) (otherwise
-- equivalent bahaviour).
-- You still need to manually nil any explicit handles to the children
-- before they will be garbage collected.
-- Timers are cancelled because otherwise they can keep running until
-- nodes are garbage collected.
*/
--]]
function QNode:destroyChildren()
    self:destroyTree(true)
end

--[[
/**
-- Get nodes position in world/screen coordinates
*/
--]]
function QNode:getWorldPosition()
    if not self.parent then
        return 0,0
    end
    
    return self.parent:getPointInWorldSpace(self.x, self.y)
end

--[[
/**
-- Returns the position of a decendent node in this nodes coordinate
-- space. Returns nil if the node beign queried is not actually a
-- decendent of this node.
-- @param descendant The node to serach for in this nodes tree and
-- return the position of in this nodes coordinate space.
*/
--]]
function QNode:getLocalPositionOfDescendant(descendant)
    local x = descendant.x
    local y = descendant.y
    descendant = descendant.parent
    local gotSelf = false
    
    while descendant do
        x = x * descendant.xScale + descendant.x
        y = y * descendant.yScale + descendant.y
        
        if descendant == self then
            gotSelf = true
            break
        end
        
        descendant = descendant.parent
    end
    
    if gotSelf then
        return worldX, worldY
    else
        return nil
    end
end
