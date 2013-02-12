@echo off
echo Rebuilding openquick tolua interface
c:\dev\coolade-project\tools\tolua++ -o openquick_tolua.cpp openquick_tolua.pkg
if errorlevel 1 goto Error
echo Done
goto End
:Error
echo An error occured while processing!
pause
:End
