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

#ifndef __Q_PARTICLES_H
#define __Q_PARTICLES_H

#include "QNode.h"
#include "QVec2.h"
#include "CCParticleSystemQuad.h"

// tolua_begin
namespace quick {
// tolua_end

class QAtlas;

// CCParticleSystem keeps some members protected, but we need access to them... so
// we need to derive this class and expose accessors.
class CCParticleSystemQuad2 : public cocos2d::CCParticleSystemQuad
{
public:
	// modeGravity accessors
	void modeGravitySetGravity(float x, float y) { modeA.gravity = ccp(x, y); }
	cocos2d::CCPoint& modeGravityGetGravity() { return modeA.gravity; }
	void modeGravitySetSpeed(float s) { modeA.speed = s; }
	float modeGravityGetSpeed() { return modeA.speed; }
	void modeGravitySetSpeedVar(float s) { modeA.speedVar = s; }
	float modeGravityGetSpeedVar() { return modeA.speedVar; }
	void modeGravitySetTangentialAccel(float a) { modeA.tangentialAccel = a; }
	float modeGravityGetTangentialAccel() { return modeA.tangentialAccel; }
	void modeGravitySetTangentialAccelVar(float a) { modeA.tangentialAccelVar = a; }
	float modeGravityGetTangentialAccelVar() { return modeA.tangentialAccelVar; }
	void modeGravitySetRadialAccel(float a) { modeA.radialAccel = a; }
	float modeGravityGetRadialAccel() { return modeA.radialAccel; }
	void modeGravitySetRadialAccelVar(float a) { modeA.radialAccelVar = a; }
	float modeGravityGetRadialAccelVar() { return modeA.radialAccelVar; }

	// modeRadial accessors
	void modeRadialSetStartRadius(float r) { modeB.startRadius = r; }
	float modeRadialGetStartRadius() { return modeB.startRadius; }
	void modeRadialSetStartRadiusVar(float r) { modeB.startRadiusVar = r; }
	float modeRadialGetStartRadiusVar() { return modeB.startRadiusVar; }
	void modeRadialSetEndRadius(float r) { modeB.endRadius = r; }
	float modeRadialGetEndRadius() { return modeB.endRadius; }
	void modeRadialSetEndRadiusVar(float r) { modeB.endRadiusVar = r; }
	float modeRadialGetEndRadiusVar() { return modeB.endRadiusVar; }
	void modeRadialSetRotatePerSecond(float r) { modeB.rotatePerSecond = r; }
	float modeRadialGetRotatePerSecond() { return modeB.rotatePerSecond; }
	void modeRadialSetRotatePerSecondVar(float r) { modeB.rotatePerSecondVar = r; }
	float modeRadialGetRotatePerSecondVar() { return modeB.rotatePerSecondVar; }
};

// Our particles class
class QParticles : public QNode { // tolua_export
public:
	// tolua_begin
	// BOUND, PUBLIC
    virtual const char* _getToLuaClassName() { return "quick::QParticles"; }
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
	QParticles();
	~QParticles();

    // Stuff specific to mode 'Gravity'
	struct modeGravityStruct {
		QVec2 gravity;
        float speed;
        float speedVar;
        float tangentialAccel;
        float tangentialAccelVar;
        float radialAccel;
        float radialAccelVar;
    };

    // Stuff specific to mode 'Radial'
    struct modeRadialStruct {
        float startRadius;
        float startRadiusVar;
        float endRadius;
        float endRadiusVar;            
        float rotatePerSecond;
        float rotatePerSecondVar;
    };

	void setAtlas(QAtlas* pAtlas);
    bool addParticle();
    void stop();
    void reset();
    bool isFull();
	bool isActive();
    int getNumParticles() const { return particleCount; }

//    virtual void updateQuadWithParticle(tCCParticle* particle, const CCPoint& newPosition);
//    virtual void postStep();
    virtual void update(float dt);
    virtual void sync();
    void syncReverse();

	modeGravityStruct modeGravity;  // mode "gravity"
	modeRadialStruct modeRadial;  // mode "radial"

	int totalParticles; // total permitted
    int particleCount;  // total active

    int emitterMode;
	float emitterRate;

    float duration;
    QVec2 sourcePos;
    QVec2 sourcePosVar;
	float life;
    float lifeVar;
    float angle;
    float angleVar;

    float	startSize;
    float	startSizeVar;
    float	endSize;
    float	endSizeVar;
	QColor	startColor;
	QColor	startColorVar;
	QColor	endColor;
	QColor	endColorVar;
	float	startSpin;
	float	startSpinVar;
	float	endSpin;
	float	endSpinVar;
	// TODO texture;
	// TODO blendFunc
	bool	alphaModifiesColor;

	// BOUND, PRIVATE
	void _initWithPlist(const char* plist);
	void _initWithNumber(int numParticles);

	QAtlas*	_atlas;

	// tolua_end

	// UNBOUND

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_PARTICLES_H
