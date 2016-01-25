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
    \file QMain.h
    \brief Main init, update and terminate functions.
*/
//------------------------------------------------------------------------------

#ifndef __Q_MAIN_H
#define __Q_MAIN_H

// Defined string prefix for luac file system
#define LUAC_PREFIX "luac://"
#define LUABUFFSIZE 512
#define LUA_LOADED_FILE_ACCESS "CURRENT_LOADED_FILE"

// tolua_begin
namespace quick {
// tolua_end

// Return current luac:// FS path
const std::string& GetLuacFSRawPath();
// Check directory path to current luac directory. Will create missing directories
void CheckLuacDirPath(const std::string& guaranted_path, const std::string& out_filename);

// tolua_begin
// Our own version of dofile(), which can perform pre-processing
bool MainLuaPrecompileFile(const char* filename);
void MainLuaLoadFile(const char* filename);
void MainLuaDoFile(const char* filename);

// Get Quick version string
const char* MainGetVersionString();

// Used to mark concatenation of luac files
void startFileConcat(const char* filename);
bool endFileConcat();
bool isFileConcatInProgress();

// Flush the output.txt file
void MainOutputFlush();

// Print function used for all logging
void MainPrint(char* pBuffer);

// tolua_end

// Globals for communicating to/from Lua
struct luadbg {
    bool makePrecompiledLua;
    bool makeConcatenatedLua;
    bool usePrecompiledLua;
    bool useConcatenatedLua;
    bool isDbgLoaded;
    bool debugEnabled;
    bool assertDialogsEnabled;
};
extern luadbg g_Config;

void MainAssertAppendLuaCallStack(char* buffer);
const char* MainGetProcessedLuaCallStack();
const char* MainGetProcessedLuaError(const char* error);

// Init/terminate Lua VM
void MainInitLuaSystem();
void MainTerminateLuaSystem();

// Init/terminate Lua middleware, e.g. OpenQuick
void MainInitLuaMiddleware(const char* configFilename);
void MainResetLuaMiddleware();
void MainTerminateLuaMiddleware();

// Init/terminate Lua VM
void MainInitLuaApp(const char* mainFilename);
void MainTerminateLuaApp();

// Update everything
void MainUpdate(float dt);

// An update callback that can be registered by an external module, e.g. Quick
typedef void (*MainCallback)(void);
extern MainCallback g_MainCallback;

// tolua_begin
}
// tolua_end

#endif // __Q_MAIN_H
