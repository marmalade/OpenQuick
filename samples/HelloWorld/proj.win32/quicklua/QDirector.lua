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
-- Director singleton
--------------------------------------------------------------------------------
director = quick.QDirector:new()

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
-- Update display info
function directorUpdateDisplayInfo(dw, dh)
    dbg.assertFuncVarTypes({"number", "number"}, dw, dh)
    director:_updateDisplayInfo(dw, dh)
end

-- Purge everything
function director:_purge()
    -- Replacing the global scene will force the old one to be GC'd
    director.globalScene = director:createScene({name="globalScene"})
    collectgarbage("collect")
    collectgarbage("collect")
end

-- Overall update
--Recursions for director:update() below
function director:_updateNodeAndChildren(n, dt, alphaMul, strokeAlphaMul)
    dbg.assertFuncVarType("userdata", n)
    dbg.assertFuncVarType("number", dt)

    -- Update node tweens
    if n._tweensPaused == false then
        n:updateTweens(dt * n._tweensTimeScale)
    end

    -- Update node timers
    if n._timersPaused == false then
        QTimer:updateTimers(n.timers, dt * n._timersTimeScale)
    end

    n._alphaInternal = n.alpha * alphaMul
    if director.isAlphaInherited == true then
           alphaMul = alphaMul * n.alpha
    end
    if n._strokeAlphaInternal then
        n._strokeAlphaInternal = n.strokeAlpha * strokeAlphaMul
        if director.isAlphaInherited == true then
            strokeAlphaMul = strokeAlphaMul * n.strokeAlpha
        end
    end

    -- Update children
    for i,v in ipairs(n.children) do
        self:_updateNodeAndChildren(v, dt, alphaMul, strokeAlphaMul)
    end
end

function director:_syncNodeAndChildren(n, dt)
    dbg.assertFuncVarType("userdata", n)
    dbg.assertFuncVarType("number", dt)

    -- Sync
    n:sync()

    -- Sync children
    for i,v in ipairs(n.children) do
        self:_syncNodeAndChildren(v, dt)
    end
end

