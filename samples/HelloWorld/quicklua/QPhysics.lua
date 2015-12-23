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
-- Physics singleton
--------------------------------------------------------------------------------
physics = quick.physics.QSim:new()

getmetatable(physics).__serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end

local oldNodePropsMTNI = getmetatable(quick.physics.QNodeProps).__newindex
NodeProps_set = function(t, name, value)
    if name == "debugDrawColor" then
        prop_setColor(t.debugDrawColor, value)
    else
        oldNodePropsMTNI(t, name, value)
    end
end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Add a node to the physics simulation, and potentially set physics properties of the node.
If the node is already part of the simulation, we simply set the physics properties.
Otherwise, we add the node to the simulation, and set any specified physics properties.
@param n The node to add to the physics simulation.
@param values Table of values to set as physics properties on the node.
*/
--]]
function physics:addNode(n, values)
    dbg.assertFuncVarType("userdata", n)
    dbg.assertFuncVarTypes({"table", "nil"}, values)

	self:_addNode(n)
	local isSensor = false
    
    -- try to infer shape from Lines node
    if n.coords and not values then
        values = {}
    end
    
    if n.coords and not values.shape and not values.radius then
        dbg.print("lines object '" .. n.name .. "' added to physics without explicit shape set: using lines.coords for shape - will have undefined behaviour if shape is convex or has < 3 or > 8 points")
        
        if n:isClosed() then
            values.shape = {select(3, unpack(n.coords))}
        else
            dbg.print("lines object '" .. n.name .. "' is not closed, but inferred physics shape will be closed")
            values.shape = n.coords
        end
    end
    
    if values then
	    table.setValuesFromTable(n.physics, values)

        -- Add shape points?
        if values.shape then
            dbg.assert(type(values.shape) == "table")
            local pointCount = table.getn(values.shape) / 2
            dbg.assert(pointCount > 2 and pointCount < 9, "physics shapes must have 3-8 points but node '" .. n.name .. "' has " .. pointCount .. " points")
            
            for i = 1,#values.shape,2 do
                n.physics:_addShapePoint(values.shape[i+0], values.shape[i+1])
            end
        end
		if(values.isSensor) then
			isSensor = true
		end
    end

    -- Initialise NodeProps
    -- Allow explicit control over assignment... see above
	if config.debug.mock_tolua == false then
		getmetatable(n.physics).__newindex = NodeProps_set
	end
--	dbg.print("physics:addNode calling C++ init...")
	n.physics:_init(isSensor)
--	dbg.print("physics:addNode calling C++ init... done")
end

--[[
/**
Remove a node from the physics simulation.
All physics properties are lost.
If the node is not currently part of the simulation, the function has no effect.
@param n The node to remove from the physics simulation.
*/
--]]
function physics:removeNode(n)
    dbg.assertFuncVarType("userdata", n)
    self:_removeNode(n) -- this destroys the NodeProps object, which removes the Body from the simulation
	n.physics = nil
end

--------------------------------------------------------------------------------
-- Joint constructors
--------------------------------------------------------------------------------
--[[
/**
Creates a distance joint that constrains the two attached bodies to maintain a costant distance through a line defined
by the two anchor points.
@param values a table containing the possible initialization values.
values = {nodeA = spriteA, nodeB = spriteB, anchorAX = spriteA.x, anchorAY = spriteA.y, anchorBX = spriteB.x, anchorBY = spriteB.y, collideConnected = false,
length = 2, 
frequency = 1, 
dampingRatio = 0.9
}
*/
--]]
function physics:createDistanceJoint(values)
end
--[[
/**
Creates a distance joint that constrains the two attached bodies to maintain a costant distance defined
by the two anchor points.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param OPTIONAL: anchorAX the x position of the first anchor point in display world coordinates
@param OPTIONAL: anchorAY the y position of the first anchor point in display world coordinates
@param OPTIONAL: anchorBX the x position of the first anchor point in display world coordinates
@param OPTIONAL: anchorBY the y position of the first anchor point in display world coordinates
@param OPTIONAL: collideConnected enables / disables collisions for the attached bodies, usually = false
*/
--]]
function physics:createDistanceJoint(nodeA, nodeB, anchorAX, anchorAY, anchorBX, anchorBY, collideConnected)
	local n = quick.physics.QJointDistance()
    QJoint:initJoint(n)
    QJointDistance:initJointDistance(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA)--nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, nodeA, nodeB)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAY)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBY)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
        n.anchorAX = anchorAX
        n.anchorAY = anchorAY
        n.anchorBX = anchorBX
        n.anchorBY = anchorBY
		n.collideConnected = collideConnected
    end

	dbg.assert(n.nodeA, " nodeA was not specified")
    dbg.assert(n.nodeB, " nodeB was not specified")

    -- Defaults
	if (not n.anchorAX or not n.anchorAY) then
		n.anchorAX = n.nodeA.x
		n.anchorAY = n.nodeA.y
	end
	if (not n.anchorBX or not n.anchorBY) then
		n.anchorBX = n.nodeB.x
		n.anchorBY = n.nodeB.y
	end
    n.collideConnected = n.collideConnected or false

    n:_init(n.nodeA, n.nodeB, n.anchorAX, n.anchorAY, n.anchorBX, n.anchorBY, n.collideConnected)
	n:_sync()
	return n
