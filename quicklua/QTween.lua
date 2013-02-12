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
-- Animations using tweening of Lua values
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick.lua.
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Tween instance
--------------------------------------------------------------------------------

QTweenInst = {}
QTweenInst.__index = QTweenInst

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
--[[
/*
Initialise the peer table for the C++ class QTween.
This must be called immediately after the QTween() constructor.
*/
--]]
--[[ UNUSED CURRENTLY
function QTween:initTween(t)
    local tp = {}
    setmetatable(tp, QTween) 
    tolua.setpeer(t, tp)
    tp.target = nil
	tp.tofrom = nil
	tp.duration = 500
	tp.starttime = 0
	tp.values = {}
	tp.tofromvalues = {}
	tp.delta = false
	tp.isComplete = false
	tp.inProgress = false
end
--]]

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
-- Namespace for functions
tween = {}

-- Tween instance class
tweeninst = inheritsFrom(baseObject)

function tweeninst:new()
    local o = tweeninst:create()
    tweeninst:init(o)
    return o
end

function tweeninst:init(o)
	o.target = nil
end

function tweeninst:update(dt)
    dbg.assertFuncVarType("number", dt)

	-- dt is delta time
	-- self.elapsedTime is time elapsed on this tween
	-- self.startTime is time that tween is supposed to start
	-- self.duration is duration of tween
	if self.isComplete == true then
		return true
	end

    -- Elapse time
    self.elapsedTime = self.elapsedTime + dt
	if self.elapsedTime < self.startTime then
        -- Tween not yet in progress (due to specified delay value)
		return false
	end

	-- Tween in progress
	local frac = (self.elapsedTime - self.startTime) / self.duration -- 0..1
	frac = math.min(frac, 1.0)

	-- Call interpolation function to map 'frac' to 'interp'
    local interp
    if self.easingValue == nil then
        interp = self.easing(frac)
    else
        interp = self.easing(frac, self.easingValue)
    end

	if (self.inProgress == false) then
		-- Tween just started
		self.inProgress = true
		if (type(self.onStart) == "function") then
			self.onStart(self.target)
		elseif (type(self.onStart) == "table") then
			self.onStart[onStart](self.target)
		end

		-- Capture tween start or end values from current values
		for i,v in pairs(self.values) do
			self.tofromvalues[i] = self.target[i]
		end
	end

	-- Update values
	for i,v in pairs(self.values) do
        -- Currently we only support tweening of number types
		dbg.assert(type(v) == "number", "Cannot tween this type")
--		dbg.assert(type(self.target[i]) == "number", "Tween target for index: ", i, " is of unsupported type: ", type(self.target[i]))
        if not (type(self.target[i]) == "number") then
            dbg.print("Tween target for index: ", i, " is of unsupported type: ", type(self.target[i]))
        else
--            dbg.print("Tween target for index: ", i, " is OK")
        end

		local val
		if (self.tofrom == "to") then
			-- Tween from self.toframevalues to self.values
			val = self.tofromvalues[i] + interp * (v - self.tofromvalues[i])
		else
			-- Tween from self.values to self.toframevalues
			val = v + interp * (self.tofromvalues[i] - v)
		end
		self.target[i] = val
	end

	if (frac >= 1) then
		-- Tween just completed
		self.isComplete = true
		if (type(self.onComplete) == "function") then
			self.onComplete(self.target)
		elseif (type(self.onComplete) == "table") then
			self.onComplete[onComplete](self.target)
		end
		return true -- remove tween from object list
	end
	return false
end

