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

#include "QNode.h"
#include "QDirector.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"
#include <stdlib.h>

USING_NS_CC;

QUICK_NAMESPACE_BEGIN;

int QNode::g_GUID = 0;

// TODO - OPTIMISE!
std::string convertInt(int number)
{
    if (number == 0)
        return "0";
    std::string temp="";
    std::string returnvalue="";
    while (number>0)
    {
        temp+=number%10+48;
        number/=10;
    }
    for (int i=0;i<(int)temp.length();i++)
        returnvalue+=temp[temp.length()-i-1];
    return returnvalue;
}

//------------------------------------------------------------------------------
// QNode
//------------------------------------------------------------------------------
QNode::QNode()
{
    m_Parent = NULL;

    // Set name from GUID
    g_GUID++;
    name = convertInt(g_GUID);

    x = y = w = h = 0.0f;
    xAnchor = yAnchor = 0.0f; // from Quick 1.0, all derived types have anchor default to (0,0)
    xScale = yScale = 1.0f;
    xSkew = ySkew = 0.0f;
    rotation = 0.0f;

    color = g_QDirector->nodesColor;
    alpha = 1.0f;
    _alphaInternal = 1.0f;

    _timersPaused = false;
    _tweensPaused = false;
    _timersTimeScale = 1.0f;
    _tweensTimeScale = 1.0f;

    zOrder = 0;
    m_ZOrderLast = 0;

    isVisible = true;
    isTouchable = true;

    debugDraw = false;
    debugDrawColor.set(0xff, 0xff, 0xff, 0xff);

    isSynced = true;

    clipX = 0.0f;
    clipY = 0.0f;
    clipW = 0.0f;
    clipH = 0.0f;

	// Cocos2dx
	m_CCNode = NULL; // assume always autoreleased
	m_ManageCCNodeLifeCycle = true; // very rarely, derived QNodes will set to false

    // Physics
    physics = NULL;
    m_Program = NULL;
}
//------------------------------------------------------------------------------
QNode::~QNode()
{
    // Destroy cocos2d stuff
    if (m_CCNode)
	{
		if (m_ManageCCNodeLifeCycle)
		{
			m_CCNode->cleanup();
			CC_SAFE_RELEASE_NULL(m_CCNode);
		}
		else
		{
			// Sometimes we use m_uID to point back to the 
			// related 'Q' object. If we are not managing the CCNode
			// lifecycle, we must at least break this link
			m_CCNode->m_uID = 0;
		}
	}
}
//------------------------------------------------------------------------------
void QNode::_createCCNode()
{
    // If explicitly constructing a QNode (rather than a derived object), then
    // we must call this to ensure a CCNode is created... otherwise the Cocos2d
    // node hierarchy can be broken.
    CCAssert(!m_CCNode, "Cocos2d node already exists");

	m_CCNode = CCNode::create();
    m_CCNode->retain();
}
//------------------------------------------------------------------------------
void QNode::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
        return;

    if (physics)
        physics->_sync();

	// cocos stuff
	if (m_CCNode)
	{
		m_CCNode->setPosition(x, y);
		m_CCNode->setScaleX(xScale);
		m_CCNode->setScaleY(yScale);
		m_CCNode->setSkewX(xSkew);
		m_CCNode->setSkewY(ySkew);
		m_CCNode->setRotation(rotation);

        // HACK
        m_CCNode->setContentSize(CCSize(w, h));
		m_CCNode->setAnchorPoint(ccp(1000.0f, 1000.0f));
        m_CCNode->setAnchorPoint(ccp(xAnchor, yAnchor));

		m_CCNode->setVisible(isVisible);		// MH: Renamed in CC 2.0.3 from setIsVisible to setVisible

        if  (
            (zOrder != m_ZOrderLast) &&
            (m_CCNode->getParent())
            )
        {
            m_CCNode->getParent()->reorderChild(m_CCNode, zOrder);
            m_ZOrderLast = zOrder;
        }
	}
}
//------------------------------------------------------------------------------
void QNode::reverseSync()
{
    // Only sync if sync is enabled
    if (!isSynced)
        return;

 	// cocos stuff
	if (m_CCNode)
	{
		x = m_CCNode->getPosition().x;
		y = m_CCNode->getPosition().y;
		xScale = m_CCNode->getScaleX();
		yScale = m_CCNode->getScaleX();
		xSkew = m_CCNode->getSkewX();
		ySkew = m_CCNode->getSkewY();
		rotation = m_CCNode->getRotation();

		isVisible = m_CCNode->isVisible();
		zOrder = m_CCNode->getZOrder();
	}
}
//------------------------------------------------------------------------------
void QNode::visit()
{
    sync();
    m_CCNode->visit();
}
//------------------------------------------------------------------------------
bool QNode::_isChild(QNode* pChild)
{
    // Check if pChild is really a child
    std::vector<QNode*>::iterator itC = m_Children.begin();
    std::vector<QNode*>::iterator etC = m_Children.end();
    for (; itC != etC; ++itC)
    {
        if (*itC == pChild)
            return true;
    }
    return false;
}
//------------------------------------------------------------------------------
void QNode::_setParent(QNode* pParent)
{
    if (m_Parent)
        m_Parent->_removeChild(this); // also handles CCNodes

    m_Parent = pParent;
	if (m_ManageCCNodeLifeCycle == true)
	{
        CCAssert(pParent->m_CCNode, "Null ptr");
        CCAssert(m_CCNode, "Null ptr");
        pParent->m_CCNode->addChild(m_CCNode, zOrder);
    }
    m_ZOrderLast = zOrder;
}
//------------------------------------------------------------------------------
void QNode::_addChild(QNode* pChild)
{
    if (pChild->m_Parent)
        pChild->m_Parent->_removeChild(pChild); // also handles CCNodes

    m_Children.push_back(pChild);
    pChild->m_Parent = this;

	if (pChild->m_ManageCCNodeLifeCycle == true)
	{
        CCAssert(m_CCNode, "Null ptr");
        CCAssert(pChild->m_CCNode, "Null ptr");
        m_CCNode->addChild(pChild->m_CCNode, pChild->zOrder);
    }
    pChild->m_ZOrderLast = pChild->zOrder;
}
//------------------------------------------------------------------------------
void QNode::_removeChild(QNode* pChild)
{
    // Assert this child thinks we're its parent
    CCAssert(pChild->m_Parent == this, "Child does not think we're its parent");

    // Assert child is in our children list
    CCAssert(_isChild(pChild), "Trying to remove a 'child' which is not really a child of this node");

    // Remove child from our children list
    std::vector<QNode*>::iterator itC = m_Children.begin();
    std::vector<QNode*>::iterator etC = m_Children.end();
    for (; itC != etC; ++itC)
    {
        if (*itC == pChild)
        {
            m_Children.erase(itC);
            break;
        }
    }
    pChild->m_Parent = NULL;

	if (pChild->m_ManageCCNodeLifeCycle == true)
        pChild->m_CCNode->removeFromParentAndCleanup(false);
}
//------------------------------------------------------------------------------
bool QNode::isPointInside(float x, float y)
{
    if (w != 0.0f || h != 0.0f)
    {
        CCPoint pws(x, y);
        CCPoint pns = m_CCNode->convertToNodeSpace(pws);

        // PJC Removed code for anchors here as it appears to be handled above

        CCRect bb(0.f, 0.f, w, h);
        return bb.containsPoint( pns);
    }
    return false;
}
//------------------------------------------------------------------------------
void QNode::getPointInWorldSpace(float lx, float ly, float& wx, float& wy)
{
    if (m_CCNode)
    {
        CCPoint pi(lx, ly);
        CCPoint pr = m_CCNode->convertToWorldSpace(pi);
        wx = pr.x;
        wy = pr.y;
    }
}
//------------------------------------------------------------------------------
void QNode::getPointInLocalSpace(float wx, float wy, float& lx, float& ly)
{
    if (m_CCNode)
    {
        CCPoint pi(wx, wy);
        CCPoint pr = m_CCNode->convertToNodeSpace(pi);
        lx = pr.x;
        ly = pr.y;
    }
}
//------------------------------------------------------------------------------
void QNode::setGLProgram(QNodeGLProgram* Program)
{
    if (m_CCNode)
    {
        m_Program = Program;
        m_CCNode->setShaderProgram(m_Program->m_CCProgram);
    }
}
//------------------------------------------------------------------------------
QNodeGLProgram* QNode::getGLProgram()
{
    if (m_Program == NULL && m_CCNode->getShaderProgram() != NULL)
    {
        m_Program = new QNodeGLProgram();
        m_Program->m_CCProgram = m_CCNode->getShaderProgram();
    }
    return m_Program;
}
//------------------------------------------------------------------------------
QUICK_NAMESPACE_END;