end

--[[
/**
Creates a revolute (pivot) joint that constrains the two attached bodies to rotate about a point.
@param values a table containing the acceptable values for a revolute joint. Example:
values = {nodeA = spriteA, nodeB = spriteB, absDX = spriteA.x, absDY = spriteA.y, collideConnected = false, 
motorEnabled = true,
motorSpeed = 10,
maxMotorTorque  100,
limitEnabled = false
}
*/
--]]
function physics:createPivotJoint(values)
end
--[[
/**
Creates a revolute (pivot) joint that constrains the two attached bodies to rotate about a point.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param OPTIONAL: anchorX the x position of the joint in display world coordinates
@param OPTIONAL: anchorY the y position of the joint in display world coordinates
@param OPTIONAL: collideConnected enables / disables collisions for the attached bodies, usually = false
*/
--]]
function physics:createRevoluteJoint(nodeA, nodeB, anchorX, anchorY, collideConnected)
	local n = quick.physics.QJointRevolute()
    QJoint:initJoint(n)
    QJointRevolute:initJointRevolute(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA) --nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, nodeA, nodeB)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorY)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
        n.anchorX = anchorX
        n.anchorY = anchorY
		n.collideConnected = collideConnected
    end
	dbg.assert(n.nodeA, " nodeA was not specified")
    dbg.assert(n.nodeB, " nodeB was not specified")

	-- Defaults
	if (not n.anchorX) or (not n.anchorY) then
		n.anchorX = n.nodeA.x
		n.anchorY = n.nodeA.y
	end
    n.collideConnected = n.collideConnected or false

	n:_init(n.nodeA, n.nodeB, n.anchorX, n.anchorY, n.collideConnected) --nodeA and nodeB have been stored in to_lua properties
	n:_sync()
	return n
end

--[[
/**
Calls Box2D to create a new Prismatic joint.
@param values a table containing the allowed initialization values.
Example : 
values = {nodeA = spriteA, nodeB = spriteB, anchorX = spriteA.x, anchorY = spriteA.x, localAxisX = 0, localAxisY = 1, collideConnected = true,
motorEnabled = true,
motorSpeed = 10,
limitEnabled = true
}
@return a pointer to the newly created Box2D joint
*/
--]]
function physics:createPrismaticJoint(values)
end
--[[
/**
Calls Box2D to create a new Prismatic (Piston) joint.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param OPTIONAL: anchorX the x position of the joint in display world coordinates
@param OPTIONAL: anchorY the y position of the joint in display world coordinates
@param OPTIONAL: localAxisX the joint axis x component in display coordinate in local body A space
@param OPTIONAL: localAxisY the joint axis y component in display coordinate in local body A space
@param OPTIONAL: collideConnected enables / disables collisions for the attached bodies, usually = false        
@return a pointer to the newly created Box2D joint
*/
--]]
function physics:createPrismaticJoint(nodeA, nodeB, anchorX, anchorY, localAxisX, localAxisY, collideConnected)
	local n = quick.physics.QJointPrismatic()
    QJoint:initJoint(n)
    QJointPrismatic:initJointPrismatic(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA)--nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, nodeA, nodeB)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorY)
        dbg.assertFuncVarTypes({"number", "nil"}, localAxisX)
        dbg.assertFuncVarTypes({"number", "nil"}, localAxisY)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
        n.anchorX = anchorX
        n.anchorY = anchorY
		n.localAxisX = localAxisX
		n.localAxisY = localAxisY
		n.collideConnected = collideConnected
    end
	dbg.assert(n.nodeA, " nodeA was not specified")
    dbg.assert(n.nodeB, " nodeB was not specified")

	-- Defaults
	if (not n.anchorX) or (not n.anchorY) then
		n.anchorX = n.nodeA.x
		n.anchorY = n.nodeA.y
	end
	if (not n.localAxisX) or (not n.localAxisY) then
        n.localAxisX = 0
        n.localAxisY = 1
    end
    n.collideConnected = n.collideConnected or false

	n:_init(n.nodeA, n.nodeB, n.anchorX, n.anchorY, n.localAxisX, n.localAxisY, n.collideConnected)
	n:_sync()
	return n
