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
	\file QSceneTextureBatch.h
	\brief Our cross between a BatchNode and a TextureAtlas.
*/
//------------------------------------------------------------------------------

#ifndef __Q_SCENETEXTUREBATCH_H
#define __Q_SCENETEXTUREBATCH_H

#include "QDefines.h"
#include "cocos2d.h"
#include "CCTextureAtlas.h"

QUICK_NAMESPACE_BEGIN;

class CCSprite2;

/*

- Define QSceneAtlas, which creates and owns a CCTextureAtlas:
m_pobTextureAtlas = new CCTextureAtlas();
m_pobTextureAtlas->initWithTexture(tex, capacity); // capacity is max quads using this atlas

- Each QScene maintains a list of owned QSceneAtlas objects.

- Whenever QSprite::draw() is called, we check if the owning scene's corresponding QSceneAtlas
exists; if not, we create it.

- QSprite::draw() does not render directly, it writes into the Quad objects of the QSceneAtlas's
CCTextureAtlas. See the code in CCSprite::updateTransform() which writes the CCSprite's m_sQuad
members... instead, we can write directly into the CCTextureAtlas's array of these

- AFTER calling ::draw on the standard CC scene graph, we call ::draw on all the scene's
QSceneAtlas objects. Each of these draws multiple quads (then resets itself)

- We assume that the vertex Z written by each CCSprite2::draw() reflects the node zOrder?
Where is m_fVertexZ written?
*/

//------------------------------------------------------------------------------
// QSceneTextureBatch
///------------------------------------------------------------------------------
/**
*/
class QSceneTextureBatch : public cocos2d::CCTextureAtlas
{
public:
    QSceneTextureBatch(cocos2d::CCTexture2D* pCCTex);
    ~QSceneTextureBatch();
    void draw();

    cocos2d::CCTexture2D* m_CCTex;
    CCSprite2* m_FirstSprite;
    int m_AtlasIndex;
};

QUICK_NAMESPACE_END;

#endif // __Q_SCENETEXTUREBATCH_H
