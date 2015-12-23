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

// ---- Get/set next value in a table ----
    
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
    lua_pushboolean(L, i);
    lua_setfield(L, -2, f);
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
    lua_pushnumber(L, i);
    lua_setfield(L, -2, f);
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
    lua_pushnumber(L, i);
    lua_setfield(L, -2, f);
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
    lua_pushstring(L, s);
    lua_setfield(L, -2, f);
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

// ---- Generating Lua Events ----
// These can be used in C callbacks to create an queue lua events

// After calling this function, Lua stack is:
// 1 "Event"
// 2 <result of call to Event.new()>
//
// name is the name of the event that the Lua app will be registering for
// e.g. "orientation", "touch", "myCustomEvents" etc.
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

// ---- Adding name-value pairs to the an event

// Will be added to last event created with LUA_EVENT_PREPARE
// or LUA_EVENT_REUSE to give event[name] = value in the handler
// You must have just prepared an event before calling these - 
// there is no safety checking of whats in the lua stack.

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

// -- Adding tables to events

// Assume Event object on stack: create a table on top of stack - will be named
// on closing the table.
inline void LUA_EVENT_START_TABLE()
{
	lua_newtable(g_L);
}

// Assume Event object on stack: create a table with a starting size (optimised)
inline void LUA_EVENT_START_TABLE_WITH_ROWS(int rows)
{
	lua_createtable(g_L, 0, rows);
}

// Assumes table is top of stack: finish the table and name it.
// The table name var is pushed to top of stack and set to the table we just
// created (now at -2 in stack)
inline void LUA_EVENT_END_AND_NAME_TABLE(const char* name)
{
    lua_setfield(g_L, -2, name);
}

/*
 To use the above: create table, then push values using LUA_EVENT_SET_STRING
 etc, the call LUA_EVENT_END_AND_NAME_TABLE with name of the table to end

LUA_EVENT_START_TABLE();
LUA_EVENT_SET_BOOLEAN("someBoolean", true);
LUA_EVENT_SET_STRING("favouriteColour", "blue");
LUA_EVENT_SET_INTEGER("numberOfTheBeast", 666);
LUA_EVENT_END_AND_NAME_TABLE("someTable")

Creates: someTable = { someBoolean = true, favouriteColour = "blue, no yellow", numberOfTheBeast = 666}
*/

// ---- Using array-like tables in Lua events ----

// The following act like above but for array-like tables
// Use the same LUA_EVENT_START_TABLE() (dynamic size) or
// LUA_EVENT_START_TABLE_WITH_ARRAY_SIZE(size) (optimised) to create tables
// You need to set indices manually, they do not increment for you.
// Remember to start at 1, not 0 for indices!

// Like LUA_EVENT_START_TABLE_WITH_ROWS for array-style table
inline void LUA_EVENT_START_TABLE_WITH_ARRAY_SIZE(int elements)
{
	lua_createtable(g_L, elements, 0);
}

// Like LUA_EVENT_SET_INTEGER but put value at index, not named entry
inline void LUA_EVENT_SET_INTEGER_AT_INDEX(int index, lua_Integer value)
{
    lua_pushinteger(g_L, index);
    lua_pushinteger(g_L, value);
    lua_settable(g_L, -3);  // table[index] = value; pops index and value off stack
}

// Like LUA_EVENT_SET_STRING but put value at index, not named entry
inline void LUA_EVENT_SET_STRING_AT_INDEX(int index, const char* value)
{
    lua_pushinteger(g_L, index);
    lua_pushstring(g_L, value);
    lua_settable(g_L, -3); 
}

// Like LUA_EVENT_SET_BOOLEAN but put value at index, not named entry
inline void LUA_EVENT_SET_BOOLEAN_AT_INDEX(int index, bool value)
{
    lua_pushinteger(g_L, index);
    lua_pushboolean(g_L, value);
    lua_settable(g_L, -3);
}

inline void LUA_EVENT_SET_NUMBER_AT_INDEX(int index, lua_Number value)
{
    lua_pushinteger(g_L, index);
    lua_pushnumber(g_L, value);
    lua_settable(g_L, -3);
}

/*
 To use the above: create table, then push values using LUA_EVENT_SET_STRING_AT_INDEX
 etc, then call LUA_EVENT_END_AND_NAME_TABLE with name of the table to end

LUA_EVENT_START_TABLE();
LUA_EVENT_SET_BOOLEAN_AT_INDEX(1, true);
LUA_EVENT_SET_STRING_AT_INDEX(2 "blue, no yellow");
LUA_EVENT_SET_INTEGER_AT_INDEX(3 666);
LUA_EVENT_END_AND_NAME_TABLE("someTable")

Creates: someTable[1]=true someTable[2]="blue, no yellow" someTable[3]=666
*/

// ---- Add tables inside other tables in Lua events ----

// Assumes table is top of stack. Push the table to be at index in the last
// table that was created. This is used if you want to close a table and put it
// at an index in previous table.
inline void LUA_EVENT_END_AND_INDEX_TABLE(int index)
{
    lua_pushinteger(g_L, index);
    lua_insert(g_L, -2); // swap current table and index value
    lua_settable(g_L, -3); // previous table[index] = current table
}

/*
 Example for above with named array table with both values and other tables inside:

LUA_EVENT_START_TABLE();                        //start outer table
LUA_EVENT_SET_BOOLEAN_AT_INDEX(1, true);        //set bool at index 1
LUA_EVENT_START_TABLE();                        //inner table (we'll put this at index 2 in a bit...)
LUA_EVENT_SET_INTEGER("numberOfTheBeast", 666); //set number in inner table
LUA_EVENT_END_AND_INDEX_TABLE(2)                //close table and put it at index 2 in outer table
LUA_EVENT_START_TABLE();                        //another inner table
LUA_EVENT_SET_STRING_AT_INDEX("val", "thing");  //set string in second inner table
LUA_EVENT_END_AND_INDEX_TABLE(3)                //close second inner table and put it at index 3 in outer table
LUA_EVENT_END_AND_NAME_TABLE("someTable")       //finally close and name our original table

Creates: someTable = { true, {numberOfTheBeast=666}, {val="thing"} }
*/


// ---------------------------------

QUICK_NAMESPACE_END;

#endif // __Q_LUA_HELPERS_H

