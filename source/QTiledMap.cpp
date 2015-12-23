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

#include "QTiledMap.h"
#include "QLuaHelpers.h"
#include "QSprite.h"
#include "CCTMXTiledMap.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;

QSprite* QTiledMapLayer::_activeQSprite = NULL;
CCSprite* QTiledMapLayer::s_ActiveCCSprite = NULL;

//------------------------------------------------------------------------------
// QTiledMapObject
//------------------------------------------------------------------------------
QTiledMapObject::QTiledMapObject(cocos2d::CCDictionary* pCCDict)
{
	m_CCDict = pCCDict;
}
//------------------------------------------------------------------------------
QTiledMapObject::~QTiledMapObject()
{
}

//------------------------------------------------------------------------------
// QTiledMapObjectGroup
//------------------------------------------------------------------------------
QTiledMapObjectGroup::QTiledMapObjectGroup(CCTMXObjectGroup* pCCObject)
{
	m_CCObject = pCCObject;

	// Copy name field
	name = pCCObject->getGroupName();

	// Create QTiledMapObject for each CCObject
    CCObject* og;
    CCARRAY_FOREACH(pCCObject->getObjects(), og)
	{
		CCDictionary* pCCDict = (CCDictionary*)og;
		QTiledMapObject* pTMO = new QTiledMapObject((cocos2d::CCDictionary*)og);
		m_TiledMapObjects.push_back(pTMO);
	}
}
//------------------------------------------------------------------------------
QTiledMapObjectGroup::~QTiledMapObjectGroup()
{
	// Delete QTiledMapObjects
	std::vector<QTiledMapObject*>::iterator itO = m_TiledMapObjects.begin();
	std::vector<QTiledMapObject*>::iterator etO = m_TiledMapObjects.end();
	for (; itO != etO; ++itO)
		delete *itO;
}
//------------------------------------------------------------------------------
const char* QTiledMapObjectGroup::getProperty(const char* propname)
{
	// Get named property
	CCString* pCCS = m_CCObject->propertyNamed(propname);
	return pCCS ? pCCS->getCString() : "";
}
//------------------------------------------------------------------------------
QTiledMapObject* QTiledMapObjectGroup::getObjectNamed(const char* objname)
{
	// Find the object with "name" key whose value is objname
	std::vector<QTiledMapObject*>::iterator itO = m_TiledMapObjects.begin();
	std::vector<QTiledMapObject*>::iterator etO = m_TiledMapObjects.end();
	for (; itO != etO; ++itO)
	{
		QTiledMapObject* pTMO = *itO;
		CCString* name = (CCString*)pTMO->m_CCDict->objectForKey("name");
		if (!name->compare(objname))
			return pTMO;
	}
	return NULL;
}

//------------------------------------------------------------------------------
// QTiledMapLayer
//------------------------------------------------------------------------------
QTiledMapLayer::QTiledMapLayer(CCTMXLayer* pLayer)
{
	m_CCNode = pLayer;
}
//------------------------------------------------------------------------------
QTiledMapLayer::~QTiledMapLayer()
{
}
//------------------------------------------------------------------------------
void QTiledMapLayer::sync()
{
	// Only sync if sync is enabled
    if (!isSynced)
    {
        return;
    }

	// Set CCNode transform etc.
	QNode::sync();

	// Set CCTMXLayerName from QNode 'name' property
	CCTMXLayer* pCCTL = (CCTMXLayer*)m_CCNode;
	pCCTL->setLayerName(name.c_str());
}
//------------------------------------------------------------------------------
void QTiledMapLayer::reverseSync()
{
	CCTMXLayer* pCCTL = (CCTMXLayer*)m_CCNode;
	
	// Copy stuff from CCNode
	layerSize.x = pCCTL->getLayerSize().width;
	layerSize.y = pCCTL->getLayerSize().height;
	mapTileSize.x = pCCTL->getMapTileSize().width;
	mapTileSize.y = pCCTL->getMapTileSize().height;
	layerOrientation = pCCTL->getLayerOrientation();

	// Set QNode 'name' property from CCTMXLayer name
	name = pCCTL->getLayerName();
}
//------------------------------------------------------------------------------
void QTiledMapLayer::_removeTileAtGridRef(int x, int y)
{
	cocos2d::CCTMXLayer* pCCTL = (cocos2d::CCTMXLayer*)m_CCNode;

	// Assume Lua removeTileAtGridRef() has already removed any
	// QSprite from the scene graph
	pCCTL->m_uID = 0;

	// CC remove
	pCCTL->removeTileAt(ccp(x, y));
}
//------------------------------------------------------------------------------
QSprite* QTiledMapLayer::_checkSpriteAtGridRef(int x, int y)
{
	CCTMXLayer* pCCTL = (CCTMXLayer*)m_CCNode;
	CCSprite* pCCSprite = pCCTL->tileAt(ccp(x, y));

	// Does CCSprite already have a corresponding QSprite?
	QSprite* pSprite = (QSprite*)(void*)pCCSprite->m_uID;
	if ((unsigned long)(void*)pSprite < 0xffff)
	{
		pSprite = NULL;
		_activeQSprite = NULL;
		s_ActiveCCSprite = pCCSprite;
	}
	return pSprite;
}
//------------------------------------------------------------------------------
void QTiledMapLayer::_setActiveSpriteCCNode()
{
	QAssert(_activeQSprite, ("No active QSprite"));
	QAssert(s_ActiveCCSprite, ("No active CCSprite"));

	// QSprite and CCSprite must point to each other
	_activeQSprite->m_CCNode = (CCNode*)s_ActiveCCSprite;
	s_ActiveCCSprite->m_uID = (unsigned long)(void*)_activeQSprite;

	// Copy data from CCSprite to QSprite
	_activeQSprite->reverseSync();
}

