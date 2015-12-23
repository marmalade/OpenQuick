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

//#include "AppDelegate.h"
#include "QAudio.h"
#include "QLuaHelpers.h"

#include "cocos2d.h"
#include "cocoa/CCNS.h"
#include <stdlib.h>
#include "SimpleAudioEngine.h"

USING_NS_CC;
using namespace CocosDenshion;

QUICK_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QAudio
//------------------------------------------------------------------------------
QAudio::QAudio()
{
}
//------------------------------------------------------------------------------
QAudio::~QAudio()
{
}
//------------------------------------------------------------------------------
void QAudio::loadStream(std::string fileName)
{
    SimpleAudioEngine::sharedEngine()->preloadBackgroundMusic(fileName.c_str());
}
//------------------------------------------------------------------------------
void QAudio::playStreamWithLoop(std::string fileName, bool bLoop)
{
    SimpleAudioEngine::sharedEngine()->playBackgroundMusic(fileName.c_str(), bLoop);
}
//------------------------------------------------------------------------------
void QAudio::stopStream(void)
{
    SimpleAudioEngine::sharedEngine()->stopBackgroundMusic();
}
//------------------------------------------------------------------------------
void QAudio::pauseStream(void)
{
    SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}
//------------------------------------------------------------------------------
void QAudio::resumeStream(void)
{
    SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
//------------------------------------------------------------------------------
void QAudio::rewindStream(void)
{
    SimpleAudioEngine::sharedEngine()->rewindBackgroundMusic();
}
//------------------------------------------------------------------------------
void QAudio::setSoundFrequency(int frequency) 
{ 
    s3eSoundSetInt(S3E_SOUND_DEFAULT_FREQ, int(frequency)); 
}
//------------------------------------------------------------------------------
bool QAudio::isStreamPlaying(void)
{
    return SimpleAudioEngine::sharedEngine()->isBackgroundMusicPlaying();
}
//------------------------------------------------------------------------------
float QAudio::get_streamVolume(void)
{
    return SimpleAudioEngine::sharedEngine()->getBackgroundMusicVolume();
}
//------------------------------------------------------------------------------
void QAudio::set_streamVolume(float volume)
{
    SimpleAudioEngine::sharedEngine()->setBackgroundMusicVolume(volume);
}
//------------------------------------------------------------------------------
unsigned int QAudio::playSoundWithLoop(std::string fileName, bool bLoop)
{
    return SimpleAudioEngine::sharedEngine()->playEffect(fileName.c_str(), bLoop);
}
//------------------------------------------------------------------------------
void QAudio::stopSound(unsigned int sampleID)
{
    SimpleAudioEngine::sharedEngine()->stopEffect(sampleID);
}
//------------------------------------------------------------------------------
void QAudio::loadSound(std::string fileName)
{
    SimpleAudioEngine::sharedEngine()->preloadEffect(fileName.c_str());
}
//------------------------------------------------------------------------------
void QAudio::unloadSound(std::string fileName)
{
    SimpleAudioEngine::sharedEngine()->unloadEffect(fileName.c_str());
}
//------------------------------------------------------------------------------
float QAudio::get_soundVolume(void)
{
    return SimpleAudioEngine::sharedEngine()->getEffectsVolume();
}
//------------------------------------------------------------------------------
void QAudio::set_soundVolume(float volume)
{
    SimpleAudioEngine::sharedEngine()->setEffectsVolume(volume);
}
//------------------------------------------------------------------------------
bool QAudio::isSoundPlaying(int channel) 
{ 
    return s3eSoundChannelGetInt(channel, S3E_CHANNEL_STATUS) == 1; 
}

QUICK_NAMESPACE_END;
