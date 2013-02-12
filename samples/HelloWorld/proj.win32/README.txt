OpenQuick "HelloWorld" example for Visual Studio (VS 10 Express).
-----------------------------------------------------------------

This is a pure Visual Studio project that builds OpenQuick against the following projects:

- libBox2D
- libcocos2d
- libCocosDenshion
- libExtensions
- liblua

All of these are simply references to the existing Visual Studio projects within the Cocos2d-x distribution.

Notes:

- The project pathing assumes the Visual Studio solution (and HelloWorld) project are in their original location
underneath the OpenQuick folder, and that the OpenQuick folder sits parallel to your installation of Cocos2d-x. This
is the standard installation set-up for OpenQuick.

- OpenQuick itself contains no platform-specific code. The platform dependencies are handled within Cocos2d-x. For
Windows, these are within the cocos2dx/platform/win32 folder.

- TOLUA_RELEASE is defined as a preprocessor symbol, to ensure tolua is not compiled with assertions. Specifically, 
the tolua function tolua_isusertype() can return a false negative, as it does not respect the class hierarchy introduced
by OpenQuick.




