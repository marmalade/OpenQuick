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
-- Default config is set up here
-- All possible config keys must be defined
--------------------------------------------------------------------------------
_config =
{
    debug =
    {
        general = true, -- Turn on general debugging
		assertDialogs = false, -- Display dialog boxes when asserting
		typeChecking = true, -- Turn on type checking by default
        traceGC = true, -- Trace info on object garbage collection

        -- LEGACY
        mock_tolua = false,
    }
}

-- Recursively set values in tt from values in tf
_initTableAndBelow = function(tf, tt)
    if type(tf) == "table" then
        for k,v in pairs(tf) do
            if tt[k] == nil then
                -- Index not present in config, so copy entire index (could be a table with children)
                tt[k] = v
            else
                -- Index present in config, so iterate through config index in case of children
                _initTableAndBelow(v, tt[k])
            end
        end
    end
end

-- Initialise the config table, based on the default _config table values, and any values already loaded into
-- a table called 'config'
initConfig = function()
    if config == nil then
        config = {}
    end

    -- Copy elements from '_config' to 'config'
    -- Must be done recursively, to handle embedded tables
    _initTableAndBelow(_config, config)

    -- If config.debug.general = false, then ALL other debug settings should be false
    if config.debug.general == false then
        for i,v in ipairs(config.debug) do
            config.debug[i] = false
        end
    end
end
