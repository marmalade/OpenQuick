-- From http://lua-users.org/wiki/InheritanceTutorial
-- Create a new class that inherits from a base class
-- NOTE THERE IS A MORE ADVANCED VERSION AT THE SAME URL, PROVIDING OTHER NICE OO PROPERTIES
function inheritsFrom( baseClass )
    -- Create the table and metatable representing the class.
    local new_class = {}
    local class_mt = { __index = new_class }

    -- Note that this function uses class_mt as an upvalue, so every instance
    -- of the class will share the same metatable.
    function new_class:create()
        local newinst = {}
        setmetatable( newinst, class_mt )
        return newinst
    end

    -- The following is the key to implementing inheritance:

    -- The __index member of the new class's metatable references the
    -- base class.  This implies that all methods of the base class will
    -- be exposed to the sub-class, and that the sub-class can override
    -- any of these methods.
    if baseClass then
        setmetatable( new_class, { __index = baseClass } )
    end

    return new_class
end

-- TIM: create baseClass of everything
baseClass = inheritsFrom(nil)
function baseClass:init(o)
end

-- CURRENTLY UNUSED:

-- From http://lua-users.org/wiki/SimpleLuaClasses
-- class.lua
-- Compatible with Lua 5.1 (not 5.0)

function class(base, init)
   local c = {}    -- a new class instance

   if not init and type(base) == 'function' then
      init = base
      base = nil
   elseif type(base) == 'table' then
    -- our new class is a shallow copy of the base class!
      for i,v in pairs(base) do
         c[i] = v
      end
      c._base = base
   end

   -- the class will be the metatable for all its objects,
   -- and they will look up their methods in it.
   c.__index = c

   -- expose a constructor which can be called by <classname>(<args>)
   local mt = {}
   mt.__call = function(class_tbl, ...)
   local obj = {}
   setmetatable(obj,c)

   if init then
      init(obj,...)
   else
      -- make sure that any stuff from the base class is initialized!
      if base and base.init then
      base.init(obj, ...)
      end
   end

   return obj
   end

   c.init = init
   c.is_a = function(self, klass)
      local m = getmetatable(self)
      while m do
         if m == klass then return true end
         m = m._base
      end
      return false
   end
   setmetatable(c, mt)
   return c
end
