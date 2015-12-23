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

-- dbg

dbg = {}
dbg.DEBUG = config.debug.general
dbg.TYPECHECKING = config.debug.typeChecking
dbg.ASSERTDIALOGS = config.debug.assertDialogs
dbg.MAKEPRECOMPILEDLUA = config.debug.makePrecompiledLua
dbg.USEPRECOMPILEDLUA = config.debug.usePrecompiledLua
dbg.USECONCATENATEDLUA = config.debug.useConcatenatedLua

-- Print
dbg.print = function(...)
    if (dbg.DEBUG == true) then
        print(...)
    end
end

-- Simple logging
dbg.log = function(msg)
    dbg.print("QUICKLUA LOG: " .. msg)
end

-- Serialization of tolua++ metatable, e.g. for debugger
function serializeTLMT(mt, o)
    local obj = {}
    for field, func in pairs(mt[".get"] or {}) do
        obj[field] = func(o)
    end
    return obj
end

-- Assert
-- From http://lua-users.org/wiki/OptimisationCodingTips
dbg.assert = function(condition, ...)
    if dbg.DEBUG == true then
        if not condition then
            if next({...}) then
                local s,r = pcall(function (...) return(string.format(...)) end, ...)
                if s then
                    if dbg.ASSERTDIALOGS == true then
                        error(r .. "\r\n" .. dbg.getProcessedCallstack(), 2)
                    else
                        dbg.print("QUICKLUA ERROR: " .. r .. "\r\n" .. dbg.getProcessedCallstack())
                    end
                end
                return
            elseif dbg.ASSERTDIALOGS == true then -- only condition was specific
                error(dbg.getProcessedCallstack(), 2)
            else
                dbg.print("QUICKLUA ERROR: " .. dbg.getProcessedCallstack())
            end
        end
    end
end

-- Warning
dbg.warning = function(condition, ...)
    if dbg.DEBUG == true then
        if not condition then
            if next({...}) then
                local s,r = pcall(function (...) return(string.format(...)) end, ...)
                if s then
                    dbg.print("QUICKLUA WARNING: " .. r)
                end
            else
                -- Only condition was specified
                dbg.print("QUICKLUA WARNING: ")
            end
        end
    end
end

-- Get filtered Lua error string
dbg.getProcessedError = function(v)
    local a = string.find(v, ".lua:", 1, true)
    if a then
        v = "(\'" .. string.sub(v, 1, a+3) .. "\'), line " .. string.sub(v, a+5, -1)
    end
    return v
end

-- Get filtered Lua callstack
dbg.getProcessedCallstack = function()
    local cs = debug.traceback()
    local tin = {}
    for v in string.gmatch(cs, "%C+") do
        table.insert(tin, v)
    end

    if tin[1] then
        tin[1] = "Lua callstack:"
    end

    -- Process each line
    local tout = {}
    for i,v in ipairs(tin) do
        -- Ignore line?
        if string.find(v, "dbg.lua:", 1, true) or
            string.find(v, "tail call", 1, true) or
            string.find(v, "[C]:", 1, true) then
            -- Ignore this line
        else
            -- Modify line?
            local a = string.find(v, ".lua:", 1, true)
            if a then
                v = "(\'" .. string.sub(v, 1, a+3) .. "\'), line " .. string.sub(v, a+5, -1)
            end

            -- Insert line
            table.insert(tout, v)
        end
    end
    if #tout < 2 then
        return ""
    end

    -- Concatenate
    cs = table.concat(tout, "\r\n")
    return cs
end

-- Print table, with recursion, only in DEBUG mode
local printedTables = {} -- use this to forbid circular table references!
dbg.printTable = function(t, indent)
    if (dbg.DEBUG == true) then
        if indent == nil then
            indent = ""
            printedTables = {}
        end
        dbg.print(indent .. "{")
        indent = indent .. "  "
        for i,v in pairs(t) do
            if type(v) == "table" then
                dbg.print(indent .. tostring(i) .. ":")
                if table.hasValue(printedTables, v) then
                    dbg.print("Circular reference! Will not print this table.")
                else
                    table.insert(printedTables, v)
                    indent = dbg.printTable(v, indent)
                end
            elseif type(v) == "string" then
                dbg.print(indent .. tostring(i) .. ": '" .. v .. "'")
            else
                dbg.print(indent .. tostring(i) .. ": " .. tostring(v))
            end
        end

        indent = string.sub(indent, 1, string.len(indent)-2)
        dbg.print(indent .. "}")

    end
    return indent
end

-- Print value, including table recursion, only in DEBUG mode
dbg.printValue = function(t)
    if (dbg.DEBUG == true) then
        if type(t) == "table" then
            dbg.printTable(t)
        else
            dbg.print(tostring(t))
        end
    end
end

-- Asserts if the object is NOT of the specified type
-- Pass in type as string, followed by object itself (e.g. dbg.assertFuncVarType("table", node))
dbg.assertFuncVarType = function(s, u)
    if dbg.TYPECHECKING == true then
        dbg.assert(type(u)==s, "Input 1 is of type " .. type(u) .. ", expected type " .. s)
    end
end

