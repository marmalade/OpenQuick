--[[/*
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
 */--]]

--------------------------------------------------------------------------------
-- Color
-- NOTE: This file must have no dependencies on the ones loaded after it by
-- openquick_init.lua. For example, it must have no dependencies on QDirector.lua
--------------------------------------------------------------------------------

color = {}

-- Color constants
-- The full list of CSS3 color constants are supported: http://www.w3.org/TR/css3-color/
-- Names are amended to camelCase capitalisation

color.aliceBlue           = quick.QColor:new(0xF0,0xF8,0xFF)
color.antiqueWhite        = quick.QColor:new(0xFA,0xEB,0xD7)
color.aqua                = quick.QColor:new(0x00,0xFF,0xFF)
color.aquamarine          = quick.QColor:new(0x7F,0xFF,0xD4)
color.azure               = quick.QColor:new(0xF0,0xFF,0xFF)
color.beige               = quick.QColor:new(0xF5,0xF5,0xDC)
color.bisque              = quick.QColor:new(0xFF,0xE4,0xC4)
color.black               = quick.QColor:new(0x00,0x00,0x00)
color.blanchedAlmond      = quick.QColor:new(0xFF,0xEB,0xCD)
color.blue                = quick.QColor:new(0x00,0x00,0xFF)
color.blueViolet          = quick.QColor:new(0x8A,0x2B,0xE2)
color.brown               = quick.QColor:new(0xA5,0x2A,0x2A)
color.burlyWood           = quick.QColor:new(0xDE,0xB8,0x87)
color.cadetBlue           = quick.QColor:new(0x5F,0x9E,0xA0)
color.chartreuse          = quick.QColor:new(0x7F,0xFF,0x00)
color.chocolate           = quick.QColor:new(0xD2,0x69,0x1E)
color.coral               = quick.QColor:new(0xFF,0x7F,0x50)
color.cornflowerBlue      = quick.QColor:new(0x64,0x95,0xED)
color.cornsilk            = quick.QColor:new(0xFF,0xF8,0xDC)
color.crimson             = quick.QColor:new(0xDC,0x14,0x3C)
color.cyan                = quick.QColor:new(0x00,0xFF,0xFF)
color.darkBlue            = quick.QColor:new(0x00,0x00,0x8B)
color.darkCyan            = quick.QColor:new(0x00,0x8B,0x8B)
color.darkGoldenRod       = quick.QColor:new(0xB8,0x86,0x0B)
color.darkGray            = quick.QColor:new(0xA9,0xA9,0xA9)
color.darkGrey            = quick.QColor:new(0xA9,0xA9,0xA9)
color.darkGreen           = quick.QColor:new(0x00,0x64,0x00)
color.darkKhaki           = quick.QColor:new(0xBD,0xB7,0x6B)
color.darkMagenta         = quick.QColor:new(0x8B,0x00,0x8B)
color.darkOliveGreen      = quick.QColor:new(0x55,0x6B,0x2F)
color.darkorange          = quick.QColor:new(0xFF,0x8C,0x00)
color.darkOrchid          = quick.QColor:new(0x99,0x32,0xCC)
color.darkRed             = quick.QColor:new(0x8B,0x00,0x00)
color.darkSalmon          = quick.QColor:new(0xE9,0x96,0x7A)
color.darkSeaGreen        = quick.QColor:new(0x8F,0xBC,0x8F)
color.darkSlateBlue       = quick.QColor:new(0x48,0x3D,0x8B)
color.darkSlateGray       = quick.QColor:new(0x2F,0x4F,0x4F)
color.darkSlateGrey       = quick.QColor:new(0x2F,0x4F,0x4F)
color.darkTurquoise       = quick.QColor:new(0x00,0xCE,0xD1)
color.darkViolet          = quick.QColor:new(0x94,0x00,0xD3)
color.deepPink            = quick.QColor:new(0xFF,0x14,0x93)
color.deepSkyBlue         = quick.QColor:new(0x00,0xBF,0xFF)
color.dimGray             = quick.QColor:new(0x69,0x69,0x69)
color.dimGrey             = quick.QColor:new(0x69,0x69,0x69)
color.dodgerBlue          = quick.QColor:new(0x1E,0x90,0xFF)
color.fireBrick           = quick.QColor:new(0xB2,0x22,0x22)
color.floralWhite         = quick.QColor:new(0xFF,0xFA,0xF0)
color.forestGreen         = quick.QColor:new(0x22,0x8B,0x22)
color.fuchsia             = quick.QColor:new(0xFF,0x00,0xFF)
color.gainsboro           = quick.QColor:new(0xDC,0xDC,0xDC)
color.ghostWhite          = quick.QColor:new(0xF8,0xF8,0xFF)
color.gold                = quick.QColor:new(0xFF,0xD7,0x00)
color.goldenRod           = quick.QColor:new(0xDA,0xA5,0x20)
color.gray                = quick.QColor:new(0x80,0x80,0x80)
color.grey                = quick.QColor:new(0x80,0x80,0x80)
color.green               = quick.QColor:new(0x00,0xFF,0x00)
color.greenYellow         = quick.QColor:new(0xAD,0xFF,0x2F)
color.honeyDew            = quick.QColor:new(0xF0,0xFF,0xF0)
color.hotPink             = quick.QColor:new(0xFF,0x69,0xB4)
color.indianRed           = quick.QColor:new(0xCD,0x5C,0x5C)
color.indigo              = quick.QColor:new(0x4B,0x00,0x82)
color.ivory               = quick.QColor:new(0xFF,0xFF,0xF0)
color.khaki               = quick.QColor:new(0xF0,0xE6,0x8C)
color.lavender            = quick.QColor:new(0xE6,0xE6,0xFA)
color.lavenderBlush       = quick.QColor:new(0xFF,0xF0,0xF5)
color.lawnGreen           = quick.QColor:new(0x7C,0xFC,0x00)
color.lemonChiffon        = quick.QColor:new(0xFF,0xFA,0xCD)
color.lightBlue           = quick.QColor:new(0xAD,0xD8,0xE6)
color.lightCoral          = quick.QColor:new(0xF0,0x80,0x80)
color.lightCyan           = quick.QColor:new(0xE0,0xFF,0xFF)
color.lightGoldenRodYellow= quick.QColor:new(0xFA,0xFA,0xD2)
color.lightGray           = quick.QColor:new(0xD3,0xD3,0xD3)
color.lightGrey           = quick.QColor:new(0xD3,0xD3,0xD3)
color.lightGreen          = quick.QColor:new(0x90,0xEE,0x90)
color.lightPink           = quick.QColor:new(0xFF,0xB6,0xC1)
color.lightSalmon         = quick.QColor:new(0xFF,0xA0,0x7A)
color.lightSeaGreen       = quick.QColor:new(0x20,0xB2,0xAA)
color.lightSkyBlue        = quick.QColor:new(0x87,0xCE,0xFA)
color.lightSlateGray      = quick.QColor:new(0x77,0x88,0x99)
color.lightSlateGrey      = quick.QColor:new(0x77,0x88,0x99)
color.lightSteelBlue      = quick.QColor:new(0xB0,0xC4,0xDE)
color.lightYellow         = quick.QColor:new(0xFF,0xFF,0xE0)
color.lime                = quick.QColor:new(0x00,0xFF,0x00)
color.limeGreen           = quick.QColor:new(0x32,0xCD,0x32)
color.linen               = quick.QColor:new(0xFA,0xF0,0xE6)
color.magenta             = quick.QColor:new(0xFF,0x00,0xFF)
color.maroon              = quick.QColor:new(0x80,0x00,0x00)
color.mediumAquaMarine    = quick.QColor:new(0x66,0xCD,0xAA)
color.mediumBlue          = quick.QColor:new(0x00,0x00,0xCD)
color.mediumOrchid        = quick.QColor:new(0xBA,0x55,0xD3)
color.mediumPurple        = quick.QColor:new(0x93,0x70,0xD8)
color.mediumSeaGreen      = quick.QColor:new(0x3C,0xB3,0x71)
color.mediumSlateBlue     = quick.QColor:new(0x7B,0x68,0xEE)
color.mediumSpringGreen   = quick.QColor:new(0x00,0xFA,0x9A)
color.mediumTurquoise     = quick.QColor:new(0x48,0xD1,0xCC)
color.mediumVioletRed     = quick.QColor:new(0xC7,0x15,0x85)
color.midnightBlue        = quick.QColor:new(0x19,0x19,0x70)
color.mintCream           = quick.QColor:new(0xF5,0xFF,0xFA)
color.mistyRose           = quick.QColor:new(0xFF,0xE4,0xE1)
color.moccasin            = quick.QColor:new(0xFF,0xE4,0xB5)
color.navajoWhite         = quick.QColor:new(0xFF,0xDE,0xAD)
color.navy                = quick.QColor:new(0x00,0x00,0x80)
color.oldLace             = quick.QColor:new(0xFD,0xF5,0xE6)
color.olive               = quick.QColor:new(0x80,0x80,0x00)
color.oliveDrab           = quick.QColor:new(0x6B,0x8E,0x23)
color.orange              = quick.QColor:new(0xFF,0xA5,0x00)
color.orangeRed           = quick.QColor:new(0xFF,0x45,0x00)
color.orchid              = quick.QColor:new(0xDA,0x70,0xD6)
color.paleGoldenRod       = quick.QColor:new(0xEE,0xE8,0xAA)
color.paleGreen           = quick.QColor:new(0x98,0xFB,0x98)
color.paleTurquoise       = quick.QColor:new(0xAF,0xEE,0xEE)
color.paleVioletRed       = quick.QColor:new(0xD8,0x70,0x93)
color.papayaWhip          = quick.QColor:new(0xFF,0xEF,0xD5)
color.peachPuff           = quick.QColor:new(0xFF,0xDA,0xB9)
color.peru                = quick.QColor:new(0xCD,0x85,0x3F)
color.pink                = quick.QColor:new(0xFF,0xC0,0xCB)
color.plum                = quick.QColor:new(0xDD,0xA0,0xDD)
color.powderBlue          = quick.QColor:new(0xB0,0xE0,0xE6)
color.purple              = quick.QColor:new(0x80,0x00,0x80)
color.red                 = quick.QColor:new(0xFF,0x00,0x00)
color.rosyBrown           = quick.QColor:new(0xBC,0x8F,0x8F)
color.royalBlue           = quick.QColor:new(0x41,0x69,0xE1)
color.saddleBrown         = quick.QColor:new(0x8B,0x45,0x13)
color.salmon              = quick.QColor:new(0xFA,0x80,0x72)
color.sandyBrown          = quick.QColor:new(0xF4,0xA4,0x60)
color.seaGreen            = quick.QColor:new(0x2E,0x8B,0x57)
color.seaShell            = quick.QColor:new(0xFF,0xF5,0xEE)
color.sienna              = quick.QColor:new(0xA0,0x52,0x2D)
color.silver              = quick.QColor:new(0xC0,0xC0,0xC0)
color.skyBlue             = quick.QColor:new(0x87,0xCE,0xEB)
color.slateBlue           = quick.QColor:new(0x6A,0x5A,0xCD)
color.slateGray           = quick.QColor:new(0x70,0x80,0x90)
color.slateGrey           = quick.QColor:new(0x70,0x80,0x90)
color.snow                = quick.QColor:new(0xFF,0xFA,0xFA)
color.springGreen         = quick.QColor:new(0x00,0xFF,0x7F)
color.steelBlue           = quick.QColor:new(0x46,0x82,0xB4)
color.tan                 = quick.QColor:new(0xD2,0xB4,0x8C)
color.teal                = quick.QColor:new(0x00,0x80,0x80)
color.thistle             = quick.QColor:new(0xD8,0xBF,0xD8)
color.tomato              = quick.QColor:new(0xFF,0x63,0x47)
color.turquoise           = quick.QColor:new(0x40,0xE0,0xD0)
color.violet              = quick.QColor:new(0xEE,0x82,0xEE)
color.wheat               = quick.QColor:new(0xF5,0xDE,0xB3)
color.white               = quick.QColor:new(0xFF,0xFF,0xFF)
color.whiteSmoke          = quick.QColor:new(0xF5,0xF5,0xF5)
color.yellow              = quick.QColor:new(0xFF,0xFF,0x00)
color.yellowGreen         = quick.QColor:new(0x9A,0xCD,0x32)

-- Serialize
QColor_serialize = function(o)
	local obj = serializeTLMT(getmetatable(o), o)
	return obj
end
local colorTemp = quick.QColor:new()
local mt = getmetatable(colorTemp)
mt.__serialize = QColor_serialize