end

--[[
/**
Creates a friction joint that is a special kind of revolute / prismatic joint that resists motion.
It provides 2D translational and angular friction.
@param values a table containing the allowed initialization values.
@return the new joint
Example:
values = {nodeA = spriteA, nodeB = spriteB, anchorX = spriteA.x, anchorY = spriteA.y, collideConnected = false
maxForce = 10,
maxTorque = 20
}
*/
--]]
function physics:createFrictionJoint(values)
end
--[[
/**
Creates a friction joint that is a special kind of revolute / prismatic joint that resists motion.
It provides 2D translational and angular friction.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param OPTIONAL: anchorX the x position of the joint in display world coordinates
@param OPTIONAL: anchorY the y position of the joint in display world coordinates
@param OPTIONAL: collideConnected enables / disables collisions for the attached bodies, usually = false
@return the new joint
*/
--]]
function physics:createFrictionJoint(nodeA, nodeB, collideConnected)
	local n = quick.physics.QJointFriction()
    QJoint:initJoint(n)
    QJointFriction:initJointFriction(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA)--nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, nodeA, nodeB)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
		n.collideConnected = collideConnected
    end
	dbg.assert(n.nodeA, " nodeA was not specified")
    dbg.assert(n.nodeB, " nodeB was not specified")

	-- Defaults
    n.collideConnected = n.collideConnected or false

	n:_init(n.nodeA, n.nodeB, n.collideConnected) --nodeA and nodeB have been stored in to_lua properties
	n:_sync()
	return n
end

--[[
/**
Creates a wheel joint that combines a prismatic and a revolute joint.
@param values the first scene node to which this joint will be attached
Example:
values = {nodeA = spriteA, nodeB = spriteB, anchorX = spriteA.x, anchorY = spriteA.y, localAxisX = 1, localAxisY = 0, collideConnected = false, 
motorEnabled = true
motorSpeed = 50
limitEnabled = false
}
@return the new joint.
*/
--]]
function physics:createWheelJoint(values)
end
--[[
/**
Creates a wheel joint that combines a prismatic and a revolute joint.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param OPTIONAL: localAxisX the x component of the piston axis in display world coordinates
@param OPTIONAL: localAxisY the y component of the piston axis in display world coordinates
@param OPTIONAL: anchorAX the x position of the node A anchor point in display world coordinates
@param OPTIONAL: anchorAY the y position of the node A anchor point in display world coordinates
@param OPTIONAL: anchorBX the x position of the node B anchor point in display world coordinates
@param OPTIONAL: anchorBY the y position of the node B anchor point in display world coordinates
@param OPTIONAL: collideConnected enables / disables collisions for the attached bodies, usually = false
@return the new joint.
*/
--]]
function physics:createWheelJoint(nodeA, nodeB, localAxisX, localAxisY, anchorAX, anchorAY, anchorBX, anchorBY, collideConnected)
	local n = quick.physics.QJointWheel()
    QJoint:initJoint(n)
    QJointWheel:initJointWheel(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA)--nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, nodeA, nodeB)
        dbg.assertFuncVarType("number", localAxisX)
        dbg.assertFuncVarType("number", localAxisY)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAY)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBY)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
		n.localAxisX = localAxisX
		n.localAxisY = localAxisY
        n.anchorAX = anchorAX
        n.anchorAY = anchorAY
        n.anchorBX = anchorBX
        n.anchorBY = anchorBY
		n.collideConnected = collideConnected
    end
	dbg.assert(n.nodeA, "nodeA was not specified")
    dbg.assert(n.nodeB, "nodeB was not specified")

	-- Defaults
	if (not n.anchorAX) or (not n.anchorAY) then
		n.anchorAX = n.nodeA.x
		n.anchorAY = n.nodeA.y
	end
	if (not n.anchorBX) or (not n.anchorBY) then
		n.anchorBX = n.nodeB.x
		n.anchorBY = n.nodeB.y
	end
    n.collideConnected = n.collideConnected or false

	n:_init(n.nodeA, n.nodeB, n.localAxisX, n.localAxisY, n.anchorAX, n.anchorAY, n.anchorBX, n.anchorBY, n.collideConnected)
	n:_sync()
	return n
