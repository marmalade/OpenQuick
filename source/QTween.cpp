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

#include "QTween.h"
#include "QDirector.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"
USING_NS_CC;
#ifndef M_PI_X_2
#define M_PI_X_2 (float)M_PI * 2.0f
#endif

namespace ease {
//------------------------------------------------------------------------------
// QEase
//------------------------------------------------------------------------------
float linear(float time, float value)
{
    return time;
}
float one(float time, float value)
{
    return 1.0f;
}
float zero(float time, float value)
{
    return 0.0f;
}
float powIn(float time, float power)
{
    float r = powf(time, power);
    return r;
}
float powOut(float time, float power)
{
    float r = powf(time, 1 / power);
    return r;
}
float powInOut(float time, float power)
{
	int sign = 1;
	int r = int(power);
	if (r % 2 == 0)
		sign = -1;

	time *= 2;
    if (time < 1)
		return 0.5f * powf(time, power);
	else
		return sign * 0.5f * (powf(time - 2, power) + sign * 2);
}
float expIn(float time, float value)
{
    return (time == 0 ? 0 : powf(2, 10 * (time/1 - 1)) - 1 * 0.001f);
}
float expOut(float time, float value)
{
    return (time == 1 ? 1 : (-powf(2, -10 * time / 1) + 1));
}
float expInOut(float time, float value)
{
	time *= 2.0f;
	if (time < 1)
		return 0.5f * powf(2, 10 * (time - 1));
    else
		return 0.5f * (-powf(2, -10 * (time - 1)) + 2);
}
float sineIn(float time, float power)
{
    float r = (-1 * cosf(time * (float)M_PI_2) + 1);
    if (power != 1.0f)
        r = powf(r, power);
    return r;
}
float sineOut(float time, float power)
{
    float r = (sinf(time * (float)M_PI_2));
    if (power != 1.0f)
        r = powf(r, power);
    return r;
}
float sineInOut(float time, float power)
{
    float r = (-0.5f * (cosf((float)M_PI * time) - 1));
    if (power != 1.0f)
        r = powf(r, power);
    return r;
}
float elasticIn(float time, float period)
{
	if (time == 0 || time == 1)
		return time;
	else
	{
		float s = period / 4;
		time = time - 1;
		return -powf(2, 10 * time) * sinf((time - s) * M_PI_X_2 / period);
	}
}
float elasticOut(float time, float period)
{
	if (time == 0 || time == 1)
        return time;
	else
	{
		float s = period / 4;
		return powf(2, -10 * time) * sinf((time - s) * M_PI_X_2 / period) + 1;
	}
}
float elasticInOut(float time, float period)
{
	if (time == 0 || time == 1)
		return time;
	else
	{
		time = time * 2;
		if (!period)
			period = 0.3f * 1.5f;

		float s = period / 4;
		time = time - 1;
		if (time < 0)
			return -0.5f * powf(2, 10 * time) * sinf((time -s) * M_PI_X_2 / period);
		else
			return powf(2, -10 * time) * sinf((time - s) * M_PI_X_2 / period) * 0.5f + 1;
	}
}
float _bounceTime(float time)
{
	if (time < 1 / 2.75)
	{
		return 7.5625f * time * time;
	} else 
	if (time < 2 / 2.75)
	{
		time -= 1.5f / 2.75f;
		return 7.5625f * time * time + 0.75f;
	} else
	if (time < 2.5 / 2.75)
	{
		time -= 2.25f / 2.75f;
		return 7.5625f * time * time + 0.9375f;
	}
	time -= 2.625f / 2.75f;
	return 7.5625f * time * time + 0.984375f;
}
float bounceIn(float time, float value)
{
	return 1 - _bounceTime(1 - time);
}
float bounceOut(float time, float value)
{
	return _bounceTime(1 - time);
}
float bounceInOut(float time, float value)
{
	if (time < 0.5f)
	{
		time = time * 2;
		return (1 - _bounceTime(1 - time)) * 0.5f;
	}
	else
		return _bounceTime(time * 2 - 1) * 0.5f + 0.5f;
}
float backIn(float time, float value)
{
	float overshoot = 1.70158f;
	return (time * time * ((overshoot + 1) * time - overshoot));
}
float backOut(float time, float value)
{
	float overshoot = 1.70158f;
	time = time - 1;
	return (time * time * ((overshoot + 1) * time + overshoot) + 1);
}
float backInOut(float time, float value)
{
	float overshoot = 1.70158f * 1.525f;
	time = time * 2;
	if (time < 1)
		return ((time * time * ((overshoot + 1) * time - overshoot)) / 2);
	else
	{
		time = time - 2;
		return ((time * time * ((overshoot + 1) * time + overshoot)) / 2 + 1);
	}
}

}; // namespace ease

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QTween
//------------------------------------------------------------------------------
QTween::QTween()
{
}
//------------------------------------------------------------------------------
QTween::~QTween()
{
}

QUICK_NAMESPACE_END;
