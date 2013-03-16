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

#include <string>
#include "stdio.h"

#include "QDefines.h"
#include "QDirector.h"
#include "QMain.h"
#include "QLuaHelpers.h"
#include "QPhysics.h"
#include "QSystem.h"

//#include "AppDelegate.h"
#include "cocos2d.h"

#ifdef COCOS2DX_TEST
// Add includes for direct testing of COCOS2DX features
#include "CCScene.h"
#include "CCDirector.h"
#include "CCSprite.h"
#endif

// tolua stuff here, before namespace
#include "tolua++.h"
TOLUA_API int tolua_openquick_tolua_open(lua_State* tolua_S);

#ifdef MARMALADE
void MarmQuickInit();
void MarmQuickTerminate();
void MarmQuickUpdate();
void MarmQuickPrint(const char* pBuffer);
#endif

// Define this to run without "update" events being sent to Lua
//#define NO_UPDATE_EVENT

// Perform preprocessing of loaded Lua files
#define LUA_PREPROCESS

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;

luadbg g_Config = // map some stuff from Lua dbg table
{
    false,  // isDbgLoaded
    true,   // DEBUG
    false,  // ASSERTDIALOGS
};

MainCallback g_MainCallback = NULL;

//------------------------------------------------------------------------------
// MainInit... and MainTerminate... functions
//------------------------------------------------------------------------------
std::string MainLuaLoadFile(const char* filename)
{
    // Read file into buffer
    FILE* pFile = fopen(filename, "rb");
    fseek(pFile, 0, SEEK_END);
    int fileSize = ftell(pFile);
    fclose(pFile);
    pFile = fopen(filename, "r");

    // We want to ensure the string starts with a commented filename; so that runtime errors in this chunk
    // can subsequently be traced back
	// UPDATE: THIS IS NO LONGER REQUIRED, AS THE LUA CODE CAN USE loadstring(string, filename)
    int namelength = 0; //= strlen(filename) + strlen("f(''); ");
    
    char* buff = (char*)malloc(fileSize + namelength + 1);
    memset(buff, 0, fileSize + namelength + 1);

//    sprintf(buff, "f('%s'); ", filename);
    int rtn = fread(buff + namelength, fileSize, 1, pFile);
    fclose(pFile);
    if (rtn != 1)
    {
        QAssert(false, "error reading file");
        return "";
    }

#ifdef LUA_PREPROCESS
    // Assume this function is only ever called after dbg.lua has been loaded, and therefore dbg.DEBUG has been set from config
    if (g_Config.DEBUG == false)
    {
        // GREP "dbg." to "--g."
        char* pChar = buff;
        while(pChar < buff + fileSize + namelength - 4)
        {
            if  (
                (pChar[0] == 'd') &&
                (pChar[1] == 'b') &&
                (pChar[2] == 'g') &&
                (pChar[3] == '.')
                )
            {
                pChar[0] = pChar[1] = '-';
                pChar += 4;
            }
            else
                pChar++;
        }
    }
#endif
    std::string result(buff);
    free(buff);
    return result;
}
//------------------------------------------------------------------------------
void MainLuaDoFile(const char* filename)
{
    // This is only called when loading Lua files from within the C++ code, NOT from Lua dofile()
//    std::string buff = MainLuaLoadFile(filename);

	// Assume dbg.lua already loaded, so we've overridden dofile()
	lua_getglobal(g_L, "dofile");
	lua_pushstring(g_L, filename);
 	int s = lua_pcall(g_L, 1, 0, 0);
    LUA_REPORT_ERRORS(g_L, s);

    // Execute
/*    int s = luaL_loadstring(g_L, buff.c_str());
    if (s)
    {
        // Load error
        QTrace("Failed to load file '%s'", filename); // don't use QWarning, as we don't want to get the callstack
        if (s == LUA_ERRSYNTAX)
        {
            const char* error = lua_tostring(g_L, lua_gettop(g_L));
            const char* processed = MainGetProcessedLuaError(error);
            QTrace("Lua error: %s", processed);
        }
    }
    else
    {
        // No load error
        s = lua_pcall(g_L, 0, 0, 0);
        LUA_REPORT_ERRORS(g_L, s);
    }*/
} 
//------------------------------------------------------------------------------
//s3eFile* outputFile = NULL;
void MainOutputFlush()
{
//    s3eFileFlush(outputFile);
}
//------------------------------------------------------------------------------
const char* MainGetProcessedLuaCallStack()
{
    // Call Lua's debug.traceback(), and tidy up the results
    if (g_L && (g_Config.isDbgLoaded == true))
    {
        lua_gettop(g_L);
        lua_getfield(g_L, LUA_GLOBALSINDEX, "dbg");
        lua_gettop(g_L);
	    lua_getfield(g_L, -1, "getProcessedCallstack");
	    lua_pcall(g_L, 0, 1, 0);
        const char* luastack = lua_tostring(g_L, -1);
        lua_pop(g_L, 2);

        lua_gettop(g_L);
        return luastack;
    }
    else
        return "";
}
//------------------------------------------------------------------------------
const char* MainGetProcessedLuaError(const char* error)
{
    if (g_L && (g_Config.isDbgLoaded == true))
    {
        // Call our dbg function to process the Lua error string
        //int s1 = lua_gettop(g_L);
        lua_getfield(g_L, LUA_GLOBALSINDEX, "dbg");
	    lua_getfield(g_L, -1, "getProcessedError");
	    lua_pushstring(g_L, error);
	    lua_pcall(g_L, 1, 1, 0);
        //int s2 = lua_gettop(g_L);
        const char* processed = lua_tostring(g_L, -1);
        //int s3 = lua_gettop(g_L);
        lua_pop(g_L, 2);
        return processed;
    }
    else
        return "";
}
//------------------------------------------------------------------------------
#ifndef MAX_ASSERT_STRING_LEN
#define MAX_ASSERT_STRING_LEN 1024
#endif
void MainAssertAppendLuaCallStack(char* pBuffer)
{
    // Use this function to append the current Lua debug.traceback() string to
    // an input string.
    if (!pBuffer)
        return;
    int32 lenBuffer = strlen(pBuffer);

    const char* luastack = MainGetProcessedLuaCallStack();
    int32 lenLua = strlen(luastack);

    char* pChar = pBuffer + lenBuffer;
    const char* pLua = luastack;
    while(pChar < pBuffer + MAX_ASSERT_STRING_LEN - 7)
    {
        if (pLua >= luastack + lenLua)
            break;

        if (*pLua == '\t')
            *pChar++ = ' ';
        else
            *pChar++ = *pLua;
        pLua++;
    }
    *pChar++ = '\0';
    if (pLua < luastack + lenLua)
//        strlcat(pBuffer, "<...>", MAX_ASSERT_STRING_LEN);
        strcat(pBuffer, "<...>");
}
//------------------------------------------------------------------------------
void MainPrint(char* pBuffer)
{
    // NOTE: CURRENTLY THIS IS UNUSED, AS LUA PRINT DOES NOT CALL THROUGH TO HERE
#ifdef MARMALADE
    MarmQuickPrint(pBuffer);
#else
    // Print to stdout
	printf("%s", pBuffer);
#endif
}
//------------------------------------------------------------------------------
void MainInitLuaSystem()
{
    // Initialise Lua itself
    QLuaInit();
}
//------------------------------------------------------------------------------
void MainTerminateLuaSystem()
{
    // Initialise Lua itself
    QLuaTerminate();
}
//------------------------------------------------------------------------------
const char* MainGetVersionString()
{
    return "1.0";
}
void MainInitLuaMiddleware(const char* configFilename)
{
    // Initialise tolua packages
    // This will register all bound symbols with Lua
    tolua_openquick_tolua_open(g_L);

    // Load Lua files
    int s;

    // Log some blank lines, so it's easier to see where the *real* log starts
    printf("\n\n");

    // Log "QUICKLOG CPP: Marmalade Quick <version>"
    QTrace("Marmalade Quick %s", MainGetVersionString());

    // Log "QUICKLOG CPP: Loading app configuration..."
    QTrace("Loading app configuration...");

    // Our app config
    s = luaL_loadfile(g_L, "quicklua/QConfig.lua");
    if (s)
        QWarning("Failed to load QConfig.lua file");
  	s = lua_pcall(g_L, 0, 0, 0);
	LUA_REPORT_ERRORS(g_L, s);

    // Allow non-existence of config.lua
    FILE* pFile = fopen(configFilename, "rt");
    fclose(pFile);
    if (!pFile)
        QWarning("Failed to load config lua file");
    else
    {
        s = luaL_loadfile(g_L, configFilename);
        if (s)
            QWarning("Failed to load config lua file");
  	    s = lua_pcall(g_L, 0, 0, 0);
	    LUA_REPORT_ERRORS(g_L, s);
    }

    // Initialise configuration
	lua_getglobal(g_L, "initConfig");
 	s = lua_pcall(g_L, 0, 0, 0);
    LUA_REPORT_ERRORS(g_L, s);

    // Log "QUICKLOG CPP: Loading Quick engine..."
    QTrace("Loading Quick engine...");

    // dbg.lua
    s = luaL_loadfile(g_L, "quicklua/dbg.lua");
    if (s)
        QWarning("Failed to load dbg.lua file");
    else
        g_Config.isDbgLoaded = true;
  	s = lua_pcall(g_L, 0, 0, 0);
	LUA_REPORT_ERRORS(g_L, s);

    // Read stuff from Lua dbg
    lua_getglobal(g_L, "dbg");
    lua_getfield(g_L, -1, "DEBUG");
    g_Config.DEBUG = lua_toboolean(g_L, -1);
    lua_settop(g_L, 0);

    lua_getglobal(g_L, "dbg");
    lua_getfield(g_L, -1, "ASSERTDIALOGS");
    g_Config.ASSERTDIALOGS = lua_toboolean(g_L, -1);
    lua_settop(g_L, 0);

#ifdef LUA_PREPROCESS
    if (g_Config.DEBUG == false)
        printf("config.debug.general = false. All 'dbg.' lines will become comments...");
#endif
    
    // Our OpenQuick init
    s = luaL_loadfile(g_L, "quicklua/openquick.lua");
    if (s)
        QWarning("Failed to load openquick lua file");
  	s = lua_pcall(g_L, 0, 0, 0);
	LUA_REPORT_ERRORS(g_L, s);
 
    // Create the Director's global scene
	lua_getglobal(g_L, "director");
    lua_getfield(g_L, -1, "createDefaultScene");    // On stack: director.createDefaultScene()
	lua_getglobal(g_L, "director");
 	s = lua_pcall(g_L, 1, 0, 0);
    LUA_REPORT_ERRORS(g_L, s);
 	lua_pop(g_L, 2);

    // Create some of the cocos singletons up front
    CCTextureCache::sharedTextureCache();
    CCConfiguration::sharedConfiguration();

#ifdef COCOS2DX_TEST
	CCScene* pScene = new CCScene();
	pScene->init();
    CCDirector::sharedDirector()->runWithScene((CCScene*)pScene);

	CCSize ds = CCDirector::sharedDirector()->getVisibleSize();

	CCTexture2D* pTex = CCTextureCache::sharedTextureCache()->addImage("textures/beachball.png");
	
	CCSprite* pSprite1 = new CCSprite();
	pSprite1->initWithFile("textures/beachball.png");
    pSprite1->setPosition(ccp(ds.width*1/3, ds.height/2));

    CCSprite* pSprite2 = new CCSprite();
	pSprite2->initWithFile("textures/beachball.png");
    pSprite2->setPosition(ccp(ds.width*2/3, ds.height/2));

//	pScene->addChild(pSprite1);
//	pScene->addChild(pSprite2);
    CCSpriteBatchNode* pSBNode = CCSpriteBatchNode::batchNodeWithTexture(pTex);
    pScene->addChild(pSBNode);
	pSBNode->addChild(pSprite1);
	pSBNode->addChild(pSprite2);
#endif
}
//------------------------------------------------------------------------------
void MainResetLuaMiddleware()
{
    // Purge Quick director
	lua_getglobal(g_L, "director");
    lua_getfield(g_L, -1, "_purge");    // On stack: director._purge()
 	lua_remove(g_L, -2);
 	int s = lua_pcall(g_L, 0, 0, 0);
    LUA_REPORT_ERRORS(g_L, s);
    
    // Purge Quick system
	lua_getglobal(g_L, "system");
    lua_getfield(g_L, -1, "_purge");    // On stack: system._purge()
 	lua_remove(g_L, -2);
 	s = lua_pcall(g_L, 0, 0, 0);
    LUA_REPORT_ERRORS(g_L, s);

    // Force GC
    lua_gc(g_L, LUA_GCCOLLECT, 0);
}
//------------------------------------------------------------------------------
void MainTerminateLuaMiddleware()
{
    CCDirector::sharedDirector()->end();
	CCDirector::sharedDirector()->mainLoop(); // purges Cocos2d-x director data

    MainResetLuaMiddleware();
}
//------------------------------------------------------------------------------
void MainInitLuaApp(const char* mainFilename)
{
#ifndef COCOS2DX_TEST
    // Log "QUICKLOG CPP: Loading Quick app..."
    QTrace("Loading app...");

    MainLuaDoFile(mainFilename);
#endif

    // For scripts that create objects on first parse, we should sync all nodes
    // to ensure transforms are reasonable before Cocos2d-x draws the first frame
	if (g_L)
	{
#ifndef NO_UPDATE_EVENT
		lua_getglobal(g_L, "director");
        lua_getfield(g_L, -1, "update");    // On stack: director, director.update
 		lua_remove(g_L, -2);
 		int s = lua_pcall(g_L, 0, 0, 0);
        LUA_REPORT_ERRORS(g_L, s);
#endif
	}
    //BUG FIXING
    //this removes the iPhone flickering issue
    //please leave this here
    glDisable(GL_DEPTH_TEST);
}
//------------------------------------------------------------------------------
void MainTerminateLuaApp()
{
    // SEND LUA EVENT
	LUA_EVENT_PREPARE("exit");
    LUA_EVENT_SET_NUMBER("system", 1);  // system event
	LUA_EVENT_SEND();
}

