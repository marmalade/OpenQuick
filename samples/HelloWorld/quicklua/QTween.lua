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

	local i, v, i2, v2

	-- dt is delta time
	-- self.elapsedTime is time elapsed on this tween
	-- self.delay is time that tween is supposed to start
	-- self.time is duration of tween
	if self.isComplete == true then
		return true
	end

    -- Elapse time, return if animation not yet started (due to 'delay')
    self.elapsedTime = self.elapsedTime + dt
	if self.elapsedTime < self.delay then
        -- Tween not yet in progress (due to specified delay value)
		return false
	end

	-- Tween in progress
	-- Calculate 'frac' value in range 0..1
	local frac = (self.elapsedTime - (self.time*self.numCycles) - self.delay) / self.time -- 0..1
	local cycled = false
	if self.mode ~= "clamp" then -- "repeat" or "mirror"
		if frac >= 1 then
			cycled = true
			frac = frac - math.floor(frac)
			self.numCycles = self.numCycles + 1 -- TODO handle big jumps
		end
	else
		frac = math.min(frac, 1.0)
	end

	-- Call interpolation function to map 'frac' to 'interp'
	-- interp also in range 0..1
    local interp
    if not self.easingValue then
        interp = self.easing(frac)
    else
        interp = self.easing(frac, self.easingValue)
    end

	if self.mode == "mirror" then
		if self.numCycles%2 ~= 0 then -- numCycles is odd
			interp = 1 - interp
		end
	end
	
	if self.inProgress == false then
		-- Tween just started
		self.inProgress = true

		-- Call 'onStart' callback?
        if self.onStart then
            local typeOnStart = type(self.onStart)
		    if typeOnStart == "function" then
			    self.onStart(self.target)
		    elseif typeOnStart == "table" or typeOnStart == "userdata" then
			    self.onStart["onStart"](self.target)
            else
                dbg.assert(false, "Tween onStart property must be of type function, table (or Quick Object); instead found type " .. typeOnStart)
		    end
        end

		-- Set up tween to/from values, depending on tween type and delta
		-- TO, no delta: from target current values (after 'delay') to PARAM values
		-- TO, with delta: from target current values (after 'delay') to same values + PARAM
		-- FROM, no delta: from PARAM values, to target current values (after 'delay')
		-- FROM, with delta: from PARAM values + target current values (after 'delay'), to target current values (after 'delay')
		if self.tofrom == "to" then
			for i,v in pairs(self.valuesTo) do
				if type(v) == "table" then
					-- to, table
					-- Note that some valuesFrom or valuesTo may become type "userdata"
					self.valuesFrom[i] = {}
					for i2,v2 in pairs(v) do
						self.valuesFrom[i][i2] = self.target[i][i2]
						if self.delta then
							self.valuesTo[i][i2] = self.target[i][i2] + self.valuesTo[i][i2]
                        end
                    end
				else
					-- to, number
					self.valuesFrom[i] = self.target[i]
					if self.delta then
						self.valuesTo[i] = self.target[i] + self.valuesTo[i]
					end
					--dbg.print("self.valuesFrom[i] - " .. i .. type(v))
				end
			end
		else
			for i,v in pairs(self.valuesFrom) do
				if type(v) == table then
					-- from, table
					-- Note that some valuesFrom or valuesTo may become type "userdata"
					self.valuesTo[i] = {}
					for i2,v2 in pairs(v) do
						self.valuesTo[i][i2] = self.target[i][i2]
						if self.delta then
							self.valuesFrom[i][i2] = self.target[i][i2] + self.valuesTo[i][i2]
						end
					end
				else
					-- to, number
					self.valuesTo[i] = self.target[i]
					if self.delta then
						self.valuesFrom[i] = self.target[i] + self.valuesTo[i]
					end
				end
			end
		end
	end

	-- Update values
	for i,v in pairs(self.valuesFrom) do
		--dbg.print("Updating index " .. i .. " of type " .. type(v))
		if type(v) ~= "number" then
			-- table
			for i2,v2 in pairs(v) do
				local val = v2 + interp * (self.valuesTo[i][i2] - v2)
				self.target[i][i2] = val
			end
		else
			-- number
			local val = v + interp * (self.valuesTo[i] - v)
			self.target[i] = val
		end
	end

	if self.mode ~= "clamp" then -- "repeat" or "mirror"
		if cycled == true then
			-- Tween just cycled
            if self.onComplete then
                local typeOnComplete = type(self.onComplete)
		        if typeOnComplete == "function" then
			        self.onComplete(self.target)
		        elseif typeOnComplete == "table" or typeOnComplete == "userdata" then
			        self.onComplete["onComplete"](self.target)
                else
                    dbg.assert(false, "Tween onComplete property must be of type function, table (or Quick Object); instead found type " .. typeOnComplete)
		        end
            end
		end
	else
		if frac >= 1 then
			-- Tween just completed
			self.isComplete = true
            if self.onComplete then
                local typeOnComplete = type(self.onComplete)
		        if typeOnComplete == "function" then
			        self.onComplete(self.target)
		        elseif typeOnComplete == "table" or typeOnComplete == "userdata" then
			        self.onComplete["onComplete"](self.target)
                else
                    dbg.assert(false, "Tween onComplete property must be of type function, table (or Quick Object); instead found type " .. typeOnComplete)
		        end
            end
			return true -- remove tween from object list
		end
	end

	-- Note: if mode is "repeat" or "mirror", tween never finishes.
	-- App must store return value from tween creation function, and call
	-- tween:cancel() or similar. Alternatively, tween is destroyed when
	-- owning object is destroyed
	return false
