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
	\file QAudio.h
	\brief Stream and sound playback support
*/
//------------------------------------------------------------------------------

#ifndef __Q_AUDIO_H
#define __Q_AUDIO_H

#include "QDefines.h"
#include "QNode.h"

#include "cocos2d.h"
#include "CCDictionary.h"

// tolua_begin
namespace quick {
// tolua_end

//------------------------------------------------------------------------------
// QAudio
//------------------------------------------------------------------------------
/*!
    The Audio object handles everything to do with sound playback.
*/
class QAudio { // tolua_export
public:
    // BOUND, PRIVATE
    // tolua_begin
    QAudio();
    ~QAudio();

    // BOUND, PUBLIC
    /*! Preload a stream
        @param fileName The path of the stream file, or the FileName of T_SoundResInfo
    */
    void loadStream(std::string fileName);

    /*! Play a stream
        @param fileName The path of the stream file, or the FileName of T_SoundResInfo
        @param bLoop Specify that the music should be looped
    */
    void playStreamWithLoop(std::string fileName, bool bLoop);
    void stopStream(void);
    void pauseStream(void);
    void resumeStream(void);
    void rewindStream(void);
    bool isStreamPlaying(void);
    unsigned int playSoundWithLoop(std::string fileName, bool bLoop); 
    void stopSound(unsigned int sampleID);
    void loadSound(std::string fileName);
    void unloadSound(std::string fileName);
    void setSoundFrequency(int frequency);
    bool isSoundPlaying(int channel);
    float get_streamVolume(void);
    void set_streamVolume(float volume);
    float get_soundVolume(void);
    void set_soundVolume(float volume);

	// tolua_end

}; // tolua_export

// tolua_begin
}
// tolua_end

#endif // __Q_AUDIO_H
