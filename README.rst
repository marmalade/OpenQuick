OpenQuick
---------

OpenQuick is an open source framework for Rapid Application Development (RAD)
of 2D games and apps.

It provides high-level Lua APIs on top of the following components:

- Cocos2d-x
- Box2D
- sqlite3 (luasqlite.luaforge.net)
- json (json.luaforge.net)

OpenQuick uses the version of Box2D contained within the Cocos2d-x
distribution. It also uses the versions of Lua (5.2) and tolua++ contained with
the Cocos2d-x distribution. At the time of writing, OpenQuick is tested against
Cocos2d-x cocos2d-2.0-x-2.0.4 (Nov 2012).

If you are using OpenQuick WITH Marmalade Quick, then the runtime OS
abstraction you are using will be Marmalade's - i.e. you are using the
Marmalade back-end for Cocos2d-x (proj.marmalade) - you are NOT using any of
the other Coco2d-x back-ends.

If you are using OpenQuick WITHOUT Marmalade Quick, then the runtime OS
abstraction you are using will be Cocos2d-x's - i.e. you are using the
Cocos2d-x platform back-ends, such as proj.win32, proj.ios etc.

OpenQuick is provided under the MIT license::

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

The following components are redistributed under their respective licenses:

- sqlite3 (luasqlite.luaforge.net)
- json (json.luaforge.net)

There are no components within OpenQuick that place copy-left restrictions on
apps you create using the framework.

The documentation for Marmalade Quick can be found here:
http://quick-docs.madewithmarmalade.com/

Support for Marmalade Quick can be found here:
https://devnet.madewithmarmalade.com/questions/topics/quick.html

Developers using OpenQuick outside of Marmalade Quick are welcome to use these
resources, but should be aware that OpenQuick is a subset of Marmalade Quick;
if posting on the forums, make it clear in what context you are using
OpenQuick.
