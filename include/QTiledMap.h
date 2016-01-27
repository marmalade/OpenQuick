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

#ifndef __Q_TILEDMAP_H
#define __Q_TILEDMAP_H

#include "QNode.h"
#include "CCTMXTiledMap.h"
#include "CCTMXLayer.h"
#include "CCTMXObjectGroup.h"

// tolua_begin
namespace quick {
// tolua_end

class QSprite;

//------------------------------------------------------------------------------
// QTiledMapObject
//------------------------------------------------------------------------------
class QTiledMapObject { // tolua_export
public:
	// tolua_begin
	// BOUND, PRIVATE
	QTiledMapObject(cocos2d::CCDictionary* pCCDict);
	~QTiledMapObject();

	// BOUND, PUBLIC

	/** return the value for the specific property name */
	const char* getProperty(const char* propname)
	{
		cocos2d::CCString* pCCS = (cocos2d::CCString*)m_CCDict->objectForKey(propname);
		return pCCS ? pCCS->getCString() : "";
	}

	// PRIVATE
	std::string name;
	cocos2d::CCDictionary* m_CCDict;

}; // tolua_export

//------------------------------------------------------------------------------
// QTiledMapObjectGroup
//------------------------------------------------------------------------------
class QTiledMapObjectGroup { // tolua_export
public:
	// tolua_begin
	// BOUND, PRIVATE
	QTiledMapObjectGroup(cocos2d::CCTMXObjectGroup* pCCObject);
	~QTiledMapObjectGroup();

	// BOUND, PUBLIC

	/** return the value for the specific property name */
	const char* getProperty(const char* propname);

	// Get named object
	QTiledMapObject* getObjectNamed(const char* objname);

	// PRIVATE
	std::string name;
	cocos2d::CCTMXObjectGroup* m_CCObject;
	std::vector<QTiledMapObject*> m_TiledMapObjects;

}; // tolua_export

//------------------------------------------------------------------------------
// QTiledMapLayer
//------------------------------------------------------------------------------
class QTiledMapLayer : public QNode { // tolua_export
public:
	// tolua_begin
	// BOUND, PRIVATE
    virtual const char* _getToLuaClassName() { return "quick::QTiledMapLayer"; }
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
	QTiledMapLayer(cocos2d::CCTMXLayer* pLayer);
	~QTiledMapLayer();

	static QSprite* _activeQSprite; // for passing between Lua/C++

	// BOUND, PUBLIC
	void sync();
	void reverseSync();

	QVec2 layerSize;		// TODO MAKE READONLY
	QVec2 mapTileSize;		// TODO MAKE READONLY
	int layerOrientation;	// TODO MAKE READONLY

    /** dealloc the map that contains the tile position from memory.
    Unless you want to know at runtime the tiles positions, you can safely call this method.
    If you are going to call layer->tileGIDAt() then, don't release the map
    */
	void releaseMap() { ((cocos2d::CCTMXLayer*)m_CCNode)->releaseMap(); }

    /** returns the tile (CCSprite) at a given a tile coordinate.
    The returned CCSprite will be already added to the CCTMXLayer. Don't add it again.
    The CCSprite can be treated like any other CCSprite: rotated, scaled, translated, opacity, color, etc.
    You can remove either by calling:
    - layer->removeChild(sprite, cleanup);
    - or layer->removeTileAt(ccp(x,y));
    */
	// NOW DEFINED IN QTILEMAP.LUA
//    QSprite* getSpriteAtGridRef(int x, int y);
    QSprite* _checkSpriteAtGridRef(int x, int y); // PRIVATE
	void _setActiveSpriteCCNode(); // PRIVATE

    /** returns the tile gid at a given tile coordinate.
    if it returns 0, it means that the tile is empty.
    This method requires the the tile map has not been previously released (eg. don't call layer->releaseMap())
	It also returns the tile flags.
     */
	unsigned int getGIDAtGridRef(int x, int y, unsigned int* flags=0)
	{
		cocos2d::CCTMXLayer* pCCTL = (cocos2d::CCTMXLayer*)m_CCNode;
		unsigned int gid = pCCTL->tileGIDAt(ccp(x, y), (cocos2d::ccTMXTileFlags*)flags);
		return gid;
	}

