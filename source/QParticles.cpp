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
#include "cocos2d.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
QParticles::QParticles()
{
	// We wait until we know what init() type is required
	m_CCNode = new CCParticleSystemQuad2();
}
//------------------------------------------------------------------------------
QParticles::~QParticles()
{
}
//------------------------------------------------------------------------------
void QParticles::init(const char* plist, int numParticles)
{
	// Initialise Cocos2dx node from plist file or total particles
	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;
	if (plist)
	{
		pCCNode->initWithFile(plist);
		syncReverse();
	}
	else
		pCCNode->initWithTotalParticles(numParticles);
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
void QParticles::update(float dt)
{
	((CCParticleSystemQuad2*)m_CCNode)->update(dt);
}
//------------------------------------------------------------------------------
void QParticles::sync()
{
	QNode::sync();

	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;
	pCCNode->setDuration(duration);
	pCCNode->setPosition(sourcePosX, sourcePosY);
	pCCNode->setPosVar(ccp(sourcePosVarX, sourcePosVarY));
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
	pCCNode->setEmissionRate(emissionRate);
	pCCNode->setTotalParticles(totalParticles);
	// TODO texture;
	// TODO blendFunc
	pCCNode->setOpacityModifyRGB(alphaModifiesColor);

	// modeA
	pCCNode->modeASetGravity(modeA.gravity.x, modeA.gravity.y);
	pCCNode->modeASetSpeed(modeA.speed);
	pCCNode->modeASetSpeedVar(modeA.speedVar);
	pCCNode->modeASetTangentialAccel(modeA.tangentialAccel);
	pCCNode->modeASetTangentialAccelVar(modeA.tangentialAccelVar);
	pCCNode->modeASetRadialAccel(modeA.radialAccel);
	pCCNode->modeASetRadialAccelVar(modeA.radialAccelVar);

	// TODO modeB
}
//------------------------------------------------------------------------------
void QParticles::syncReverse()
{
	CCParticleSystemQuad2* pCCNode = (CCParticleSystemQuad2*)m_CCNode;
	duration = pCCNode->getDuration();
	sourcePosX = pCCNode->getPositionX();
	sourcePosY = pCCNode->getPositionY();
	sourcePosVarX = pCCNode->getPosVar().x;
	sourcePosVarY = pCCNode->getPosVar().y;
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
	emissionRate = pCCNode->getEmissionRate();
	totalParticles = pCCNode->getTotalParticles(); // TODO CALL SETUP FUNC?
	// TODO texture;
	// TODO blendFunc
	alphaModifiesColor = pCCNode->getOpacityModifyRGB();
}



QUICK_NAMESPACE_END;
