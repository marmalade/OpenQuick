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

#include "QDefines.h"
#include "QFilter.h"
#include "QNode.h"

#include "shaders/CCShaderCache.h"    
#include "shaders/CCGLProgram.h"

#include "cocos2d.h"
//------------------------------------------------------------------------------
// Shader programs
//------------------------------------------------------------------------------
#include "shaders/qShader_Emboss_frag.h"
#include "shaders/qShader_Grayscale_frag.h"
#include "shaders/qShader_Brightness_frag.h"
#include "shaders/qShader_Contrast_frag.h"
#include "shaders/qShader_Exposure_frag.h"
#include "shaders/qShader_Saturation_frag.h"
#include "shaders/qShader_Blur_frag.h"
#include "shaders/qShader_Hue_frag.h"
#include "shaders/qShader_Crosshatch_frag.h"
#include "shaders/qShader_Bulge_frag.h"
#include "shaders/qShader_ChromaKey_frag.h"
#include "shaders/qShader_Invert_frag.h"
//------------------------------------------------------------------------------
USING_NS_CC;

QUICK_NAMESPACE_BEGIN;


#define CHECK_FILTER(CLASS) if(filterName == CLASS::getName()) { filter = new CLASS(); }

//------------------------------------------------------------------------------
// QFilter
//------------------------------------------------------------------------------
QFilter::QFilter() :
    m_filterData(NULL),
    m_Sprite(NULL),
    m_ShaderProgram(NULL)
{
}
//------------------------------------------------------------------------------
QFilter::~QFilter()
{
    if (m_Sprite)
    {
        m_Sprite->setShaderProgram(CCShaderCache::sharedShaderCache()->programForKey(kCCShader_PositionTextureColor));
        m_Sprite->release();
    }
}
//------------------------------------------------------------------------------
void QFilter::sync()
{

}
//------------------------------------------------------------------------------
bool QFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    m_filterData = filterData;
    m_Sprite = sprite;
    return true;
}
//------------------------------------------------------------------------------
QFilter* QFilter::create(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    string filterName = filterData->name;
    
    QFilter * filter = NULL;
    
    CHECK_FILTER(QBlurFilter)
    CHECK_FILTER(QEmbossFilter)
    CHECK_FILTER(QBulgeFilter)
    CHECK_FILTER(QCrosshatchFilter)
    CHECK_FILTER(QInvertFilter)
    CHECK_FILTER(QGrayscaleFilter)
    CHECK_FILTER(QHueFilter)
    CHECK_FILTER(QBrightnessFilter)
    CHECK_FILTER(QContrastFilter)    
    CHECK_FILTER(QChromaKeyFilter)
    CHECK_FILTER(QExposureFilter)
    CHECK_FILTER(QSaturationFilter)

    if (filter != NULL)
    {
        filter->init(filterData, sprite);
        sprite->retain();
    }
    
    return filter;
}
//------------------------------------------------------------------------------
CCGLProgram* QFilter::createProgram(const char * name, const GLchar* vShaderByteArray, const GLchar* fShaderByteArray)
{
    CCGLProgram * pShaderProgram = CCShaderCache::sharedShaderCache()->programForKey(name);

    if (pShaderProgram != NULL)
        return pShaderProgram;
    
    pShaderProgram = new CCGLProgram();
    pShaderProgram->initWithVertexShaderByteArray(vShaderByteArray, fShaderByteArray);

    pShaderProgram->addAttribute(kCCAttributeNamePosition, kCCVertexAttrib_Position);
    pShaderProgram->addAttribute(kCCAttributeNameColor, kCCVertexAttrib_Color);
    pShaderProgram->addAttribute(kCCAttributeNameTexCoord, kCCVertexAttrib_TexCoords);

    pShaderProgram->link();
    pShaderProgram->updateUniforms();

    CHECK_GL_ERROR_DEBUG();

    CCShaderCache::sharedShaderCache()->addProgram(pShaderProgram, name);

    return pShaderProgram;
}
//------------------------------------------------------------------------------
// QBlurFilter
//------------------------------------------------------------------------------

