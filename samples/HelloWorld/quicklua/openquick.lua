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

-- Load these in the order of any dependencies
--print("Loading dbg.lua")
--dofile("quicklua/dbg.lua")
--print("")

dofile("quicklua/class.lua")
dofile("quicklua/QColor.lua")
dofile("quicklua/QTimer.lua")
dofile("quicklua/QDirector.lua")
dofile("quicklua/QFont.lua")
dofile("quicklua/QNode.lua")
dofile("quicklua/QSystem.lua")
dofile("quicklua/QLabel.lua")
dofile("quicklua/QScene.lua")
dofile("quicklua/QTween.lua")
dofile("quicklua/QEvent.lua")
dofile("quicklua/QPhysics.lua")
dofile("quicklua/Qjson.lua")

if config.debug.mock_tolua == false then
	dofile("quicklua/QLsqlite3.lua")
end

dofile("quicklua/QVector.lua")
dofile("quicklua/QLines.lua")
dofile("quicklua/QCircle.lua")
dofile("quicklua/QRectangle.lua")
dofile("quicklua/QAtlas.lua")
dofile("quicklua/QJoint.lua")
dofile("quicklua/QAnimation.lua")
dofile("quicklua/QSprite.lua")
dofile("quicklua/QAudio.lua")

dofile("quicklua/QParticles.lua")
dofile("quicklua/QTiledMap.lua")

