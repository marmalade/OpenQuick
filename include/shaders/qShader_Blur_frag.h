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


#include "../QFilter.h"

const GLchar * qBlur_frag = SHADER_STRING(

varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
uniform sampler2D u_texture;
uniform vec2 blurSize;

void main()
{
    vec4 sum = vec4(0.0);
    sum += texture2D(u_texture, v_texCoord - 4.0 * blurSize) * 0.05;
    sum += texture2D(u_texture, v_texCoord - 3.0 * blurSize) * 0.09;
    sum += texture2D(u_texture, v_texCoord - 2.0 * blurSize) * 0.12;
    sum += texture2D(u_texture, v_texCoord - 1.0 * blurSize) * 0.15;
    sum += texture2D(u_texture, v_texCoord) * 0.16;
    sum += texture2D(u_texture, v_texCoord + 1.0 * blurSize) * 0.15;
    sum += texture2D(u_texture, v_texCoord + 2.0 * blurSize) * 0.12;
    sum += texture2D(u_texture, v_texCoord + 3.0 * blurSize) * 0.09;
    sum += texture2D(u_texture, v_texCoord + 4.0 * blurSize) * 0.05;

    gl_FragColor = sum * v_fragmentColor;
}
);
