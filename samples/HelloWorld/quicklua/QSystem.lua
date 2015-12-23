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
-- System singleton
--------------------------------------------------------------------------------
system = quick.QSystem:new()

getmetatable(system).__serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end

system.debugTime = nil -- if set, this overrides the value returned by getTime()
system.gameTime = 0
system.eventListeners = {}
system.timers = {}
system.name = "_system"
system.focus = nil

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
-- Purge everything
function system:_purge()
    system.eventListeners = {}
    system.timers = {}
    system.focus = nil
end 
   
-- Force GC
function system:_forceGC()
--    local oldStep = collectgarbage("step", 0)
--    dbg.print("Old GC step: " .. oldStep)
    collectgarbage("collect")
--    collectgarbage("step", oldStep)
end    

-- Get all children from a node recursively
function _getChildrenRecursively(node, list)
  
  if node.eventListeners.touch then
    table.insert(list, node)
  end
  
  for i = 1,#node.children do
    local child = node.children[i]
    if child.isTouchable then
        _getChildrenRecursively(child, list)
    end
  end
  
end

function handleEvent(event)
    
    local result = false
    
    -- System event? If so, don't handle first at scene object level
    if not event.system then
        -- dbg.print("handleEvent(event) but not system")

        -- Special processing for touch events:
        if event.name == "touch" then
            -- If any focus object, call this first
            local focus = system.focus
            if focus then
                event.target = focus
                if handleEventWithListeners(event, focus.eventListeners, focus) == true then
                    -- Event listener returned true, so don't propagate to other nodes OR the system object
                    event.target = nil
                    return true
                end
            end
        end
        -- Queue to handle all events at once
        queueEvent(event)
    else
        -- dbg.print("handleEvent(event) AND system")
    end
    -- Handle at the system level
	result = handleEventWithListeners(event, system.eventListeners)

	return result
end

-- Add an event to the queue to handle them once per loop.
-- Getting and sorting all scene nodes take significant
-- amount of time and not good to do it for each event.
local eventQueue = {}
function queueEvent(e) 
    -- Create copy of the event
    local copy = {}
    for k,v in pairs(e) do
        copy[k] = v
    end

    table.insert(eventQueue, copy)
end

-- Handle queued events
function handleEventQueue(scene, keepQueue)
    local focus = system.focus
    local nodes = {}

    for e, event in ipairs(eventQueue) do
        -- Special processing for touch events:
        if event.name == "touch" then

            -- Get list of ALL nodes once for the scene
            if #nodes == 0 and scene.isTouchable then
                _getChildrenRecursively(scene, nodes)
                -- Sort them by zOrder
                table.sort(nodes, function(a,b) return a.zOrder < b.zOrder end)
            end
            -- Check all nodes in order
            for i,target in ipairs(nodes) do                
                -- Hit test each node
                if target ~= focus and target:isPointInside(event.x, event.y) then
                    event.target = target
                    if handleEventWithListeners(event, target.eventListeners, target) == true then
                        event.target = nil
                        break -- Event handled, proceed for the next
                    end
                end
            end
            event.target = nil
        else
            -- Not a touch event
            scene:handleEvent(event)
        end
    end

    -- Keep the queue for the next scene or overlay
    if keepQueue == false then
        eventQueue = {}
    end
end

function handleNodeEvent(event, n)
--    dbg.print("handleNodeEvent with node: " .. n.name)
	local result = n:handleEvent(event)
	return result
end

function _addEventListener(object, nameTable, funcortable)
    if type(nameTable) ~= "table" then
        nameTable = { nameTable }
    end

    for i = 1,#nameTable do
        local name = nameTable[i]
        local el = quick.QEventListener()
        QEventListener:initEventListener(el, name, funcortable)

        -- Store the event in the listener dictionary
        if object.eventListeners[name] == nil then
            object.eventListeners[name] = {}
        end
        object.eventListeners[name][funcortable] = el
    end
end

