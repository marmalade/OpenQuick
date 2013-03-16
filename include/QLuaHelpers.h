/*
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
 */

//------------------------------------------------------------------------------
/*!
	\file QLuaHelpers.h
	\brief Lua helper defines and functions
*/
//------------------------------------------------------------------------------

#ifndef __Q_LUA_HELPERS_H
#define __Q_LUA_HELPERS_H

// Include Lua headers
#ifdef __cplusplus
   extern "C" {  
#endif
// Lua 5.1.1 can be happily built as straight C++
// BUT TIM IS USING AN OLDER VERSION, HENCE THE NEED FOR EXTERN C
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

#ifdef __cplusplus
}
#endif

//#include "IwDebug.h" // TODO REPLACE
#include "QDefines.h"
#include "QSystem.h"
#include "tolua++.h"

QUICK_NAMESPACE_BEGIN;

// Our global Lua state object
extern lua_State* g_L;

// Initialise/terminate Lua
void	QLuaInit();
void	QLuaTerminate();

// Callback function to handle lua errors.
int		QLuaErrorHandler(lua_State* L);

// Callback function to handle lua errors. Defaults to QLuaErrorHandler
extern int (*g_LuaErrorHandler)(lua_State* L);

// Register C function with Lua
#define LUA_REG_FN(a) lua_register(g_L, #a, a);

// Report errors from Lua state
void LUA_REPORT_ERRORS(lua_State *L, int status);

