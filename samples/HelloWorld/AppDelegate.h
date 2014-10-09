#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#include "cocos2d.h"

// The Cocos2d-x Application.
class  AppDelegate : private cocos2d::CCApplication
{
public:
    // Standard Cocos2d-x app delegate stuff
    AppDelegate() {}
    virtual ~AppDelegate() {};
    virtual bool applicationDidFinishLaunching();
    virtual void applicationDidEnterBackground();
    virtual void applicationWillEnterForeground();

    // OpenQuick stuff

    // Init/terminate Lua VM
    void InitLuaSystem();
    void TerminateLuaSystem();

    // Init/terminate Lua middleware, e.g. OpenQuick
    void InitLuaMiddleware();
    void TerminateLuaMiddleware();

    // Init/terminate Lua app (loaded from main.lua)
    void InitLuaApp();
    void TerminateLuaApp();
};

#endif // _APP_DELEGATE_H_