function _removeEventListener(object, nameTable, funcortable)
    if type(nameTable) ~= "table" then
        nameTable = { nameTable }
    end

    if funcortable == nil then
        -- Clear out all handlers fo
        for i = 1,#nameTable do
            object.eventListeners[nameTable[i]] = nil
        end
    else
        -- Clear out only the specific handler
        for i = 1,#nameTable do
            local name = nameTable[i]
            if object.eventListeners[name] ~= nil then
                object.eventListeners[name][funcortable] = nil
                if next(object.eventListeners) == nil then
                    object.eventListeners[name] = nil -- for easy testing in _getChildrenRecursively 
                end
            end
        end
    end
end

--------------------------------------------------------------------------------
-- Code for re-usable object pools
-- THIS IS NOT USED IN QUICK CURRENTLY
--------------------------------------------------------------------------------

-- objectPool class
objectPool = inheritsFrom(baseObject)

function objectPool:new(poolSize, poolObject)
    local op = objectPool:create()
    objectPool:init(op, poolSize, poolObject)
    return op
end

--[[
/**
@param poolSize Number of objects in pool
@param poolObject Lua table to clone into each object in pool
@return The object pool

NOTE: THIS CURRENTLY IS SET UP ONLY FOR OBJECTS AS DUMB TABLES
*/
--]]
function objectPool:init(op, poolSize, poolObject)
    op.size = poolSize
    op.objects[poolSize] = {} -- initialise size of objects array

    -- Clone all objects in pool, from poolObject
    for i=1,poolSize do
        op.objects[i] = {}
        table.setValuesFromTable(op.objects[i], poolObject)
    end

    -- Set up stack of free references
    op.freestack[poolSize] = {} -- initialise size of freestack array
    for i=1,poolSize do
        op.freestack[i] = op.objects[i]
    end

    -- Set up index to first free element on freestack
    op.freeID = poolSize
end

function objectPool:allocObject()
    dbg.assert(self.freeID > 0, "No free objects left in objectPool")
    dbg.print("Allocating object at ID " .. self.freeID)
    local freeObj = self.freestack[self.freeID]
    self.freeID = self.freeID - 1
    return freeObj
end

function objectPool:freeObject(obj)
    self.freeID = self.freeID + 1
    dbg.print("Freeing object at ID " .. self.freeID)
    self.freestack[self.freeID] = obj
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Return the total elapsed time of the app, in seconds.
If system.debugTime is not nil, we instead return the value of system.debugTime.
@return The total elapsed time of the app, in seconds.
--]]
function system:getTime()
	if self.debugTime then
		return self.debugTime
	else
		return self.gameTime
	end
end

--[[
/**
Add a global event listener.
@param name The name of the event or a table of event names to listen for.
@param funcortable The listener: either a listener function, or a Lua table with an index named <name> that is a listener function.
*/
--]]
function system:addEventListener(name, funcortable)
    dbg.assertFuncVarTypes({"string", "table"}, name)
    dbg.assertFuncVarTypes({"function", "table", "userdata"}, funcortable)

    _addEventListener(system, name, funcortable)
end

--[[
/**
Remove a global event listener.
@param name The name of or a table of names for the associated event.
@param funcortable The listener: either a listener function, or a Lua table with an index named <name> that is a listener function.
*/
--]]
function system:removeEventListener(name, funcortable)
    dbg.assertFuncVarTypes({"string", "table"}, name)
    dbg.assertFuncVarTypes({"function", "table", "userdata"}, funcortable)

    _removeEventListener(system, name, funcortable)
end

--[[
/**
Send a global event
@param name The event name
@param paramstable A table of data to be added to the event
*/
--]]
function system:sendEvent(name, paramstable)
    dbg.assertFuncVarType("string", name)
    dbg.assertFuncVarTypes({"table", "nil"}, paramstable)

    local e = QEvent:create(name, paramstable)
    handleEvent(e)
end

--[[
/**
Sets an explicit "focus" object for touch events. If not nil, the specified object will be the first
to receive touch events, regardless of whether the event intercepts the object bounds. Events are then
propogated to other objects as usual. If nil, the default behaviour is resumed.
@param n The node to set as the "focus" object, or nil for the default behaviour.
*/
--]]
function system:setFocus(n)
	dbg.assertFuncVarTypes({"nil", "userdata"}, n)
     self.focus = n