// Assert Lua stack entry is of specified type
#define LUA_ASSERT_STACK_TYPE(L, i, t) do { \
    if (lua_type(L, i) != LUA_T##t) { \
      char msg[cocos2d::kMaxLogLen + 1]; \
      snprintf(msg, cocos2d::kMaxLogLen, "Lua stack index %d is of type %s, expected type %s", i, lua_typename(L, lua_type(L, i)), lua_typename(L, LUA_T##t)); \
      QAssert(lua_type(L, i) == LUA_T##t, msg); \
    } \
  } while (0)

// Assert Lua stack size
#define LUA_ASSERT_STACK_SIZE(L, s) \
	QAssert(lua_gettop(L) == s, "Lua stack size is %d, expected %d", lua_gettop(L), s)

// Empty Lua stack
#define LUA_RESET_STACK(L) \
	lua_settop(L, 0)

// Assume table at top of stack: get named table field as bool (and assert type)
inline bool LUA_GET_STACK_TABLE_FIELD_AS_BOOL(lua_State* L, const char* f)
{
	LUA_ASSERT_STACK_TYPE(L, -1, TABLE);
    lua_getfield(L, -1, f);
	LUA_ASSERT_STACK_TYPE(L, -1, BOOLEAN);
    bool r = (lua_toboolean(L, -1) != 0);
    lua_pop(L, 1);
	return r;
}

// Assume table at top of stack: set named table field as bool
inline void LUA_SET_STACK_TABLE_FIELD_AS_BOOL(lua_State* L, const char* f, bool i)
{
	LUA_ASSERT_STACK_TYPE(L, -1, TABLE);
    lua_pushboolean(g_L, i);
    lua_setfield(g_L, -2, f);
}

// Assume table at top of stack (or specified index): get named table field as int (and assert type)
inline int LUA_GET_STACK_TABLE_FIELD_AS_INT(lua_State* L, const char* f, int tableindex = -1)
{
	LUA_ASSERT_STACK_TYPE(L, tableindex, TABLE);
    lua_getfield(L, tableindex, f);
	LUA_ASSERT_STACK_TYPE(L, -1, NUMBER);
    int r = (int)lua_tonumber(L, -1);
    lua_pop(L, 1);
	return r;
}

// Assume table at top of stack: set named table field as int
inline void LUA_SET_STACK_TABLE_FIELD_AS_INT(lua_State* L, const char* f, int i)
{
	LUA_ASSERT_STACK_TYPE(L, -1, TABLE);
    lua_pushnumber(g_L, i);
    lua_setfield(g_L, -2, f);
}

// Assume table at top of stack: get named table field as float (and assert type)
inline float LUA_GET_STACK_TABLE_FIELD_AS_FLOAT(lua_State* L, const char* f, int tableindex = -1)
{
	LUA_ASSERT_STACK_TYPE(L, tableindex, TABLE);
    lua_getfield(L, tableindex, f);
	LUA_ASSERT_STACK_TYPE(L, -1, NUMBER);
    float r = (float)lua_tonumber(L, -1);
    lua_pop(L, 1);
	return r;
}

// Assume table at top of stack: set named table field as float
inline void LUA_SET_STACK_TABLE_FIELD_AS_FLOAT(lua_State* L, const char* f, float i)
{
	LUA_ASSERT_STACK_TYPE(L, -1, TABLE);
    lua_pushnumber(g_L, i);
    lua_setfield(g_L, -2, f);
}

// Assume table at top of stack: get named table field as string (and assert type)
inline const char* LUA_GET_STACK_TABLE_FIELD_AS_STRING(lua_State* L, const char* f)
{
	LUA_ASSERT_STACK_TYPE(L, -1, TABLE);
    lua_getfield(L, -1, f);
	LUA_ASSERT_STACK_TYPE(L, -1, STRING);
    const char* r = lua_tostring(L, -1);
    lua_pop(L, 1);
	return r;
}

// Assume table at top of stack: set named table field as string
inline void LUA_SET_STACK_TABLE_FIELD_AS_STRING(lua_State* L, const char* f, const char* s)
{
	LUA_ASSERT_STACK_TYPE(L, -1, TABLE);
    lua_pushstring(g_L, s);
    lua_setfield(g_L, -2, f);
}

// Assume table at top of stack: get named table field as userdata (and assert type)
inline void* LUA_GET_STACK_TABLE_FIELD_AS_USERDATA(lua_State* L, const char* f, int tableindex = -1)
{
	LUA_ASSERT_STACK_TYPE(L, tableindex, TABLE);
    lua_getfield(L, tableindex, f);
	LUA_ASSERT_STACK_TYPE(L, -1, USERDATA);
    void* u = lua_touserdata(L, -1);
    lua_pop(L, 1);
	return u;
}

// After calling this function, Lua stack is:
// 1 "Event"
// 2 <result of call to Event.new()>
inline void LUA_EVENT_PREPARE(const char* name)
{
    lua_getfield(g_L, LUA_GLOBALSINDEX, "QEvent");
	lua_getfield(g_L, -1, "create");
	lua_call(g_L, 0, 1);
    lua_pushstring(g_L, name);
    lua_setfield(g_L, -2, "name");
	lua_pushnumber(g_L, (double)g_QSystem->gameTime * 1000);
    lua_setfield(g_L, -2, "time");
}
inline void LUA_EVENT_REUSE(const char* name)
{
    lua_getfield(g_L, LUA_GLOBALSINDEX, "QEvent");
 	lua_getfield(g_L, -1, "recreate");              // stack: QEvent, QEvent:recreate
 	lua_remove(g_L, -2);							// stack: QEvent:recreate(self)
    lua_getfield(g_L, LUA_GLOBALSINDEX, "QEvent");  // stack: QEvent:recreate(self)
    lua_pushstring(g_L, name);                      // stack: QEvent:recreate(self, name)
    LUA_REPORT_ERRORS(g_L, lua_pcall(g_L, 2, 1, 0));
}

// Set Lua event object to the handleEvent() function
inline void LUA_EVENT_SEND()
{
#if 0
	lua_pushcfunction(g_L, g_LuaErrorHandler);
	lua_getfield(g_L, LUA_GLOBALSINDEX, "handleEvent");
	lua_pushvalue(g_L, -3);
	lua_pcall(g_L, 1, 0, -3);
    lua_pop(g_L, 3);
#else
	lua_getfield(g_L, LUA_GLOBALSINDEX, "handleEvent");
//	lua_getfield(g_L, LUA_GLOBALSINDEX, "queueEvent"); 
	lua_pushvalue(g_L, -2);
 	lua_remove(g_L, -3); // Remove event object
    LUA_REPORT_ERRORS(g_L, lua_pcall(g_L, 1, 0, 0));
#endif
}

// Assume Event object on stack: set named number value
inline void LUA_EVENT_SET_NUMBER(const char* name, lua_Number value)
{
	lua_pushnumber(g_L, value);
    lua_setfield(g_L, -2, name);
}

// Assume Event object on stack: set named integer value
inline void LUA_EVENT_SET_INTEGER(const char* name, lua_Integer value)
{
	lua_pushinteger(g_L, value);
    lua_setfield(g_L, -2, name);
}

// Assume Event object on stack: set named string value
inline void LUA_EVENT_SET_STRING(const char* name, const char* value)
{
	lua_pushstring(g_L, value);
    lua_setfield(g_L, -2, name);
}

// Assume Event object on stack: set named boolean value
inline void LUA_EVENT_SET_BOOLEAN(const char* name, bool value)
{
	lua_pushboolean(g_L, value);
    lua_setfield(g_L, -2, name);
}

// Assume Event object on stack: set tolua userdata (C++ pointer)
inline void LUA_EVENT_SET_TOLUA_PTR(const char* name, void* ptr, const char* value)
{
    tolua_pushusertype(g_L, ptr, value);
    lua_setfield(g_L, -2, name);
}

QUICK_NAMESPACE_END;

#endif // __Q_LUA_HELPERS_H

