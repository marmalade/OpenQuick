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
const GLchar * qEmboss_frag = SHADER_STRING(

varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
uniform sampler2D u_texture;

uniform vec2 resolution;
uniform float intensity;

void main()
{
    vec2 onePixel = vec2(1.0 / resolution.x, 1.0 / resolution.y);
    vec2 texCoord = v_texCoord;
    texCoord.x += (onePixel.x * 6.0);
    texCoord.y += (onePixel.y * 6.0);

    vec4 color;
    
    color.rgb = vec3(0.5);
    color -= texture2D(u_texture, texCoord - onePixel) * intensity;
    color += texture2D(u_texture, texCoord + onePixel) * intensity;

    color.rgb = vec3((color.r + color.g + color.b) / 3.0);
    gl_FragColor = vec4(color.rgb, 1) * v_fragmentColor;
}
);
