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
-- Joints
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua.
--------------------------------------------------------------------------------

-- TODO: MOVE THIS ELSEWHERE AND USE MORE WIDELY
function initClassWithParent(n, cn)
	local np
	if not config.debug.mock_tolua == true then
	    local np = {}
        local ep = tolua.getpeer(n)
        table.setValuesFromTable(np, ep)
	    setmetatable(np, cn)
	    tolua.setpeer(n, np)
	else
		np = n
	end

end

--------------------------------------------------------------------------------
-- QJoint
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJoint = quick.physics.QJoint
else
	QJoint = {}
	QJoint.__index = QJoint
end

-- Override QNode GC function (still call old one at the end)
QJoint.oldGC = getmetatable(quick.physics.QJoint).__gc
QJoint.newGC = function(n)
    if n.name then
        dbg.print("GC on joint: " .. n.name)
    else
        dbg.print("GC on joint: (unnamed)")
    end
    QJoint.oldGC(n)
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
QJoint.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end

--[[
/*
Initialise the peer table for the C++ class QJoint.
This must be called immediately after the QJoint() constructor.
*/
--]]
function QJoint:initJoint(n)
	local np = {}
	setmetatable(np, QJoint)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    -- TODO, SUPPORT __SERIALIZE FOR JOINTS
--    mt.__serialize = QJoint.serialize
    if config.debug.traceGC == true then
        mt.__gc = QJoint.newGC
    end
end

--------------------------------------------------------------------------------
-- QJointDistance
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointDistance = quick.physics.QJointDistance
else
	QJointDistance = {}
    table.setValuesFromTable(QJointDistance, QJoint) -- previous class in hierarchy
	QJointDistance.__index = QJointDistance
end

--[[
/*
Initialise the peer table for the C++ class QJointDistance.
This must be called immediately after the QJointDistance() constructor.
*/
--]]
function QJointDistance:initJointDistance(n)
    initClassWithParent(n, QJointDistance)
end

--------------------------------------------------------------------------------
-- QJointRevolute (pivot)
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointRevolute = quick.physics.QJointRevolute
else
	QJointRevolute = {}
    table.setValuesFromTable(QJointRevolute, QJoint) -- previous class in hierarchy
	QJointRevolute.__index = QJointRevolute
end

--[[
/*
Initialise the peer table for the C++ class QJointRevolute.
This must be called immediately after the QJointRevolute() constructor.
*/
--]]
function QJointRevolute:initJointRevolute(n)
    initClassWithParent(n, QJointRevolute)
end

--------------------------------------------------------------------------------
-- QJointPrismatic (piston)
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointPrismatic = quick.physics.QJointPrismatic
else
	QJointPrismatic = {}
    table.setValuesFromTable(QJointPrismatic, QJoint) -- previous class in hierarchy
	QJointPrismatic.__index = QJointPrismatic
end

--[[
/*
Initialise the peer table for the C++ class QJointPrismatic.
This must be called immediately after the QJointPrismatic() constructor.
*/
--]]
function QJointPrismatic:initJointPrismatic(n)
    initClassWithParent(n, QJointPrismatic)
end

--------------------------------------------------------------------------------
-- QJointFriction
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointFriction = quick.physics.QJointFriction
else
	QJointFriction = {}
    table.setValuesFromTable(QJointFriction, QJoint) -- previous class in hierarchy
	QJointFriction.__index = QJointFriction
end

--[[
/*
Initialise the peer table for the C++ class QJointFriction.
This must be called immediately after the QJointFriction() constructor.
*/
--]]
function QJointFriction:initJointFriction(n)
    initClassWithParent(n, QJointFriction)
end

--------------------------------------------------------------------------------
-- QJointWheel
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointWheel = quick.physics.QJointWheel
else
	QJointWheel = {}
    table.setValuesFromTable(QJointWheel, QJoint) -- previous class in hierarchy
	QJointWheel.__index = QJointWheel
end

--[[
/*
Initialise the peer table for the C++ class QJointWheel.
This must be called immediately after the QJointWheel() constructor.
*/
--]]
function QJointWheel:initJointWheel(n)
    initClassWithParent(n, QJointWheel)
end

--------------------------------------------------------------------------------
-- QJointWeld
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointWeld = quick.physics.QJointWeld
else
	QJointWeld = {}
    table.setValuesFromTable(QJointWeld, QJoint) -- previous class in hierarchy
	QJointWeld.__index = QJointWeld
end

--[[
/*
Initialise the peer table for the C++ class QJointWeld.
This must be called immediately after the QJointWeld() constructor.
*/
--]]
function QJointWeld:initJointWeld(n)
    initClassWithParent(n, QJointWeld)
end

--------------------------------------------------------------------------------
-- QJointPulley
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointPulley = quick.physics.QJointPulley
else
	QJointPulley = {}
    table.setValuesFromTable(QJointPulley, QJoint) -- previous class in hierarchy
	QJointPulley.__index = QJointPulley
end

--[[
/*
Initialise the peer table for the C++ class QJointPulley.
This must be called immediately after the QJointPulley() constructor.
*/
--]]
function QJointPulley:initJointPulley(n)
    initClassWithParent(n, QJointPulley)
end

--------------------------------------------------------------------------------
-- QJointTouch
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointTouch = quick.physics.QJointTouch
else
	QJointTouch = {}
    table.setValuesFromTable(QJointTouch, QJoint) -- previous class in hierarchy
	QJointTouch.__index = QJointTouch
end

--[[
/*
Initialise the peer table for the C++ class QJointTouch.
This must be called immediately after the QJointTouch() constructor.
*/
--]]
function QJointTouch:initJointTouch(n)
    initClassWithParent(n, QJointTouch)
end

--------------------------------------------------------------------------------
-- QJointGear
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointGear = quick.physics.QJointGear
else
	QJointGear = {}
    table.setValuesFromTable(QJointGear, QJoint) -- previous class in hierarchy
	QJointGear.__index = QJointGear
end

--[[
/*
Initialise the peer table for the C++ class QJointGear.
This must be called immediately after the QJointGear() constructor.
*/
--]]
function QJointGear:initJointGear(n)
    initClassWithParent(n, QJointGear)
end

--------------------------------------------------------------------------------
-- QJointRope
--------------------------------------------------------------------------------
if config.debug.mock_tolua == true then
	QJointRope = quick.physics.QJointRope
else
	QJointRope = {}
    table.setValuesFromTable(QJointRope, QJoint) -- previous class in hierarchy
	QJointRope.__index = QJointRope
end

--[[
/*
Initialise the peer table for the C++ class QJointRope.
This must be called immediately after the QJointRope() constructor.
*/
--]]
function QJointRope:initJointRope(n)
    initClassWithParent(n, QJointRope)
end
