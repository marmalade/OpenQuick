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
	\file QTween.h
	\brief Interpolation of object members.
*/
//------------------------------------------------------------------------------

#ifndef __Q_TWEEN_H
#define __Q_TWEEN_H

#include "QDefines.h"
#include "QNode.h"

#include "cocos2d.h"

// tolua_begin

/**
The 'ease' namespace is used for functions that can modify how tweens are applied.
Each easing function is of the form y = f(x), where x = (0..1) and y = (0..1).
Each easing function also takes a 'value' parameter which can be used to modify the easing function;
for example, to specify a multiplication factor or exponential power.
*/
namespace ease {
	/**
	Easing function providing a linear curve (straight line).
	The value field is not used.
	*/
	float linear(float time, float value = 1.0f);

	/**
	Easing function providing a curve based on raising the time value to a specified power.
	The value field specifies the power, and defaults to 2 (i.e. a squared function).
	The easing is "soft" at the start of the tween, and "hard" at the end.
	*/
    float powIn(float time, float power = 2.0f);

	/**
	Easing function providing a curve based on raising the time value to a specified power.
	The value field specifies the power, and defaults to 2 (i.e. a squared function).
	The easing is "hard" at the start of the tween, and "soft" at the end.
	*/
    float powOut(float time, float power = 2.0f);
	
	/**
	Easing function providing a curve based on raising the time value to a specified power.
	The value field specifies the power, and defaults to 2 (i.e. a squared function).
	The easing is "soft" at both the start and end of the tween.
	*/
    float powInOut(float time, float power = 2.0f);

	/**
	Easing function providing a curve based on raising a value to the power of 10 * time.
	The value defaults to 2.
	The easing is "soft" at the start of the tween, and "hard" at the end.
	*/
	float expIn(float time, float value = 2.0f);

	/**
	Easing function providing a curve based on raising a value to the power of 10 * time.
	The value defaults to 2.
	The easing is "hard" at the start of the tween, and "soft" at the end.
	*/
	float expOut(float time, float value = 2.0f);
	
	/**
	Easing function providing a curve based on raising a value to the power of 10 * time.
	The value defaults to 2.
	The easing is "soft" at both the start and end of the tween.
	*/
    float expInOut(float time, float value = 2.0f);

	/**
	Easing function providing a sine curve raised to a specified power.
	The value field specifies the power, and defaults to 1 (i.e. a standard sine function).
	The easing is "soft" at the start of the tween, and "hard" at the end.
	*/
    float sineIn(float time, float power = 1.0f);

	/**
	Easing function providing a sine curve raised to a specified power.
	The value field specifies the power, and defaults to 1 (i.e. a standard sine function).
	The easing is "hard" at the start of the tween, and "soft" at the end.
	*/
    float sineOut(float time, float power = 1.0f);

	/**
	Easing function providing a sine curve raised to a specified power.
	The value field specifies the power, and defaults to 1 (i.e. a standard sine function).
	The easing is "soft" at the both the start and end of the tween.
	*/
    float sineInOut(float time, float power = 1.0f);
    
	/**
	Easing function providing a damped oscillation curve.
	The value field specifies the period of the oscillation wave, and defaults to 2 * PI.
	The easing is "soft" at the start of the tween, and "hard" at the end.
	*/
	float elasticIn(float time, float period = (float)M_PI * 2.0f);
	
	/**
	Easing function providing a damped oscillation curve.
	The value field specifies the period of the oscillation wave, and defaults to 2 * PI.
	The easing is "hard" at the start of the tween, and "soft" at the end.
	*/
    float elasticOut(float time, float period = (float)M_PI * 2.0f);
	
	/**
	Easing function providing a damped oscillation curve.
	The value field specifies the period of the oscillation wave, and defaults to 2 * PI.
	The easing is "soft" at both the start and end of the tween.
	*/
    float elasticInOut(float time, float period = (float)M_PI * 2.0f);
    
	/**
	Easing function providing a damped bouncing curve.
	The value field is not used.
	The easing is "soft" at the start of the tween, and "hard" at the end.
	*/
	float bounceIn(float time, float value = 1.0f);
	
	/**
	Easing function providing a damped bouncing curve.
	The value field is not used.
	The easing is "hard" at the start of the tween, and "soft" at the end.
	*/
    float bounceOut(float time, float value = 1.0f);
	
	/**
	Easing function providing a damped bouncing curve.
	The value field is not used.
	The easing is "soft" at both the start and end of the tween.
	*/
    float bounceInOut(float time, float value = 1.0f);
    
	/**
	Easing function providing an "overshoot" and spring-back curve.
	The value field is not used.
	The easing is "soft" at the start of the tween, and "hard" at the end.
	*/
	float backIn(float time, float value = 1.0f);

	/**
	Easing function providing an "overshoot" and spring-back curve.
	The value field is not used.
	The easing is "hard" at the start of the tween, and "soft" at the end.
	*/
    float backOut(float time, float value = 1.0f);

	/**
	Easing function providing an "overshoot" and spring-back curve.
	The value field is not used.
	The easing is "soft" at both the start and end of the tween.
	*/
    float backInOut(float time, float value = 1.0f);
};
// tolua_end

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QTween
//------------------------------------------------------------------------------
class QTween { // tolua_export
public:
    // tolua_begin
    QTween();
    ~QTween();

    QNode* target;

    // tolua_end

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_TWEEN_H
