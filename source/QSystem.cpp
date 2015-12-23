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

#include "QSystem.h"
#include "QLuaHelpers.h"

// Required only for QTrace
//#include "cocos2d.h"
USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

QSystem* g_QSystem = NULL;

//------------------------------------------------------------------------------
// QSystem
//------------------------------------------------------------------------------
QSystem::QSystem()
{
    g_QSystem = this;

    _timersPaused = false;
    _timersTimeScale = 1.0f;

    gameTime = 0.0f;
    deltaTime = 0.0f;
}
//------------------------------------------------------------------------------
QSystem::~QSystem()
{
    g_QSystem = NULL;
}
//------------------------------------------------------------------------------
void QSystem::quit()
{
#ifdef MARMALADE
    s3eDeviceRequestQuit();
#endif
}
//------------------------------------------------------------------------------
void QSystem::yield()
{
#ifdef MARMALADE
    s3eDeviceYield(0);
#endif
}
//------------------------------------------------------------------------------
std::string QSystem::_getMemoryStats(void)
{
    std::ostringstream stringStream;
#ifdef MARMALADE
    int32 total = s3eMemoryGetInt(S3E_MEMORY_SIZE) / 1024;
    int32 free = s3eMemoryGetInt(S3E_MEMORY_FREE) / 1024;
    int32 lfb = s3eMemoryGetInt(S3E_MEMORY_LFB) / 1024;

    stringStream << free;
    stringStream << "kb of ";
    stringStream << total;
    stringStream << "kb memory remaining.  Largest block is ";
    stringStream << lfb;
    stringStream << "kb";
#endif
    return stringStream.str();
}
//------------------------------------------------------------------------------
void QSystem::_sendTouchEvent(float x, float y, const char* phase)
{
    // SEND EVENT TO LUA
    //QTrace("QSystem::_sendTouchEvent");

	LUA_EVENT_PREPARE("touch");
    LUA_EVENT_SET_NUMBER("x", x);
    LUA_EVENT_SET_NUMBER("y", y);
    LUA_EVENT_SET_STRING("phase", phase);
	LUA_EVENT_SEND();
}
//------------------------------------------------------------------------------
void QSystem::setFrameRateLimit(int fps)
{
	CCDirector *pDirector = CCDirector::sharedDirector();
	pDirector->setAnimationInterval(1.0 / (double)fps);

}


QUICK_NAMESPACE_END;