    /** sets the tile gid (gid = tile global id) at a given tile coordinate.
    The Tile GID can be obtained by using the method "tileGIDAt" or by using the TMX editor -> Tileset Mgr +1.
    If a tile is already placed at that position, then it will be removed.
    */
    void setGIDAtGridRef(int x, int y, unsigned int gid, unsigned int flags=0)
	{
		cocos2d::CCTMXLayer* pCCTL = (cocos2d::CCTMXLayer*)m_CCNode;
		pCCTL->setTileGID(gid, ccp(x, y), (cocos2d::ccTMXTileFlags)flags);
	}

    /** removes a tile at given tile coordinate */
    void _removeTileAtGridRef(int x, int y); // PRIVATE

    /** returns the position in points of a given tile coordinate */
    void getPosAtGridRef(int x, int y, float* px, float* py)
	{
		cocos2d::CCTMXLayer* pCCTL = (cocos2d::CCTMXLayer*)m_CCNode;
		cocos2d::CCPoint p = pCCTL->positionAt(ccp(x, y));
		*px = p.x;
		*py = p.y;
	}

    /** Creates the tiles */
    void setupTiles()
	{
		cocos2d::CCTMXLayer* pCCTL = (cocos2d::CCTMXLayer*)m_CCNode;
		pCCTL->setupTiles();
	}

	/** return the value for the specific property name */
	const char* getProperty(const char* propname)
	{
		cocos2d::CCTMXLayer* pCCTL = (cocos2d::CCTMXLayer*)m_CCNode;
		cocos2d::CCString* pCCS = pCCTL->propertyNamed(propname);
		return pCCS ? pCCS->getCString() : "";
	}

	// tolua_end
	// UNBOUND
	static cocos2d::CCSprite* s_ActiveCCSprite;

}; // tolua_export

//------------------------------------------------------------------------------
// QTiledMap
//------------------------------------------------------------------------------
// Our tiled map class
class QTiledMap : public QNode { // tolua_export
public:
	// tolua_begin
	// BOUND, PRIVATE
    virtual const char* _getToLuaClassName() { return "quick::QTiledMap"; }
    std::string __tostring() { return "<>"; }
    void* __serialize() { return NULL; }
	QTiledMap();
	~QTiledMap();
	
	int _getCCNodeNumChildren();
	QTiledMapLayer* _createQTiledMapLayer(int layerID);
	
	// BOUND, PUBLIC
	void sync();
	void reverseSync();
	QVec2 mapSize;			// Map size in tiles. TODO MAKE READONLY
	QVec2 tileSize;			// Tile size in pixels. TODO MAKE READONLY
	int mapOrientation;		// Map orientation. TODO MAKE READONLY

	void init(const char *tmxFile);

	// Get the named layer
	QTiledMapLayer* getLayerNamed(const char *layerName)
	{
		cocos2d::CCTMXTiledMap* pCCNode = (cocos2d::CCTMXTiledMap*)m_CCNode;
		cocos2d::CCTMXLayer* pCCLayer = pCCNode->layerNamed(layerName);
		if (pCCLayer)
		{
			QTiledMapLayer* pLayer = (QTiledMapLayer*)pCCLayer->m_uID;
			return pLayer;
		}
		return NULL;
	}

    // Get the named object group
    QTiledMapObjectGroup* getObjectGroupNamed(const char *groupName)
	{
		cocos2d::CCTMXTiledMap* pCCNode = (cocos2d::CCTMXTiledMap*)m_CCNode;
		cocos2d::CCTMXObjectGroup* pCCOG = pCCNode->objectGroupNamed(groupName);
		if (pCCOG)
		{
			QTiledMapObjectGroup* pTMOG = (QTiledMapObjectGroup*)pCCOG->m_uID;
			return pTMOG;
		}
		return NULL;
	}

	/** return the value for the specific property name */
	const char* getProperty(const char* propname);

 	// tolua_end

	// UNBOUND

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_TILEDMAP_H
