--[[
Example: Touch Events

Demonstrates how touch events are received by objects that intersect the
touch coordinate.
--]]

local numSprites = 50
local sprites={}
local dw = director.displayWidth
local dh = director.displayHeight

-- Sprite touch event listener: give random velocity
local spriteTouch = function(event)
    if event.phase == "ended" then
        event.target.vx = math.random(20) - 10
        event.target.vy = math.random(20) - 10
    end
end

-- Create 50 sprites at random positions and scales
for i=1,numSprites do
    local sprite = director:createSprite( {
        x=math.random(dw),
        y=math.random(dh),
        source="textures/crate.png",
        xScale=0.5 + math.random(100)/100,
        yScale=0.5 + math.random(100)/100,
        alpha=0.5 + math.random(50)/100,
        } )
    sprite.vx = 0; sprite.vy = 0
    sprite:addEventListener("touch", spriteTouch)
    sprites[i] = sprite
end

-- Update event listener: apply friction to sprites velocities
local updateFunc = function(event)
    for i=1,numSprites do
        sprite = sprites[i]
        sprite.x = sprite.x + sprite.vx
        sprite.y = sprite.y + sprite.vy
        sprite.vx = sprite.vx * 3/4
        sprite.vy = sprite.vy * 3/4
    end
end
system:addEventListener("update", updateFunc)