//------------------------------------------------------------------------------
// Main update function
//------------------------------------------------------------------------------
void MainUpdate(float dt)
{
#ifdef COCOS2DX_TEST
	return;
#endif
    // Check Lua stack consistent
#ifdef _DEBUG
    static bool firstTop = true;
    static int firstVal = 0;
	if (g_L)
    {
        if (firstTop == true)
        {
            firstVal = lua_gettop(g_L);
            firstTop = false;
        }
        else
        {
            int ls = lua_gettop(g_L);
            QAssert(ls == firstVal, "Lua stack top is unexpected value: %d", ls);
        }
    }
#endif

    // Physics update
    if (physics::g_Sim)
        physics::g_Sim->Update(dt);

    // Call any externally-registered module, e.g. Quick
    if (g_MainCallback)
        g_MainCallback();

    // Schedule any scene switching before the next update
    if (g_QDirector != NULL)
        g_QDirector->RunScene();

    // Lua update
	if (g_L)
	{
#ifndef NO_UPDATE_EVENT
		lua_getglobal(g_L, "director");
        lua_getfield(g_L, -1, "update");    // Stack: director.update
		lua_getglobal(g_L, "director");     // Stack: director.update(self)
        LUA_REPORT_ERRORS(g_L, lua_pcall(g_L, 1, 0, 0));
        lua_pop(g_L, 1);

        // Throw update event
	    LUA_EVENT_REUSE("update");
        LUA_EVENT_SEND();

        // IF USING EXPERIMENTAL EVENT QUEUE...
/*		lua_getglobal(g_L, "flushEvents");
        LUA_REPORT_ERRORS(g_L, lua_pcall(g_L, 0, 0, 0));*/
//        lua_pop(g_L, 1);
#endif
	}
}

QUICK_NAMESPACE_END;