end

--[[
/**
Creates a weld joint that literaly welds the two attached body in a point.
@param values a table containing any of the possible initialization values.
Example:
values = {nodeA = spriteB, nodeB = spriteB, anchorX = spriteA.x, anchorY = spriteA.y, collideConnected = false}
@return the new joint
*/
--]]
function physics:createWeldJoint(values)
end
--[[
/**
Creates a weld joint that literaly welds the two attached body in a point.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param OPTIONAL: anchorX the x position of the joint in display world coordinates
@param OPTIONAL: anchorY the y position of the joint in display world coordinates
@param OPTIONAL: collideConnected enables / disables collisions for the attached bodies, usually = false
@return the new joint
*/
--]]
function physics:createWeldJoint(nodeA, nodeB, anchorX, anchorY, collideConnected)
	local n = quick.physics.QJointWeld()
    QJoint:initJoint(n)
    QJointWeld:initJointWeld(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA)--nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, nodeA, nodeB)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorY)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
        n.anchorX = anchorX
        n.anchorY = anchorY
		n.collideConnected = collideConnected
    end
	dbg.assert(n.nodeA, " nodeA was not specified")
    dbg.assert(n.nodeB, " nodeB was not specified")

	-- Defaults
	if (not n.anchorX) or (not n.anchorY) then
		n.anchorX = n.nodeA.x
		n.anchorY = n.nodeA.y
	end
    n.collideConnected = n.collideConnected or false

	n:_init(n.nodeA, n.nodeB, n.anchorX, n.anchorY, n.collideConnected)
	n:_sync()
	return n
end


--[[
/**
Creates a pulley joint that attaches two bodies with an imaginary rope whose length remains constant: if one body is pulled down, the other one will move up.
@param values a table containing any allowed initialization value.
Example
values = {nodeA = spriteA, nodeB = spriteB, groundAnchorAX = spriteA.x, groundAnchorAY = spriteA.y + 100,
 groundAnchorBX = spriteB.x, groundAnchorBY = spriteB.y + 100, anchorAX = spriteA.x, anchorAY = spriteA.y, 
 anchorBX = spriteB.x, anchorBY = spriteB.y, ratio = 1, collideConnected = false }
@return the new joint
*/
--]]
function physics:createPulleyJoint(values)
end
--[[
/**
Creates a pulley joint that attaches two bodies with an imaginary rope whose length remains constant: if one body is pulled down, the other one will move up.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param groundAnchorAX x position of a stationary anchor point from which the body A hangs in display world coordinates
@param groundAnchorAY y position of a stationary anchor point from which the body A hangs in display world coordinates
@param groundAnchorBX x position of a stationary anchor point from which the body A hangs in display world coordinates
@param groundAnchorBY y position of a stationary anchor point from which the body A hangs in display world coordinates
@param OPTIONAL: anchorAX x position of the anchor point on body A in display world coordinates
@param OPTIONAL: anchorAY y position of the anchor point on body A in display world coordinates
@param OPTIONAL: anchorBX x position of the anchor point on body A in display world coordinates
@param OPTIONAL: anchorBY y position of the anchor point on body A in display world coordinates
@param OPTIONAL: ratio the ratio between the speed of the two sides of the rope
@param OPTIONAL: collideConnected enables / disables collisions for the attached bodies, usually = false
@return the new joint
*/
--]]
function physics:createPulleyJoint(nodeA, nodeB, groundAnchorAX, groundAnchorAY, groundAnchorBX, groundAnchorBY, anchorAX, anchorAY, anchorBX, anchorBY, ratio, collideConnected)
	local n = quick.physics.QJointPulley()
    QJoint:initJoint(n)
    QJointPulley:initJointPulley(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA)--nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata", "number", "number", "number", "number"}, nodeA, nodeB, groundAnchorAX, groundAnchorAY, groundAnchorBX, groundAnchorBY)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAY)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBY)
        dbg.assertFuncVarTypes({"number", "nil"}, ratio)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
		n.groundAnchorAX = groundAnchorAX
		n.groundAnchorAY = groundAnchorAY
		n.groundAnchorBX = groundAnchorBX
		n.groundAnchorBY = groundAnchorBY
        n.anchorAX = anchorAX
        n.anchorAY = anchorAY
        n.anchorBX = anchorBX
        n.anchorBY = anchorBY
		n.ratio = ratio
		n.collideConnected = collideConnected
    end

	dbg.assert(n.nodeA, " nodeA was not specified")
    dbg.assert(n.nodeB, " nodeB was not specified")
	dbg.assert(n.groundAnchorAX, " groundAnchorAX was not specified")
    dbg.assert(n.groundAnchorAY, " groundAnchorAY was not specified")
    
    -- Defaults
	if(not n.anchorAX or not n.anchorAY) then
		n.anchorAX = n.nodeA.x
		n.anchorAY = n.nodeA.y
	end
	if(not n.anchorBX or not n.anchorBY) then
		n.anchorBX = n.nodeB.x
		n.anchorBY = n.nodeB.y
	end
    n.ratio = n.ratio or 1
    n.collideConnected = n.collideConnected or false
	
    --creating the physics joint
	n:_init(n.nodeA, n.nodeB, n.groundAnchorAX, n.groundAnchorAY, n.groundAnchorBX, n.groundAnchorBY, n.anchorAX, n.anchorAY, n.anchorBX, n.anchorBY, n.ratio, n.collideConnected) --nodeA and nodeB have been stored in to_lua properties
	n:_sync()
	return n
