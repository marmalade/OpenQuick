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
#include "tilemap_parallax_nodes/CCTMXTiledMap.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
QTiledMap::QTiledMap()
{
	// We wait until we know what init() type is required
	m_CCNode = new CCTMXTiledMap();
}
//------------------------------------------------------------------------------
QTiledMap::~QTiledMap()
{
}
//------------------------------------------------------------------------------
void QTiledMap::init(const char *tmxFile)
{
	CCTMXTiledMap* pCCNode = (CCTMXTiledMap*)m_CCNode;
	pCCNode->initWithTMXFile(tmxFile);
}
//------------------------------------------------------------------------------
void QTiledMap::setLayerXY(int id, float x, float y)
{
	CCTMXTiledMap* pCCNode = (CCTMXTiledMap*)m_CCNode;
	CCTMXLayer* pLayer = (CCTMXLayer*)pCCNode->getChildByTag(id);
	pLayer->setPosition(ccp(x, y));
}

QUICK_NAMESPACE_END;