end

--[[    
/**
Gets the explicit "focus" object for touch events.
@return The node being used as the "focus" object, or nil for the default behaviour. 
*/
--]]
function system:getFocus()
    return self.focus
end

--[[
/**
Add a global timer.
@param funcortable The listener: either a listener function, or a Lua table with an index named timer that is a listener function.
@param period The period of the timer, in seconds.
@param iterations The maximum number of times the listener will be called, or 0 to call it indefinitely. Default value is 0.
@param delay An initial delay which must elapse before we start counting down the first period. Default value is 0.
@return The timer object. This can be used to pause, resume or cancel the timer.
*/
--]]
function system:addTimer(funcortable, period, iterations, delay)
    period = period or 1
    iterations = iterations or 0
    delay = delay or 0

    dbg.assertFuncVarTypes({"function", "table", "userdata"}, funcortable)
    dbg.assertFuncVarType("number", period)
    dbg.assertFuncVarType("number", iterations)
    dbg.assertFuncVarType("number", delay)

    -- Create a listener for this timer
    local el = quick.QEventListener()
    QEventListener:initEventListener(el, "timer", funcortable)

    -- Create the timer itself
    local timer = quick.QTimer()
    QTimer:initTimer(timer, el, period, iterations, delay)
    timer.target = 0
    table.insert(system.timers, timer)

    return timer
end

--[[
/**
Get the absolute path for a file. We specify the relative path, and indicate whether the file is in the app's
local storage area (which is read-only), or the device's shared storage area (which is read/write).
@param type Must be "resources" to indicate local storage (read-only), or "storage" to indicate shared storage (read/write)
@param relPath Relative path to the file, for example "scripts/myscript.lua". If this input is nil, then an empty string
is assumed, so the return value will simply be the path to the root of the area specified by "type".
@return A string representing the full path to the file. This can be used, for example, as an input to io functions.
*/
--]]
function system:getFilePath(type, relPath)
    dbg.assertFuncVarType("string", type)
    dbg.assertFuncVarTypes({"string", "nil"}, relPath)

    relPath = relPath or ""
    if config.mock_tolua == true then
        return ""
    else
	    if type == "resources" then
    		return "rom://" .. relPath
	    elseif type == "storage" then
        	return "ram://" .. relPath
        else
            dbg.assert(nil, "Passed type of " .. type .. " to system:getFilePath. Must be 'resources' or 'storage' ")
        end
	end
    return nil
end

--[[
Get the current Quick version as a string.
This is updated manually with each formal Quick release.
--]]
function system:getVersionString()
    return quick.MainGetVersionString()
end

--------------------------------------------------------------------------------
-- Code for internal debugging
-- THIS IS NOT USED IN QUICK CURRENTLY
--------------------------------------------------------------------------------
--[[
/**
A debug helper that displays the amount of remaining memory
*/
--]]
--[[function count_all(f)
	local seen = {}
	local count_table
	count_table = function(t)
		if seen[t] then return end
		f(t)
		seen[t] = true
		for k,v in pairs(t) do
			if type(v) == "table" then
				count_table(v)
			elseif type(v) == "userdata" then
				f(v)
			end
		end
	end
	count_table(_G)
end

global_type_table = nil
function type_name(o)
	if global_type_table == nil then
		global_type_table = {}
		for k,v in pairs(_G) do
			global_type_table[v] = k
		end
		global_type_table[0] = "table"
	end
	return global_type_table[getmetatable(o) or 0] or "Unknown"
end

function type_count()
	local counts = {}
	local enumerate = function (o)
		local t = type_name(o)
		counts[t] = (counts[t] or 0) + 1
	end
	count_all(enumerate)
	return counts
end
]]
function system:dumpMemoryStats(tag)
    collectgarbage("collect")
    local marm_stat = self:_getMemoryStats()
    local lua_usage = math.modf(collectgarbage("count"))
    local lua_stat = "LUA is using "..lua_usage.."kb.  "
    dbg.print( tag.." - "..lua_stat..marm_stat);
--    local types = type_count()
--    dbg.printTable(types)
end
