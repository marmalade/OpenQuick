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
if config.debug.mock_tolua == true then
	QNode = quick.QNode
else
	QNode = {}
	QNode.__index = QNode
end

-- Explicit override when setting color property, to allow for assignment
prop_setColor = function(prop, value)
    if value.r then
        -- Assume value is an existing QColor object: copy r,g,b
        prop.r = value.r
        prop.g = value.g
        prop.b = value.b
    else
        -- Assume value is a tuple, copy 1,2,3
        prop.r = value[1]
        prop.g = value[2]
        prop.b = value[3]
    end
end

local oldNodeMTNI
if config.debug.mock_tolua == true then
	oldNodeMTNI = function(t, name, value) t.name = value end
else
	oldNodeMTNI = getmetatable(quick.QNode).__newindex
end
QNode_set = function(t, name, value)
    if name == "color" then
        prop_setColor(t.color, value)
    elseif name == "strokeColor" then -- Handle fillColor here also, even though it's a property of QVector
        prop_setColor(t.strokeColor, value)
    elseif name == "debugDrawColor" then
        prop_setColor(t.debugDrawColor, value)
    else
        oldNodeMTNI(t, name, value)
    end
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
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
	if config.debug.mock_tolua == false then
		getmetatable(n).__newindex = QNode_set
	end
    -- ALWAYS set this, because it does stuff even in non-debug mode, e.g. remove node from physics
    getmetatable(n).__gc = QNode.newGC

	local np
	if not config.debug.mock_tolua == true then
		np = {}
		setmetatable(np, QNode)
		tolua.setpeer(n, np)
	else
		np = n
	end
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
    dbg.assertFuncVarType("userdata", np)

    if self.parent then
        self.parent:removeChild(self)
    end
    self.parent = np
    self:_setParent(np)
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

    self:_addChild(nc)
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
    timer = quick.QTimer:new()
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