end

--[[
/**
Creates a mouse (touch) joint that attaches a body to the world through a spring.
The world is represented by a hidden default static object that is created by the physics singleton.
@param values a table containing any allowed value.
Example
values = {nodeA = spriteA, anchorX = spriteA.x, anchorY = spriteA.y,
maxForce = 1000,
frequency  = 1.0,
dampingRatio = 0.95
}
@return the new joint
*/
--]]
function physics:createTouchJoint(values)
end
--[[
/**
Creates a mouse (touch) joint that attaches a body to the world through a spring.
The world is represented by a hidden default static object that is created by the physics singleton.
@param nodeA the first scene node to which this joint will be attached
@return the new joint
*/
--]]
function physics:createTouchJoint(nodeA, dampingRatio, frequency, maxForce)
	local n = quick.physics.QJointTouch()
    QJoint:initJoint(n)
    QJointTouch:initJointTouch(n)

	if (type(nodeA) == "table" and not dampingRatio) then
        table.setValuesFromTable(n, nodeA) --nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarType("userdata", nodeA)
        dbg.assertFuncVarTypes({"number", "nil"}, dampingRatio)
        dbg.assertFuncVarTypes({"number", "nil"}, frequency)
        dbg.assertFuncVarTypes({"number", "nil"}, maxForce)

        n.nodeA = nodeA
    end

	dbg.assert(n.nodeA, " nodeA was not specified")
    
    dampingRatio = dampingRatio or 0.7
    frequency = frequency or 5
    maxForce = maxForce or 0
	
    -- Creating the physics joint
	n:_init(n.nodeA, dampingRatio, frequency, maxForce)
	n:_sync()
	return n
end