-- Called from QSystemObject::Update()
function director:update()
    -- Update global timers
    if system._timersPaused == false then
        QTimer:updateTimers(system.timers, system.deltaTime * system._timersTimeScale)
    end

    -- Update scene graph (but don't sync)
    local s = director:getCurrentScene()
    director:_updateNodeAndChildren(s, system.deltaTime, 1, 1)

    -- Sync scene graph
    director:_syncNodeAndChildren(s, system.deltaTime)

    -- Process instant scene changes without event locks getting in the way of
    -- the tearDown process
    director:_processInstantSceneChange()

end

-- Destroy any objects pending destruction
--[[ This is now depreciated because of the new object lifecycle code
function director:Purge()
    for i,v in ipairs(self.destroyList) do
        v:delete() -- calls QNode::~QNode(), or derived destructor
    end
    self.destroyList = {}

end
]]


--[[
/*
Create a tween object. We use a factory method to create these, so we can ensure that
QTween:initTween is called, which sets up the Lua peer table for the C++ userdata object.
@return A tween object.
*/
--]]
function director:createTween()
    local t = quick.QTween()
    QTween:initTween(t)
    return t
end

-- Called to complete a scene transition
function director:_transitionComplete()
--    dbg.print("director:_transitionComplete")
    if self._outgoingScene ~= nil then
        -- Send events to current scene
--        dbg.print("exitPostTransition")
        local exitPostTransitionEvent = QEvent:create("exitPostTransition")
        self._outgoingScene:handleEvent(exitPostTransitionEvent)

        if self._outgoingScene.isSetUp == true then
--            dbg.print("tearDown")
            local tearDownEvent = QEvent:create("tearDown", { nopropagation = true })
            self._outgoingScene:handleEvent(tearDownEvent)
            self._outgoingScene.isSetUp = false
        end

        self._outgoingScene = nil
    end

    self:setCurrentScene( self._incomingScene)

    -- Perform a bit of GC so we can load the new scene
	collectgarbage("collect")
    self:cleanupTextures()

    if self._incomingScene ~= nil then
        -- Send events to new scene
        local enterPostTransitionEvent = QEvent:create("enterPostTransition", { nopropagation = true })
        self._incomingScene:handleEvent(enterPostTransitionEvent)

        self._incomingScene = nil
    end

end

function director:setCurrentScene(scene)
--    dbg.print("director:setCurrentScene")
    -- nil will set the global scene
    if scene == nil then
        scene = director.globalScene
--        dbg.print("director.globalScene is " .. scene or "nil")
    end
    dbg.assertFuncUserDataType("quick::QScene", scene)

    -- Store the LUA reference to the current scene
    self.currentScene = scene

    -- Pass it down to the CPP code as well (as this dosn't count as a LUA reference)
    self._currentScene = scene
end

-- Processing of instant scene changes
function director:_processInstantSceneChange()

    if self._newScene ~= nil then
        
        -- Tear down the old scene
        if self.currentScene.isSetUp == true then
            local tearDownEvent = QEvent:create("tearDown", { nopropagation = true })
            self.currentScene:handleEvent(tearDownEvent)
            self.currentScene.isSetUp = false
        end

        -- Flip to the new scene
        self:setCurrentScene( self._newScene)

        -- Perform a bit of GC so we can load the new scene
		collectgarbage("collect")
        self:cleanupTextures()

        if self._newScene.isSetUp == false then
--            dbg.print("Performing new scene setup on scene: " .. self._newScene.name)

            local setUpEvent = QEvent:create("setUp", { nopropagation = true })
            self._newScene:handleEvent(setUpEvent)
            self._newScene.isSetUp = true
        end

        -- Clear the new scene pointer
        self._newScene = nil
    end

end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------
--[[
/**
Gets the currently active scene
*/
--]]
function director:getCurrentScene()
    -- Get the current scene from LUA side
    return self.currentScene
end

--[[
/**
Remove a node from its scene.
@param n The node to remove.
*/
--]]
function director:removeNode(n)
    dbg.assertFuncVarType("userdata", n)
    n:setParent(nil)
end

function director:addNodeToLists(n)
    dbg.assertFuncVarType("userdata", n)
    if self.addNodesToScene == true then
        local sc = self:getCurrentScene()
        dbg.assert(sc, "No current scene")
        sc:addChild(n)
    end
end

--[[
/**
Set the default color for newly created nodes.
@param r The red component of the color.
@param g The green component of the color.
@param b The blue component of the color.
*/
--]]
function director:setNodesColor(r, g, b, a)
    dbg.assertFuncVarTypes({"number", "number", "number", "number"}, r, g, b, a)
    self.nodesColor.r = r or 255
    self.nodesColor.g = g or 255
    self.nodesColor.b = b or 255
    self.nodesColor.a = a or 255
end


--------------------------------------------------------------------------------
-- Public API - factory functions
--------------------------------------------------------------------------------
-- THESE HAVE NOW BEEN MOVED TO THE RESPECTIVE OBJECT FILES
-- E.G. director:createNode() is defined in QNode.lua

--[[
/**
Create a bounding box object, from x and y bounds.
@param xMin Local minimum x value.
@param xMax Local maximum x value.
@param yMin Local minimum y value.
@param yMax Local maximum y value.
@return The created bounding box object.
*/
--]]
function director:createBBox(_xMin, _xMax, _yMin, _yMax)
    dbg.assertFuncVarTypes({"number", "number", "number", "number"}, _xMin, _xMax, _yMin, _yMax)
    local bb = {xMin=_xMin, xMax=_xMax, yMin=_yMin, yMax=_yMax}
    return bb
end

----------------------------------
-- Scenes
----------------------------------
-- PRIVATE:
-- Create default scene. Use of global variable ensures Lua doesn't GC it.
-- Doesn't use createScene because of extra parameters
function director:createDefaultScene()
--    dbg.print("director:createDefaultScene")
    local n = quick.QScene()
    QNode:initNode(n)
    QScene:initScene(n)
    n:_init(true)
    n.name = "globalScene"
    self:setCurrentScene(n)

    -- Store in globalScene variable, if it's nil
    if not self.globalScene then
        self.globalScene = n
    end

    -- Return globalScene object
    return n
end

--[[
/**
Move to a new scene.
Throws the following events:
<new scene> - setUp (only if the new scene is not already set up)
<new scene> - enterPreTransition
<current scene> - exitPreTransition

@param newScene The new Scene object to move to
@param options A table of options, e.g. "transition", "time"
*/
--]]
function director:moveToScene(newScene, options)
    -- Check if we are moving to the default scene
    if newScene == nil then
--        dbg.print("moveToScene(nil)")
        newScene = self.globalScene
    end

    dbg.assertFuncUserDataType("quick::QScene", newScene)
    dbg.assertFuncVarTypes({"table", "nil"}, options)

    -- If this is the same as the current scene, then bail at this point
    local oldScene = self.currentScene
    if newScene == oldScene then
        dbg.print("Already in target scene")
        return
    end
 
    -- Set details of transition
    self._transitionScene = newScene
    self._transitionTime = 0
    self._transitionType = ""

    if options ~= nil then
        -- get transition information
        self._transitionTime = options.transitionTime or 0
        self._transitionType = options.transitionType or ""
    end

    if self._transitionType ~= "" then
        -- this is a timed transition
--        dbg.print("Timed transition to " .. newScene.name)

        -- Send events to new scene
        -- NOTE: We temporarily set director.currentScene to this scene, so that the setUp function
        -- can assume newly created objects will get added to this scene
        self.currentScene = newScene
        if newScene.isSetUp == false then
            local setUpEvent = QEvent:create("setUp", { nopropagation = true })
            newScene:handleEvent(setUpEvent)
            newScene.isSetUp = true
        end
        local enterPreTransitionEvent = QEvent:create("enterPreTransition", { nopropagation = true })
        newScene:handleEvent(enterPreTransitionEvent)
        self.currentScene = oldScene

        -- Once we've called enterPreTransition on the new scene, we should sync() that scene graph once
        -- so that stuff is in the right place as it's getting transitioned in. We pass a deltaTime of 0
        self:_updateNodeAndChildren(newScene, 0, 1, 1)
        self:_syncNodeAndChildren(newScene, 0)

        -- Send events to current scene
        local exitPreTransitionEvent = QEvent:create("exitPreTransition", { nopropagation = true })
        oldScene:handleEvent(exitPreTransitionEvent)

        -- LUA side storage for usage in _transitionComplete
        self._outgoingScene = oldScene
        self._incomingScene = newScene

    else
        -- this is actually an instant transition
--        dbg.print("Instant transition to " .. newScene.name)

        -- no need to actually do a transition
        self._transitionScene = nil

        -- Queue up a scene change for next update
        self._newScene = newScene

    end
end
