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

QParticles = {}
table.setValuesFromTable(QParticles, QNode) -- previous class in hierarchy
QParticles.__index = QParticles

-- Constants
particles = {}
particles.durationInfinity = -1
particles.startSizeEqualToEndSize = -1
particles.startRadiusEqualToEndRadius = -1
particles.modeGravity = 0
particles.modeRadial = 1    
particles.positionTypeFree = 0
particles.positionTypeRelative = 1
particles.positionTypeGrouped = 2

-- Allow setting of QParticles table types
local oldNodeMTPI = getmetatable(quick.QParticles).__newindex
QParticles_set = function(t, name, value)
    if name == "startColor" then
        prop_setColor(t.startColor, value)
    elseif name == "startColorVar" then
        prop_setColor(t.startColorVar, value)
    elseif name == "endColor" then
        prop_setColor(t.endColor, value)
    elseif name == "endColorVar" then
        prop_setColor(t.endColorVar, value)
    elseif name == "sourcePos" then
        prop_setVec2(t.sourcePos, value)
    elseif name == "sourcePosVar" then
        prop_setVec2(t.sourcePosVar, value)
    elseif name == "modeGravity" then
        table.setValuesFromTable(t.modeGravity, value)
    elseif name == "modeRadial" then
        table.setValuesFromTable(t.modeRadial, value)
    else
        oldNodeMTPI(t, name, value)
    end
end

-- Allow setting of QParticles.modeGravity vec2 members from Lua tables
local oldNodeMTPMAI = getmetatable(quick.QParticles.modeGravityStruct).__newindex
QParticlesModeGravity_set = function(t, name, value)
    if name == "gravity" then
        prop_setVec2(t.gravity, value)
    else
        oldNodeMTPMAI(t, name, value)
    end
end

QParticles.serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
    table.setValuesFromTable(obj, serializeTLMT(getmetatable(quick.QParticles), o))
	return obj
end

function QParticles:initParticles(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QParticles)
	tolua.setpeer(n, np)

    local mt = getmetatable(n) 
    mt.__serialize = QParticles.serialize

    mt.__newindex = QParticles_set
    getmetatable(n.modeGravity).__newindex = QParticlesModeGravity_set
end

function director:createParticles(i)
	local n = quick.QParticles()
	QNode:initNode(n)
	QParticles:initParticles(n)
    self:addNodeToLists(n)

    if type(i) == "string" then
        -- Input is plist file
        n:_initWithPlist(i)
    elseif type(i) == "number" then
        -- Input is total number of particles
        n:_initWithNumber(i)
    elseif type(i) == "table" then
        -- Input is initialiser table
        table.setValuesFromTable(n, i)
        n:_initWithNumber(i.totalParticles or 200)

        if i.source then
            if type(i.source) == "string" then
                -- Set atlas from filename
                n:setAtlas(director:createAtlas(i.source))
            elseif type(i.source) == "userdata" then
                -- Set atlas from QAtlas object
                n:setAtlas(i.source)
            else
                QAssert(false, "Input 'source' is of invalid type: " .. type(i.source))
            end
        end
    else
        QAssert(false, "Input is of invalid type")
    end

	return n
end