end

--------------------------------------------------------------------------------
-- Main public functions
--------------------------------------------------------------------------------
local tweenProps = {
	time=0.5,			-- duration of tween cycle
	delay=0,			-- delay before animation starts
	delta=false,		-- true if the specified values should be treated as deltas from current values
	mode="clamp",		-- "clamp", "repeat" or "mirror"
	easing=ease.linear,	-- interpolation function
	easingValue="nil",	-- default is nil, so C++ function can take default C++ input
	onStart="nil",		-- callback for when animation actually starts
	onComplete="nil",	-- callback for when each cycle completes
	}

-- TO, no delta: from target current values (after 'delay') to PARAM values
-- TO, with delta: from target current values (after 'delay') to same values + PARAM
-- FROM, no delta: from PARAM values, to target current values (after 'delay')
-- FROM, with delta: from PARAM values + target current values (after 'delay'), to target current values (after 'delay')

function tween:new(_target, params, tofrom)
    dbg.assertFuncVarTypes({"userdata", "table", "string"}, _target, params, tofrom)

	t = tweeninst:new()
--	t = director:createTween()
--    dbg.print("Creating QTween: ", t)
	t.target = _target		-- target object
	t.tofrom = tofrom		-- "to" or "from"

	-- Internals	
	t.elapsedTime = 0		-- total elapsed time on this tween
	t.valuesTo = {}			-- indices/values to tween TO
	t.valuesFrom = {}		-- indices/values to tween FROM
	t.isComplete = false	-- for "clamp": true only when completed
	t.inProgress = false	-- true only when startTime has elapsed
	t.numCycles = 0			-- number of completed cycles

	-- Things that can be set in the input array
	local i, v, i2, v2
	for i,v in pairs(tweenProps) do
		if params[i] then
			t[i] = params[i]	-- specified in input array
			params[i] = nil		-- remove from input array
		else
			t[i] = v			-- default value
		end
	end

	-- Special case
	for i,v in pairs(tweenProps) do
		if t[i] == "nil" then
			t[i]=nil
		end
	end

    -- Ensure target object has a tweens array
    if not _target.tweens then
        dbg.print("Warning: Target found with no tweens array")
        _target.tweens = {}
    end

	-- params is now ONLY the values to tween
	-- These can be of type number OR table, e.g. { x=10, color={r=255} )
	-- Test all values are of valid type, and that target object has
	-- matching indices
	if config.debug.general == true then
		local t
		for i,v in pairs(params) do
			t = type(v)
			dbg.assert(t=="number" or t=="table", "Tween index of '" .. tostring(i) .. "' must be number or table, but is of type " .. tostring(t))
			if t == "table" then
				for i2,v2 in pairs(v) do
					dbg.assert(_target[i][i2], "Target object does not have specified interpolant '" .. i .. "." .. i2 .. "'")
					--dbg.print("Table interpolant '" .. i .. "." .. i2 .. "'")
				end
			else
				dbg.assert(_target[i], "Target object does not have specified interpolant '" .. i .. "'")
			end
		end
	end
	if t.tofrom == "to" then
		t.valuesTo = params
	else
		t.valuesFrom = params
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
		if v == t then
			table.remove(t.target.tweens, i)
		end
	end
    t.target = nil
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

-- Accessors
-- Get the amount of time elapsed on the tween
-- This begins increasing right after the tween is created
function tween:getElapsedTime()
	return self.elapsedTime
end

-- Returns true only if the tween has started animating values, 
-- i.e. after any 'delay' has been passed
function tween:isAnimating()
	return self.inProgress
end

-- Return the number of cycles that have elapsed on the tween.
-- If mode=="clamp", this is 0 until the tween completes, then 1.
-- If mode== "mirror" or "repeat", this increases by 1 for each
-- completed cycle.
function tween:getNumCycles()
	return self.numCycles
end