--------------------------------------------------------------------------------
-- Main public functions
--------------------------------------------------------------------------------
--[[
Returns a tween that animates properties in the display object target over time.
The final property values are specified in the params table. To customize the
tween, you can optionally specify the following non-animating properties in params

params.time specifies the duration of the transition in milliseconds. By default, the duration is 0.5 seconds.
params.transition is by default easing.linear . See Easing for more functions.
params.delay specifies the delay (none by default) before the tween begins.
params.delta is a boolean specifying whether non-control parameters are interpreted as final ending values or as changes in value. The default is nil meaning false.
params.onStart is a function or table listener called before the tween begins. Table listeners must have an onStart method. When invoked, the listener is given target instead of an event.
params.onComplete is a function or table listener called after the tween completes.
--]]
function tween:new(_target, params, tofrom)
    dbg.assertFuncVarTypes({"userdata", "table", "string"}, _target, params, tofrom)

	t = tweeninst:new()
--	t = director:createTween()
--    dbg.print("Creating QTween: ", t)
	t.target = _target
--    dbg.print("Target set: ", t.target)
	t.tofrom = tofrom
	t.duration = 0.5 -- set from "time" input
	t.elapsedTime = 0
	t.startTime = 0
	t.values = {}
	t.tofromvalues = {}
	t.delta = false
	t.isComplete = false
	t.inProgress = false
    t.easing = ease.linear  -- default interpolation function
    t.easingValue = nil     -- default is nil, so C++ function can take default C++ input

    -- Ensure target object has a tweens array
    if _target.tweens == nil then
        dbg.print("Warning: Target found with no tweens array")
        _target.tweens = {}
    end

	for i,v in pairs(params) do
		if i == "time" then
			t.duration = v
		elseif i == "easing" then
			t.easing = v
		elseif i == "easingValue" then
			t.easingValue = v
		elseif i == "delay" then
			t.startTime = v
		elseif i == "delta" then
			t.delta = v
		elseif i == "onStart" then
			-- TODO, CHECK FUNC OR TABLE AND ONSTART METHOD
			t.onStart = v
		elseif i == "onComplete" then
			-- TODO, CHECK FUNC OR TABLE AND ONCOMPLETE METHOD
			t.onComplete = v
		else
			-- Param is assumed to be a value to tween
			dbg.assert(_target[i], "Target object does not have specified interpolant")
--            dbg.print("Tween will interpolate index: ", i);
			t.values[i] = v -- add to values array
		end
	end

	-- Should we adjust all values by delta?
	if t.delta == true then
		for i,v in pairs(t.values) do
			t.values[i] = v + _target[i]
		end
	end

	-- Add to object tween list
	table.insert(_target.tweens, t)
	return t
end

function tween:to(target, params)
    dbg.assertFuncVarTypes({"userdata", "table"}, target, params)
	return tween:new(target, params, "to")
end

--[[
Similar to animate:to except the starting property values are specified in
the params table and the final values are the corresponding property values in
target prior to the call.
--]]
function tween:from(target, params)
    dbg.assertFuncVarTypes({"userdata", "table"}, target, params)
	return tween:new(target, params, "from")
end

-- Cancel a tween
function tween:cancel(t)
    dbg.assertFuncVarType("table", t)

	for i,v in ipairs(t.target.tweens) do
		if (v == t) then
			table.remove(t.target.tweens, i)
		end
	end
end

-- Dissolve between two image objects (fade one it, the other out)
function _dstOnStart(dst)
	-- Force start to alpha=0
	dst.alpha = 0
	dst.isVisible = true
end
function _srcOnComplete(src)
	-- Turn visibility off
	src.isVisible = false
end
function tween:dissolve(src, dst, duration, durationDelay)
    dbg.assertFuncVarTypes({"userdata", "userdata"}, src, dst)
    dbg.assertFuncVarTypes({"number", "nil"}, duration)
    dbg.assertFuncVarTypes({"number", "nil"}, durationDelay)

    -- Defaults   
    duration = duration or 0.5
    durationDelay = durationDelay or 0

	-- Fade dst up
	tween:to(dst, {alpha=1, time=duration, delay=durationDelay, onStart=_dstOnStart } )
	-- Fade src down
	tween:to(src, {alpha=0, time=duration, delay=durationDelay, onComplete=_srcOnComplete } )
end