-- Asserts if the table of type strings does not match 1:1 with the list of inputs
-- Alternatively, if the table and input list are different sizes, we assume the table of type
-- strings are all possible matches for the FIRST input only (any other inputs are not checked)
dbg.assertFuncVarTypes = function(types, ...)
    if dbg.TYPECHECKING == true then
        local ins = {}
        local inSize = select('#',...)
        for i = 1,inSize do
            ins[i] = select(i, ...)
        end
        if #ins == #types then
            -- Size of "types" array is same as ... so assume they map 1:1
            for i,v in ipairs(ins) do
                dbg.assert(type(v)==types[i], "Input '" .. i .. "' is of type " .. type(v) .. ", expected type " .. types[i])
            end
        else
            -- Check ONLY ins[1], and assume "types" is all valid types for this input
            local ts = type(ins[1])
            for i,v in ipairs(types) do
                if v==ts then return end
            end
            dbg.assert(false, "Input is of illegal type: " .. ts)
        end
    end
end

-- Returns true if the userdata passed is the specified type
dbg.isUserDataType = function(u, t)
    if dbg.TYPECHECKING == true then
        if type(u) == "userdata" and getmetatable(u) == debug.getregistry()[t] then
            return true
        else
            return false
        end
    end
end

-- Asserts if the object is NOT of the specified named tolua userdata type
-- Pass in type as string, followed by object itself (e.g. dbg.assertFuncVarType("table", node))
dbg.assertFuncUserDataType = function(s, u)
    if dbg.TYPECHECKING == true then
        if type(u) ~= "userdata" then
            dbg.assert(false, "Input is not of userdata type")
        else
            dbg.assert(dbg.isUserDataType(u, s), "Input is not of userdata type " .. s)
        end
    end
end

--------------------------------------------------------------------------------
-- table: add functions to Lua's "table"
--------------------------------------------------------------------------------
-- Check if a table has a specified index
table.hasIndex = function(t, index)
    for i,v in pairs(t) do
        if (i == index) then
            return true
        end
    end
    return false
end

-- Check if a table has a specified value
table.hasValue = function(t, value)
    for i,v in pairs(t) do
        if (v == value) then
            return true
        end
    end
    return false
end

-- Set table values from a table of setter values
-- NOTE: WE OFTEN CALL THIS WITH T=USERDATA, I.E. PASSING IN OBJECTS CREATED THROUGH TOLUA.
-- THIS IS FINE PROVIDED WE DON'T TRY TO ITERATE OVER THE OBJECT VALUES USING pairs(). SO WE CAN'T CALL FUNCTIONS LIKE table.hasIndex
table.setValuesFromTable = function(t, s)
    if s == nil then return end
    for i,v in pairs(s) do
--      dbg.assert(table.hasIndex(t, i), "Trying to set table value at missing index: ", i)
        --dbg.print("i = " ..i ..", v = " ..v)
        t[i] = v
    end
end

-- Print types of arguments
table.printArgs = function(...)
    local argt = {...}
    print("Num args: " .. table.maxn(argt))
    for i=1,table.maxn(argt) do
        print("Arg " .. i .. " is type " .. type(argt[i]))
    end
end

-- Count number of keys in table
table.numKeys = function(t)
    local k = 0
    for i,v in pairs(t) do
        k = k + 1
    end
    return k
end

--------------------------------------------------------------------------------
-- Remap "dofile" to our own version
--------------------------------------------------------------------------------
function unrequire(p)
    package.loaded[p] = nil
    _G[p] = nil
end

--[[
local _require = require
local requiredFiles = {}
require = function(p)
    local r = _require(p)
    table.insert(requiredFiles, r)
    return r
end
purgeRequiredFiles = function()
    for i,v in pairs(requiredFiles) do
        package.loaded[i] = nil
        -- TODO FIND INDEX OF I WITHIN PACKAGE.LOADED, AND DO
        -- TABLE.REMOVE
    end
    requiredFiles = {}
end
--]]

function loadLuac(file)
    local f
    quick.MainLuaLoadFile("luac://" .. file)
    f = _G['CURRENT_LOADED_FILE']
    if f == nil then
        quick.MainLuaLoadFile(file)
        f = _G['CURRENT_LOADED_FILE']
    end
    return f
end

-- THIS MUST BE THE LAST THING IN DBG.LUA
--if config.debug.general == false then -- only override dofile() for release builds. MH: Now needs to always be overriden
    if config.debug.mock_tolua == false then
      function dofile(file)
          if (string.find(file, ".lua") == nil) then
            file = file .. ".lua"
          end
          local f
          _G['CURRENT_LOADED_FILE'] = nil
          if (string.find(file, ".luac") ~= nil) then
              f = loadLuac(file)
              if f == nil then
                dbg.assert(false, "Failed to load Luac file '" .. file .."'")
                return nil
              end
              return f()
          end

          if (config.debug.makePrecompiledLua) then
              if (quick.MainLuaPrecompileFile(file) == false) then
                  dbg.assert(false, "Failed to precompile Lua file '" .. file .."'")
              end
              if (quick.isFileConcatInProgress()) then
                  -- If file was concatenated then it was not compiled separately so return nil
                  return nil
              else
                return dofile(file .. "c")
              end
          end

          if (config.debug.usePrecompiledLua == true) then
              f = loadLuac(file .. "c")
              if f ~= nil then
                return f()
              end
          end
          quick.MainLuaLoadFile(file)
          f = _G['CURRENT_LOADED_FILE']
          if f == nil then
              dbg.assert(false, "Failed to load Lua file '" .. file .."'")
              return nil
          end
          return f()
      end
      -- Dummy required when Lua file preprocessing is used
    --  function f(filename) end
    end
--end
