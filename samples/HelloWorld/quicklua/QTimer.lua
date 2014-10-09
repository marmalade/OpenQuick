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
-- Timers
--------------------------------------------------------------------------------

if config.debug.mock_tolua == true then
	QTimer = quick.QTimer
else
    QTimer = {}
    QTimer.__index = QTimer
end

--------------------------------------------------------------------------------
-- Private API
--------------------------------------------------------------------------------
--[[
/*
Initialise the peer table for the C++ class QTimer.
This must be called immediately after the QTimer() constructor.
*/
--]]
function QTimer:initTimer(n, _funcortable, _period, _iterations, _delay)
    local np
	if not config.debug.mock_tolua == true then
        np = {}
        setmetatable(np, QTimer)
        tolua.setpeer(n, np)
    else
        np = n
    end

    dbg.assert(_funcortable)
    dbg.assert(_period)
    _period = _period or 1
    _iterations = _iterations or 0
    _delay = _delay or 0
    np.listener = _funcortable
    np.period = _period
    np.iterations = _iterations
    np.delay = _delay
    np.elapsed = 0
    np.doneIts = 0
    np.paused = false
end

-- Update timer, call listener callback if required, return false if timer has expired, otherwise return true
function QTimer:update(dt)
    dbg.assertFuncVarType("number", dt)

    if self.paused == true then
        return true
    end

    self.elapsed = self.elapsed + dt
    if self.elapsed >= self.period + self.delay then
        self.doneIts = self.doneIts + 1
        self.elapsed = self.elapsed - self.period

        -- Create event for this timer
        local ev = QEvent:recreate("timer", { doneIterations=self.doneIts, timer=self, target=self.target })

        -- Call listener
        handleEventWithListener(ev, self.listener)

        -- Release the reference to the timer in the event
        ev.timer = nil
    end
    if self.iterations > 0 and self.doneIts >= self.iterations then
        -- Done all iterations, so remove this timer
        return false
    end
    return true
end

-- Update a list of timers, deleting those that have expired
function QTimer:updateTimers(timers, dt)
    local remove_indicies = {}
    
    for i,v in ipairs(timers) do
        if v:update(dt) == false then
            table.insert( remove_indicies, 1, i)
        end
    end

    for i=1,#remove_indicies do
        -- Timer expired, remove it
        table.remove(timers, remove_indicies[i])
    end

end

--------------------------------------------------------------------------------
-- Public API
--------------------------------------------------------------------------------

-- Pause the timer
function QTimer:pause()
    self.paused = true
end

-- Resume the timer
function QTimer:resume()
    self.paused = false
end

-- Cancel the timer
function QTimer:cancel()
    -- Set things up so that it's deleted on next call to QTimer:update()
    self.paused = false
    self.elapsed = 0
    self.delay = 99999
    self.period = 1
    self.iterations = 1
    self.doneIts = 1
end



