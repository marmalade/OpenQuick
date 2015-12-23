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

#include <stdlib.h> // for malloc()/free()
//#include "s3eFile.h"

#include "QDefines.h"
#include "QLuaHelpers.h"
#include "QMain.h"
#include "CCPlatformMacros.h"

//For GNUC compiler warnings. Cocos2d-x macro which isnt defined in our current version of CC
#ifndef CC_UNUSED
#ifdef __GNUC__
#define CC_UNUSED __attribute__ ((unused))
#else
#define CC_UNUSED
#endif
#endif

QUICK_NAMESPACE_BEGIN;

// Globals
lua_State* g_L = NULL;
int QLuaErrorHandler(lua_State* L);
int (*g_LuaErrorHandler)(lua_State* L) = QLuaErrorHandler;

//------------------------------------------------------------------------------
// Default error handler
int QLuaErrorHandler(lua_State *L)
{
	const char* CC_UNUSED msg = lua_tostring(L, -1);
	QTrace("--Lua Error: %s", msg ? msg : "<No message>");

    char assertMsg[cocos2d::kMaxLogLen+1];
    snprintf(assertMsg, cocos2d::kMaxLogLen, "Lua Error: %s", msg ? msg : "<No message>");
	// use an assert here, so it shows up on device
	QAssert(false, assertMsg);

	return 0;
}
//------------------------------------------------------------------------------
int QLuaPanic(lua_State *L)
{
	g_LuaErrorHandler(L);
#ifdef MARMALADE
	IwError(("LUA PANIC:\n%s\n%s", lua_tostring(L, -1), MainGetProcessedLuaCallStack()));
#endif
	return 0;
}
//------------------------------------------------------------------------------
void LUA_REPORT_ERRORS(lua_State *L, int status)
{
    if (status !=0)
    {
        //int s1 = lua_gettop(g_L);
        const char* error = lua_tostring(L, -1);
        //int s2 = lua_gettop(g_L);
        const char* processed = MainGetProcessedLuaError(error);
        //int s3 = lua_gettop(g_L);
        QAssert(false, processed);
        //int s4 = lua_gettop(g_L);
        lua_pop(g_L, 1); // remove error message
    }
}
//------------------------------------------------------------------------------
void QLuaSetup(lua_State* L)
{
    luaL_openlibs(L);

#ifdef IW_LUA_EVENTS
	IwLuaSetupEvents();
#endif

#ifdef IW_LUA_THREADS
	IwLuaSetupThreads();
#endif

	// clear the stack
	lua_settop(L, 0);
}

//------------------------------------------------------------------------------
// Memory interface
//------------------------------------------------------------------------------
void* QLuaAlloc(void* userData, void* ptr, size_t oldSize, size_t newSize)
{
	if (newSize == 0) 
	{
		free(ptr);
		return NULL;
	}
	else
		return realloc(ptr, newSize);
}
//------------------------------------------------------------------------------
void* QLuaAllocBucket(void* userData, void* ptr, size_t oldSize, size_t newSize)
{
	if (newSize == 0) 
	{
		if (ptr)
            free(ptr);
		return NULL;
	}
	else
	{
        return realloc(ptr, newSize);
	}
}
//------------------------------------------------------------------------------
// External interface
//------------------------------------------------------------------------------
void QLuaInitAllocator(lua_Alloc alloc, void* allocUserData)
{
	if (!g_L)
	{
		// Lua state
		g_L = lua_newstate(alloc, allocUserData);

		lua_atpanic(g_L, QLuaPanic);

		// Default libraries
		QLuaSetup(g_L);
	}
}
//------------------------------------------------------------------------------
void QLuaInit()
{
	QLuaInitAllocator(QLuaAlloc, NULL);
}
//------------------------------------------------------------------------------
void QLuaTerminate()
{
#ifdef IW_LUA_EVENTS
	IwLuaTerminateEvents();
#endif
#ifdef IW_LUA_THREADS
	IwLuaTerminateThreads();
#endif

	if (g_L)
	{
		lua_close(g_L);
		g_L = NULL;
	}
}

QUICK_NAMESPACE_END;
