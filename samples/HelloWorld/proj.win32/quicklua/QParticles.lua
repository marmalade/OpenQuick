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
particles.modeRadius = 1    
particles.positionTypeFree = 0
particles.positionTypeRelative = 1
particles.positionTypeGrouped = 2

function QParticles:initParticles(n)
	local np = {}
    local ep = tolua.getpeer(n)
    table.setValuesFromTable(np, ep)
	setmetatable(np, QParticles)
	tolua.setpeer(n, np)
end

function director:createParticles()
	local n = quick.QParticles()
	QNode:initNode(n)
	QParticles:initParticles(n)
    self:addNodeToLists(n)
	return n
end

