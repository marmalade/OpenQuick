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
\file QFilter.h
\brief Effect Filter objects.
*/
//------------------------------------------------------------------------------
#ifndef __QFILTER_H__
#define __QFILTER_H__

#include "cocos2d.h"
#include "QColor.h"

#define SHADER_STRING(text) #text

USING_NS_CC;

#define FILTERNAME(NAME) static const char * getName() { return NAME; }

// tolua_begin
namespace quick {
    // tolua_end

    //------------------------------------------------------------------------------
    // QFilterData
    //------------------------------------------------------------------------------
    struct  QFilterData { // tolua_export
        QFilterData() : 
            x(0.f),
            y(0.f),
            angle(0.f),
            intensity(0.f),
            contrast(1.f),
            sensitivity(0.4f),
            smoothing(0.1f),
            scale(1.0f),
            radius(1.0f),
            spacing(1.0f),
            lineWidth(0.1f),
            exposure(0.f)
        {
            
            color = ccc4f(1.0f, 1.0f, 1.0f, 1.0f);
        }
        // tolua_begin
        std::string name;   // Filter name

        float x;            // Blur X, Bulge X
        float y;            // Blur Y, Bulge Y

        float angle;        // Hue 0-360
        float intensity;    // Brightness 0-1, Emboss 0-4, Saturation 0-1
        float contrast;     // Contrast 0-4

        float sensitivity;  // Chromakey 0-1
        float smoothing;    // Chromakey 0-1

        float radius;       // Bulge
        float scale;        // Bulge

        float spacing;      // Crosshatch 
        float lineWidth;    // Crosshatch
        
        float exposure;     // Exposure -5-5

        QColor color;       // Chromakey, 

        // tolua_end

    }; // tolua_export

    // tolua_begin
}
// tolua_end

namespace quick {

    // Basic filter class
    class QFilter {
    protected:
        QFilter();
    public:        
        virtual ~QFilter();
        virtual void sync();

        /*! Create an effect
        @param filterData Filter data needed to create a filter
        @param sprite An object to use the filter
        */
        static QFilter* create(QFilterData* filterData, cocos2d::CCSprite* sprite);        
    protected:
        /*! Initialization method
        @param filterData Filter data needed to create a filter
        @param sprite An object to use the filter
        */
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
    
        /*! Create a program
        @param name Name associated with the program
        @param vShaderByteArray Vertex shader data
        @param fShaderByteArray Fragment shader data
        */
        static CCGLProgram* createProgram(const char * name, const GLchar* vShaderByteArray, const GLchar* fShaderByteArray);

        QFilterData*        m_filterData;
        cocos2d::CCSprite*    m_Sprite;
        CCGLProgram *        m_ShaderProgram;
    };
    //------------------------------------------------------------------------------
    // QBlurFilter
    //------------------------------------------------------------------------------
    /**
    The QBlurFilter object provides a link between filter data and shader program
    */
    class QBlurFilter : public QFilter {
    public:
        FILTERNAME("blur")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_BlurLocation;
    };


    
    //------------------------------------------------------------------------------
    // QEmbossFilter
    //------------------------------------------------------------------------------
    /**
    The QEmbossFilter object provides a link between filter data and shader program
    */
    class QEmbossFilter : public QFilter {
    public:
        FILTERNAME("emboss")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_IntensityLocation;
        GLuint m_ResolutionLocation;
        
        CCSize m_ScreenResolution;
    };

    //------------------------------------------------------------------------------
    // QBulgeFilter
    //------------------------------------------------------------------------------
    /**
    The QBulgeFilter object provides a link between filter data and shader program
    */
    class QBulgeFilter : public QFilter {
    public:
        FILTERNAME("bulge")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_AspectRatioLocation;
        GLuint m_CenterLocation;
        GLuint m_RadiusLocation;
        GLuint m_ScaleLocation;

        float m_AspectRatio;
    };

    //------------------------------------------------------------------------------
    // QCrosshatchFilter
    //------------------------------------------------------------------------------
    /**
    The QCrosshatchFilter object provides a link between filter data and shader program
    */
    class QCrosshatchFilter : public QFilter {
    public:
        FILTERNAME("crosshatch")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_LineWidthLocation;
        GLuint m_SpacingLocation;
    };

    //------------------------------------------------------------------------------
    // QInvertFilter
    //------------------------------------------------------------------------------
    /**
    The QInvertFilter object provides a link between filter data and shader program
    */
    class QInvertFilter : public QFilter {
    public:
        FILTERNAME("invert")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
    };

    //------------------------------------------------------------------------------
    // QGrayscaleFilter
    //------------------------------------------------------------------------------
    /**
    The QGrayscaleFilter object provides a link between filter data and shader program
    */
    class QGrayscaleFilter : public QFilter {
    public:
        FILTERNAME("grayscale")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
    };

    //------------------------------------------------------------------------------
    // QHueFilter
    //------------------------------------------------------------------------------
    /*
    The QHueFilter object provides a link between filter data and shader program
    */    
    class QHueFilter : public QFilter {
    public:
        FILTERNAME("hue")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_HueAngleLocation;
    };

    //------------------------------------------------------------------------------
    // QBrightnessFilter
    //------------------------------------------------------------------------------
    /*
    The QBrightnessFilter object provides a link between filter data and shader program
    */
    class QBrightnessFilter : public QFilter {
    public:
        FILTERNAME("brightness")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_BirghtnessLocation;
    };
    //------------------------------------------------------------------------------
    // QContrastFilter
    //------------------------------------------------------------------------------
    /*
    The QContrastFilter object provides a link between filter data and shader program
    */
    class QContrastFilter : public QFilter {
    public:
        FILTERNAME("contrast")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_ContrastLocation;
    };
    //------------------------------------------------------------------------------
    // QExposureFilter
    //------------------------------------------------------------------------------
    /*
    The QExposureFilter object provides a link between filter data and shader program
    */
    class QExposureFilter : public QFilter {
    public:
        FILTERNAME("exposure")
            virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_ExposureLocation;
    };
    //------------------------------------------------------------------------------
    // QSaturationFilter
    //------------------------------------------------------------------------------
    /*
    The QSaturationFilter object provides a link between filter data and shader program
    */
    class QSaturationFilter : public QFilter {
    public:
        FILTERNAME("saturation")
            virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint m_SaturationLocation;
    };
    //------------------------------------------------------------------------------
    // QChromaKeyFilter
    //------------------------------------------------------------------------------
    /*
    The QChromaKeyFilter object provides a link between filter data and shader program
    */
    class QChromaKeyFilter : public QFilter {
    public:
        FILTERNAME("chromakey")
        virtual bool init(QFilterData* filterData, cocos2d::CCSprite* sprite);
        virtual void sync();
    protected:
        GLuint  m_ColorLocation;
        GLuint m_SensitivityLocation;
        GLuint m_SmoothingLocation;
    };
}

#endif /* __QFILTER_H__ */