--[[
/**
///from http://www.box2d.org/manual.html
Creates a gear joint that can only connect revolute and/or prismatic joints.
Like the pulley ratio, you can specify a gear ratio. 
However, in this case the gear ratio can be negative. 
Also keep in mind that when one joint is a revolute joint (angular) and the other joint is prismatic (translation), and then the gear ratio will have units of length or one over length.
Caution:
	deleting one of the connected joints automatically deletes this joint.
/note NOTE: the jointA's bodyB and the jointB's bodyB MUST NOT be the same and MUST NOT be static
@param values a table containing any allowed initialization value.
Example
values = {jointA = pivotJointA, jointB = pivotJointB, collideConnected = false,
gearRatio = 1.0
}
@return the new joint.
*/
--]]
function physics:createGearJoint(values)
end
--[[
/**
///from http://www.box2d.org/manual.html
Creates a gear joint that can only connect revolute and/or prismatic joints.
Like the pulley ratio, you can specify a gear ratio. 
However, in this case the gear ratio can be negative. 
Also keep in mind that when one joint is a revolute joint (angular) and the other joint is prismatic (translation), and then the gear ratio will have units of length or one over length.
Caution:
	deleting one of the connected joints automatically deletes this joint.
/note NOTE: the jointA's bodyB and the jointB's bodyB MUST NOT be the same and MUST NOT be static
@param jointA the first joint to which this is connected. Note bodyB of jointA and jointB must be non static.
@param jointB the first joint to which this is connected. Note bodyB of jointA and jointB must be non static.
@param collideConnected enables / disables collisions for the attached bodies, usually = false
@return the new joint.
*/
--]]
function physics:createGearJoint(jointA, jointB, ratio)
	local n = quick.physics.QJointGear()
    QJoint:initJoint(n)
    QJointGear:initJointGear(n)

	if (type(jointA) == "table" and not jointB) then
        table.setValuesFromTable(n, jointA) -- jointA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, jointA, jointB)
        dbg.assertFuncVarTypes({"number", "nil"}, ratio)

        n.jointA = jointA
		n.jointB = jointB
		n.ratio = ratio
    end

	dbg.assert(n.jointA, "jointA was not specified")
	dbg.assert(n.jointB, "jointB was not specified")

    -- Defaults
    n.ratio = n.ratio or 1
	
    --creating the physics joint
	n:_init(n.jointA, n.jointB, ratio)
	n:_sync()
	return n
end

--[[
/**
///from http://www.box2d.org/manual.html
Creates a rope joint that restricts the maximum distance between two points. This can be useful to prevent chains of bodies from stretching, even under high load.
@param values a table containing any allowed initialization value.
Example:
values = {nodeA = spriteA, nodeB = spriteB, anchorAX = spriteA.x, anchorAY = spriteA.y, anchorBX = spriteB.x, anchorBY = spriteB.y, collideConnected = false,
maxLength = 2.0
}
@return the new joint.
*/
--]]
function physics:createRopeJoint(values)
	
end
--[[
/**
///from http://www.box2d.org/manual.html
Creates a rope joint that restricts the maximum distance between two points. This can be useful to prevent chains of bodies from stretching, even under high load.
@param nodeA the first scene node to which this joint will be attached
@param nodeB the second scene node to which this joint will be attached
@param anchorAX x position of the anchor point on body A in display world coordinates
@param anchorAY y position of the anchor point on body A in display world coordinates
@param anchorBX x position of the anchor point on body A in display world coordinates
@param anchorBY y position of the anchor point on body A in display world coordinates
@param collideConnected enables / disables collisions for the attached bodies, usually = false
@return the new joint.
*/
--]]
function physics:createRopeJoint(nodeA, nodeB, anchorAX, anchorAY, anchorBX, anchorBY, collideConnected)
	local n = quick.physics.QJointRope()
    QJoint:initJoint(n)
    QJointRope:initJointRope(n)

	if (type(nodeA) == "table" and not nodeB) then
        table.setValuesFromTable(n, nodeA)--nodeA in this case contains the table of the initialization valules
    else
        dbg.assertFuncVarTypes({"userdata", "userdata"}, nodeA, nodeB)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorAY)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBX)
        dbg.assertFuncVarTypes({"number", "nil"}, anchorBY)
        dbg.assertFuncVarTypes({"boolean", "nil"}, collideConnected)

        n.nodeA = nodeA
        n.nodeB = nodeB
        n.anchorAX = anchorAX
        n.anchorAY = anchorAY
        n.anchorBX = anchorBX
        n.anchorBY = anchorBY
		n.collideConnected = collideConnected
    end

	dbg.assert(n.nodeA, "nodeA was not specified")
    dbg.assert(n.nodeB, "nodeB was not specified")

    -- Defaults
	if(not n.anchorAX or not n.anchorAY) then
		n.anchorAX = n.nodeA.x
		n.anchorAY = n.nodeA.y
	end
	if(not n.anchorBX or not n.anchorBY) then
		n.anchorBX = n.nodeB.x
		n.anchorBY = n.nodeB.y
	end
    n.collideConnected = n.collideConnected or false

	n:_init(n.nodeA, n.nodeB, n.anchorAX, n.anchorAY, n.anchorBX, n.anchorBY, n.collideConnected) --nodeA and nodeB have been stored in to_lua properties
	n:_sync()
	return n
end

