#include "QDefines.h" // include this first, it turns off various VS warnings
#include "QMain.h"
#include "AppDelegate.h"
#include "main.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;
USING_NS_QUICK;

//------------------------------------------------------------------------------
bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    CCDirector *pDirector = CCDirector::sharedDirector();
    pDirector->setOpenGLView(CCEGLView::sharedOpenGLView());
#ifdef _WIN32
	pDirector->setProjection(kCCDirectorProjection2D);

    // Set EGLView frame size to *device* w,h
    float w = WINDOW_ACTUAL_W;
    float h = WINDOW_ACTUAL_H;
    CCEGLView::sharedOpenGLView()->setFrameSize(w, h);
    
    kmGLMatrixMode(KM_GL_PROJECTION);
    kmGLLoadIdentity();

    // New code: rotate to achieve landscape orientation
    int angle = 0;
    kmGLRotatef((float)angle, 0, 0, 1);
    
    kmMat4 orthoMatrix;
    kmMat4OrthographicProjection(&orthoMatrix, 0, w, 0, h, -1024, 1024 );
    kmGLMultMatrix(&orthoMatrix);
    kmGLMatrixMode(KM_GL_MODELVIEW);
    kmGLLoadIdentity();
#endif

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

    // OpenQuick stuff
    InitLuaSystem();
    InitLuaMiddleware();
    InitLuaApp();

    return true;
}
//------------------------------------------------------------------------------
void AppDelegate::applicationDidEnterBackground()
{
    CCDirector::sharedDirector()->stopAnimation();
    CocosDenshion::SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}
//------------------------------------------------------------------------------
void AppDelegate::applicationWillEnterForeground()
{
    CCDirector::sharedDirector()->startAnimation();
    CocosDenshion::SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}

//------------------------------------------------------------------------------
// Init/terminate functions
//------------------------------------------------------------------------------
void AppDelegate::InitLuaSystem()
{
    MainInitLuaSystem();
}
//------------------------------------------------------------------------------
void AppDelegate::TerminateLuaSystem()
{
    MainTerminateLuaSystem();
}
//------------------------------------------------------------------------------
void AppDelegate::InitLuaMiddleware()
{
    // Initialise Lua middleware (OpenQuick etc) and load config.lua
    const char* filename = "config.lua";
    MainInitLuaMiddleware(filename);
}
//------------------------------------------------------------------------------
void AppDelegate::TerminateLuaMiddleware()
{
    MainTerminateLuaMiddleware();
}
//------------------------------------------------------------------------------
void AppDelegate::InitLuaApp()
{
    // Initialise Lua app (load main.lua)
    const char* filename = "main.lua";
    MainInitLuaApp(filename);
}
//------------------------------------------------------------------------------
void AppDelegate::TerminateLuaApp()
{
    MainTerminateLuaApp();
}
