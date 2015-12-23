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
	\file QSystem.h
	\brief System singleton.
*/
//------------------------------------------------------------------------------

#ifndef __Q_SYSTEM_H
#define __Q_SYSTEM_H

#include <string>

// tolua_begin
namespace quick {
// tolua_end

class QNode;

//------------------------------------------------------------------------------
// QSystem
//------------------------------------------------------------------------------
/**
The System object handles most runtime activities which are NOT related to the display.
*/
class QSystem { // tolua_export
public:
    // tolua_begin

    // BOUND, PRIVATE
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
    QSystem();
    ~QSystem();
    void _sendTouchEvent(float x, float y, const char* phase);
    std::string _getMemoryStats( void);

    bool _timersPaused;     // true if ALL the system's timers should be paused. Default is false
    float _timersTimeScale; // time scaling factor to apply to the update timestep for timers. Default is 1

    // BOUND, PUBLIC
    // Timers and tweens control
    void pauseTimers() { _timersPaused = true; }
    void resumeTimers() { _timersPaused = false; }
    void setTimersTimeScale(float f) { _timersTimeScale = f; }
    float getTimersTimeScale() { return _timersTimeScale; }
	void setFrameRateLimit(int fps);
 
    /**
    The elapsed game time, in seconds.
    */
    // Written to from Scene::update
    float   gameTime;
    
    /**
    The time difference, in seconds, from the last frame.
    */
    // Written to from Scene::update
    float   deltaTime;

    /**
    Request that the application exit
    */
    void quit();

    /**
    TODO, THIS IS A QUICK FUNCTION...
    */
    void yield();

    // tolua_end

    // UNBOUND
//	int 	m_TimerMSLaunch;	// MS timer count at app launch
//	bool	m_BacklightAlways;	// always keep the backlight on

}; // tolua_export

extern QSystem* g_QSystem;

// tolua_begin
}
// tolua_end

#endif // __Q_SYSTEM_H
