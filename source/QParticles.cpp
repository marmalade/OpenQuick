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

#include "QParticles.h"
#include "QAtlas.h"
#include "CCParticleSystemQuad.h"
#include "cocos2d.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
QParticles::QParticles()
{
	// We wait until we know what init() type is required
	m_CCNode = new CCParticleSystemQuad2();

    totalParticles = 200;
    particleCount = 0;

    emitterMode = kCCParticleModeGravity;
	emitterRate = 1.0f;

    memset(&modeGravity, 0, sizeof(modeGravityStruct));
    memset(&modeRadial, 0, sizeof(modeRadialStruct));

    duration = kCCParticleDurationInfinity;
    sourcePos = QVec2::g_Zero;
    sourcePosVar = QVec2::g_Zero;
	life = 1.0f;
    lifeVar = 0.0f;
    angle = 0.0f;
    angleVar = 0.0f;

    startSize = 2.0f;
    startSizeVar = 0.0f;
    endSize = 8.0f;
    endSizeVar = 0.0f;
	startColor = QColor(0x80, 0x80, 0x80, 0xff);
	startColorVar = QColor(0x00, 0x00, 0x00, 0x00);
	endColor = QColor(0x80, 0x80, 0x80, 0xff);
	endColorVar = QColor(0x00, 0x00, 0x00, 0x00);
	startSpin = 0.0f;
	startSpinVar = 0.0f;
	endSpin = 0.0f;
	endSpinVar = 0.0f;
	alphaModifiesColor = false;
}
//------------------------------------------------------------------------------
QParticles::~QParticles()
{
}
//------------------------------------------------------------------------------
void QParticles::_initWithPlist(const char* plist)
{
	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;

    // Init from plist file
	pCCNode->initWithFile(plist);

    // Because Cocos2d-x has set up the node members from the plist file, we should now
    // copy these back to the QParticles members
	syncReverse();

    pCCNode->setAnchorPoint(ccp(0, 0));
	pCCNode->m_bIsActive = true;
}
//------------------------------------------------------------------------------
void QParticles::_initWithNumber(int numParticles)
{
	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;

    // Init with total number of particles
    pCCNode->initWithTotalParticles(numParticles);
    totalParticles = numParticles;

    pCCNode->setAnchorPoint(ccp(0, 0));
	pCCNode->m_bIsActive = true;
}
//------------------------------------------------------------------------------
void QParticles::setAtlas(QAtlas* pAtlas)
{
	_atlas = pAtlas;
    ((CCParticleSystemQuad2*)m_CCNode)->setTexture(pAtlas->m_Texture);
}
//------------------------------------------------------------------------------
bool QParticles::addParticle()
{
	return ((CCParticleSystemQuad2*)m_CCNode)->addParticle();
}
//------------------------------------------------------------------------------
void QParticles::stop()
{
	((CCParticleSystemQuad2*)m_CCNode)->stopSystem();
}
//------------------------------------------------------------------------------
void QParticles::reset()
{
	((CCParticleSystemQuad2*)m_CCNode)->resetSystem();
}
//------------------------------------------------------------------------------
bool QParticles::isFull()
{
	return ((CCParticleSystemQuad2*)m_CCNode)->isFull();
}
//------------------------------------------------------------------------------
bool QParticles::isActive()
{
	return ((CCParticleSystemQuad2*)m_CCNode)->isActive();
}
//------------------------------------------------------------------------------
void QParticles::update(float dt)
{
	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;
	pCCNode->update(dt);
}
//------------------------------------------------------------------------------
void QParticles::sync()
{
	QNode::sync();

	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;
    pCCNode->setEmitterMode(emitterMode);
	pCCNode->setDuration(duration);
    pCCNode->setSourcePosition(ccp(sourcePos.x, sourcePos.y));
	pCCNode->setPosVar(ccp(sourcePosVar.x, sourcePosVar.y));
	pCCNode->setLife(life);
	pCCNode->setLifeVar(lifeVar);
	pCCNode->setAngle(angle);
	pCCNode->setAngleVar(angleVar);

	pCCNode->setStartSize(startSize);
    pCCNode->setStartSizeVar(startSizeVar);
    pCCNode->setEndSize(endSize);
    pCCNode->setEndSizeVar(endSizeVar);
	pCCNode->setStartColor(startColor.toCCC4F());
	pCCNode->setStartColorVar(startColorVar.toCCC4F());
	pCCNode->setEndColor(endColor.toCCC4F());
	pCCNode->setEndColorVar(endColorVar.toCCC4F());
	pCCNode->setStartSpin(startSpin);
	pCCNode->setStartSpinVar(startSpinVar);
	pCCNode->setEndSpin(endSpin);
	pCCNode->setEndSpinVar(endSpinVar);
	pCCNode->setEmissionRate(emitterRate);
	pCCNode->setTotalParticles(totalParticles);
	// TODO texture;
	// TODO blendFunc
	pCCNode->setOpacityModifyRGB(alphaModifiesColor);

    if (emitterMode == kCCParticleModeGravity)
    {
    	// modeGravity (gravity)
	    pCCNode->modeGravitySetGravity(modeGravity.gravity.x, modeGravity.gravity.y);
	    pCCNode->modeGravitySetSpeed(modeGravity.speed);
	    pCCNode->modeGravitySetSpeedVar(modeGravity.speedVar);
	    pCCNode->modeGravitySetTangentialAccel(modeGravity.tangentialAccel);
	    pCCNode->modeGravitySetTangentialAccelVar(modeGravity.tangentialAccelVar);
	    pCCNode->modeGravitySetRadialAccel(modeGravity.radialAccel);
	    pCCNode->modeGravitySetRadialAccelVar(modeGravity.radialAccelVar);
    }
    else
    {
	    // modeRadial (radial)
        pCCNode->modeRadialSetStartRadius(modeRadial.startRadius);
        pCCNode->modeRadialSetStartRadiusVar(modeRadial.startRadiusVar);
        pCCNode->modeRadialSetEndRadius(modeRadial.endRadius);
        pCCNode->modeRadialSetEndRadiusVar(modeRadial.endRadiusVar);
        pCCNode->modeRadialSetRotatePerSecond(modeRadial.rotatePerSecond);
        pCCNode->modeRadialSetRotatePerSecondVar(modeRadial.rotatePerSecondVar);
    }

    // Sync from CCNode back to QNode
    particleCount = pCCNode->getParticleCount();
}
//------------------------------------------------------------------------------
void QParticles::syncReverse()
{
	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;
    emitterMode = pCCNode->getEmitterMode();
	duration = pCCNode->getDuration();
    sourcePos.x = pCCNode->getSourcePosition().x;
    sourcePos.y = pCCNode->getSourcePosition().y;
	sourcePosVar.x = pCCNode->getPosVar().x;
	sourcePosVar.y = pCCNode->getPosVar().y;
	life = pCCNode->getLife();
	lifeVar = pCCNode->getLifeVar();
	angle = pCCNode->getAngle();
	angleVar = pCCNode->getAngleVar();

	startSize = pCCNode->getStartSize();
    startSizeVar = pCCNode->getStartSizeVar();
    endSize = pCCNode->getEndSize();
    endSizeVar = pCCNode->getEndSizeVar();
	startColor = pCCNode->getStartColor();
	startColorVar = pCCNode->getStartColorVar();
	endColor = pCCNode->getEndColor();
	endColorVar = pCCNode->getEndColorVar();
	startSpin = pCCNode->getStartSpin();
	startSpinVar = pCCNode->getStartSpinVar();
	endSpin = pCCNode->getEndSpin();
	endSpinVar = pCCNode->getEndSpinVar();
	emitterRate = pCCNode->getEmissionRate();
	totalParticles = pCCNode->getTotalParticles();
	// TODO texture;
	// TODO blendFunc
	alphaModifiesColor = pCCNode->getOpacityModifyRGB();

    if (emitterMode == kCCParticleModeGravity)
    {
    	// modeGravity (gravity)
        modeGravity.gravity.x = pCCNode->getGravity().x;
        modeGravity.gravity.y = pCCNode->getGravity().y;
        modeGravity.speed = pCCNode->getSpeed();
        modeGravity.speedVar = pCCNode->getSpeedVar();
        modeGravity.tangentialAccel = pCCNode->getTangentialAccel();
        modeGravity.tangentialAccelVar = pCCNode->getTangentialAccelVar();
        modeGravity.radialAccel = pCCNode->getRadialAccel();
        modeGravity.radialAccelVar = pCCNode->getRadialAccelVar();
    }
    else
    {
	    // modeRadial (radial)
        modeRadial.startRadius = pCCNode->getStartRadius();
        modeRadial.startRadiusVar = pCCNode->getStartRadiusVar();
        modeRadial.endRadius = pCCNode->getEndRadius();
        modeRadial.endRadiusVar = pCCNode->getEndRadiusVar();
        modeRadial.rotatePerSecond = pCCNode->getRotatePerSecond();
        modeRadial.rotatePerSecondVar = pCCNode->getRotatePerSecondVar();
    }
}

QUICK_NAMESPACE_END;