//------------------------------------------------------------------------------
// QTiledMap
//------------------------------------------------------------------------------
QTiledMap::QTiledMap()
{
	// We wait until we know what init() type is required
	m_CCNode = new CCTMXTiledMap();
}
//------------------------------------------------------------------------------
QTiledMap::~QTiledMap()
{
	CCTMXTiledMap* pCCNode = (CCTMXTiledMap*)m_CCNode;

	// CCTMXObjectGroups have ownership of QTiledMapObjectGroups
	CCArray* pOG = pCCNode->getObjectGroups();
    CCObject* og;
    CCARRAY_FOREACH(pOG, og)
	{
		QTiledMapObjectGroup* pTMOG = (QTiledMapObjectGroup*)og->m_uID;
		delete pTMOG;
	}
}
//------------------------------------------------------------------------------
void QTiledMap::reverseSync()
{
	CCTMXTiledMap* pCCNode = (CCTMXTiledMap*)m_CCNode;
	
	// Copy stuff from CCNode
	mapSize.x = pCCNode->getMapSize().width;
	mapSize.y = pCCNode->getMapSize().height;
	tileSize.x = pCCNode->getTileSize().width;
	tileSize.y = pCCNode->getTileSize().height;
	mapOrientation = pCCNode->getMapOrientation();
}
//------------------------------------------------------------------------------
void QTiledMap::sync()
{
    // Only sync if sync is enabled
    if (!isSynced)
        return;

    QNode::sync();

    // TODO WHAT ELSE?
}
//------------------------------------------------------------------------------
void QTiledMap::init(const char *tmxFile)
{
	CCTMXTiledMap* pCCNode = (CCTMXTiledMap*)m_CCNode;
	pCCNode->initWithTMXFile(tmxFile);

	// Note: setting up QTiledMap children to be QTiledMapLayers
	// is done on the Lua side, in director:createTiledMap()

	// Run through m_pObjectGroups
	// For each CCTMXObjectGroup, create a QTiledMapObjectGroup
	// Former points to latter, and assumes ownership
	// NOTE: there are no Lua-side references created as part of this
	// process; so QTiledMapObjectGroup destruction always happens
	// explicitly through ~QTiledMap()
	CCArray* pOG = pCCNode->getObjectGroups();
    CCObject* og;
    CCARRAY_FOREACH(pOG, og)
	{
		QTiledMapObjectGroup* pTMOG = new QTiledMapObjectGroup((CCTMXObjectGroup*)og);
		og->m_uID = (unsigned long)pTMOG;
	}

	// Copy data from CC object to Q object
	reverseSync();
}
//------------------------------------------------------------------------------
int QTiledMap::_getCCNodeNumChildren()
{
	CCTMXTiledMap* pCCNode = (CCTMXTiledMap*)m_CCNode;
	return pCCNode->getChildrenCount();
}
//------------------------------------------------------------------------------
QTiledMapLayer* QTiledMap::_createQTiledMapLayer(int layerID)
{
	CCTMXTiledMap* pCCNode = (CCTMXTiledMap*)m_CCNode;
	CCTMXLayer* pCCTL = (CCTMXLayer*)pCCNode->getChildByTag(layerID);
	QTiledMapLayer* pLayer = new QTiledMapLayer(pCCTL);

	// CC will handle parent-child relationship
	pLayer->m_ManageCCNodeLifeCycle = false;

	// Copy data from CC object to Q object
	pLayer->reverseSync();

	return pLayer;
}
//------------------------------------------------------------------------------
const char* QTiledMap::getProperty(const char* propname)
{
	CCTMXTiledMap* pCCTM = (CCTMXTiledMap*)m_CCNode;
	CCString* pCCS = pCCTM->propertyNamed(propname);
	return pCCS->getCString();
}

QUICK_NAMESPACE_END;