bool QBlurFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qBlur_frag);

    m_BlurLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "blurSize");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QBlurFilter::sync()
{
    CCSize s = m_Sprite->getContentSize();    

    m_ShaderProgram->use();
    m_ShaderProgram->setUniformLocationWith2f(m_BlurLocation, m_filterData->x / s.width, m_filterData->y / s.height);
    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QEmbossFilter
//------------------------------------------------------------------------------
bool QEmbossFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureA8Color_vert, qEmboss_frag);

    m_IntensityLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "intensity");
    m_ResolutionLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "resolution");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    m_ScreenResolution = CCDirector::sharedDirector()->getWinSize();

    return true;
}
//------------------------------------------------------------------------------
void QEmbossFilter::sync()
{
    m_ShaderProgram->use();

    m_ShaderProgram->setUniformLocationWith1f(m_IntensityLocation, m_filterData->intensity);
    m_ShaderProgram->setUniformLocationWith2f(m_ResolutionLocation, m_ScreenResolution.width, m_ScreenResolution.height);

    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QCrosshatchFilter
//------------------------------------------------------------------------------
bool QCrosshatchFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureA8Color_vert, qCrosshatch_frag);

    m_LineWidthLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "lineWidth");
    m_SpacingLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "crossHatchSpacing");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QCrosshatchFilter::sync()
{
    m_ShaderProgram->use();
    m_ShaderProgram->setUniformLocationWith1f(m_LineWidthLocation, m_filterData->lineWidth / 100.f);
    m_ShaderProgram->setUniformLocationWith1f(m_SpacingLocation, m_filterData->spacing / 100.0f);
    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QBulgeFilter
//------------------------------------------------------------------------------
bool QBulgeFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qBulge_frag);

    GLuint program = m_ShaderProgram->getProgram();

    m_AspectRatioLocation = glGetUniformLocation(program, "aspectRatio");
    m_CenterLocation = glGetUniformLocation(program, "center");
    m_RadiusLocation = glGetUniformLocation(program, "radius");
    m_ScaleLocation = glGetUniformLocation(program, "scale");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    CCSize s = CCDirector::sharedDirector()->getWinSize();
    m_AspectRatio = s.width / s.height;

    return true;
}
//------------------------------------------------------------------------------
void QBulgeFilter::sync()
{
    m_ShaderProgram->use();

    m_ShaderProgram->setUniformLocationWith1f(m_AspectRatioLocation, m_AspectRatio);
    m_ShaderProgram->setUniformLocationWith1f(m_RadiusLocation, m_filterData->radius);
    m_ShaderProgram->setUniformLocationWith1f(m_ScaleLocation, m_filterData->scale);
    m_ShaderProgram->setUniformLocationWith2f(m_CenterLocation, m_filterData->x, m_filterData->y);

    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QInvertFilter
//------------------------------------------------------------------------------
bool QInvertFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qInvert_frag);
    
    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
// QGrayscaleFilter
//------------------------------------------------------------------------------
bool QGrayscaleFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qGrayscale_frag);

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
// QHueFilter
//------------------------------------------------------------------------------
bool QHueFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureA8Color_vert, qHue_frag);

    m_HueAngleLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "hueAngle");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QHueFilter::sync()
{
    m_ShaderProgram->use();

    m_ShaderProgram->setUniformLocationWith1f(m_HueAngleLocation, m_filterData->angle);
}
//------------------------------------------------------------------------------
// QBrightnessFilter
//------------------------------------------------------------------------------
bool QBrightnessFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qBrightness_frag);

    m_BirghtnessLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "birghtness");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QBrightnessFilter::sync()
{
    m_ShaderProgram->use();
    m_ShaderProgram->setUniformLocationWith1f(m_BirghtnessLocation, m_filterData->intensity);
    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QContrastFilter
//------------------------------------------------------------------------------
bool QContrastFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureA8Color_vert, qContrast_frag);

    m_ContrastLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "contrast");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QContrastFilter::sync()
{
    m_ShaderProgram->use();

    m_ShaderProgram->setUniformLocationWith1f(m_ContrastLocation, m_filterData->contrast);

    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QExposureFilter
//------------------------------------------------------------------------------
bool QExposureFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qExposure_frag);

    m_ExposureLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "exposure");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QExposureFilter::sync()
{
    m_ShaderProgram->use();

    m_ShaderProgram->setUniformLocationWith1f(m_ExposureLocation, m_filterData->exposure);

    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QSaturationFilter
//------------------------------------------------------------------------------
bool QSaturationFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qSaturation_frag);

    m_SaturationLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "saturation");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QSaturationFilter::sync()
{
    m_ShaderProgram->use();

    m_ShaderProgram->setUniformLocationWith1f(m_SaturationLocation, m_filterData->intensity);

    m_ShaderProgram->updateUniforms();
}
//------------------------------------------------------------------------------
// QChromaKeyFilter
//------------------------------------------------------------------------------
bool QChromaKeyFilter::init(QFilterData* filterData, cocos2d::CCSprite* sprite)
{
    if (QFilter::init(filterData, sprite) == false)
        return false;

    m_ShaderProgram = createProgram(getName(), ccPositionTextureColor_vert, qChromaKey_frag);

    m_SensitivityLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "sensitivity");
    m_SmoothingLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "smoothing");
    m_ColorLocation = glGetUniformLocation(m_ShaderProgram->getProgram(), "colorToReplace");

    m_Sprite->setShaderProgram(m_ShaderProgram);

    return true;
}
//------------------------------------------------------------------------------
void QChromaKeyFilter::sync()
{
    m_ShaderProgram->use();

    m_ShaderProgram->setUniformLocationWith1f(m_SensitivityLocation, m_filterData->sensitivity);
    m_ShaderProgram->setUniformLocationWith1f(m_SmoothingLocation, m_filterData->smoothing);

    QColor color = m_filterData->color;
    m_ShaderProgram->setUniformLocationWith4f(m_ColorLocation, color.r, color.g, color.b, color.a);

    m_ShaderProgram->updateUniforms();

}
//------------------------------------------------------------------------------
QUICK_NAMESPACE_END;
