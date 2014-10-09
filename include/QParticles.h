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
#include "particle_nodes/CCParticleSystemQuad.h"

// tolua_begin
namespace quick {
// tolua_end

class QAtlas;

// CCParticleSystem keeps some members protected, but we need access to them... so
// we need to derive this class and expose accessors.
class CCParticleSystemQuad2 : public cocos2d::CCParticleSystemQuad
{
public:
	// modeA accessors
	void modeASetGravity(float x, float y) { modeA.gravity = ccp(x, y); }
	cocos2d::CCPoint& modeAGetGravity() { return modeA.gravity; }
	void modeASetSpeed(float s) { modeA.speed = s; }
	float modeAGetSpeed() { return modeA.speed; }
	void modeASetSpeedVar(float s) { modeA.speedVar = s; }
	float modeAGetSpeedVar() { return modeA.speedVar; }
	void modeASetTangentialAccel(float a) { modeA.tangentialAccel = a; }
	float modeAGetTangentialAccel() { return modeA.tangentialAccel; }
	void modeASetTangentialAccelVar(float a) { modeA.tangentialAccelVar = a; }
	float modeAGetTangentialAccelVar() { return modeA.tangentialAccelVar; }
	void modeASetRadialAccel(float a) { modeA.radialAccel = a; }
	float modeAGetRadialAccel() { return modeA.radialAccel; }
	void modeASetRadialAccelVar(float a) { modeA.radialAccelVar = a; }
	float modeAGetRadialAccelVar() { return modeA.radialAccelVar; }

	// modeB accessors
	void modeBSetStartRadius(float r) { modeB.startRadius = r; }
	float modeBGetStartRadius() { return modeB.startRadius; }
	void modeBSetStartRadiusVar(float r) { modeB.startRadiusVar = r; }
	float modeBGetStartRadiusVar() { return modeB.startRadiusVar; }
	void modeBSetEndRadius(float r) { modeB.endRadius = r; }
	float modeBGetEndRadius() { return modeB.endRadius; }
	void modeBSetEndRadiusVar(float r) { modeB.endRadiusVar = r; }
	float modeBGetEndRadiusVar() { return modeB.endRadiusVar; }
	void modeBSetRotatePerSecond(float r) { modeB.rotatePerSecond = r; }
	float modeBGetRotatePerSecond() { return modeB.rotatePerSecond; }
	void modeBSetRotatePerSecondVar(float r) { modeB.rotatePerSecondVar = r; }
	float modeBGetRotatePerSecondVar() { return modeB.rotatePerSecondVar; }

};

// Our particles class
class QParticles : public QNode { // tolua_export
public:
	// tolua_begin
	// BOUND, PUBLIC
    virtual const char* _getToLuaClassName() { return "quick::QParticles"; }
	QParticles();
	~QParticles();

	struct xyStruct {
		float x, y;
	};
	struct modeAStruct {
		xyStruct gravity;
        float speed;
        float speedVar;
        float tangentialAccel;
        float tangentialAccelVar;
        float radialAccel;
        float radialAccelVar;
    };

    struct modeBStruct {
        float startRadius;
        float startRadiusVar;
        float endRadius;
        float endRadiusVar;            
        float rotatePerSecond;
        float rotatePerSecondVar;
    };

	void init(const char* plist, int numParticles);
	void setAtlas(QAtlas* pAtlas);
    bool addParticle();
    void stop();
    void reset();
    bool isFull();

//    virtual void updateQuadWithParticle(tCCParticle* particle, const CCPoint& newPosition);
//    virtual void postStep();
    virtual void update(float dt);
    virtual void sync();
    void syncReverse();

	modeAStruct modeA;
	modeBStruct modeB;

    int particleCount;
    float duration;
    float sourcePosX;
    float sourcePosY;
    float sourcePosVarX;
    float sourcePosVarY;
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
	float	emissionRate;
	int		totalParticles;
	// TODO texture;
	// TODO blendFunc
	bool	alphaModifiesColor;

	// BOUND, PRIVATE
	QAtlas*	_atlas;

	// tolua_end

	// UNBOUND

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_PARTICLES_H
