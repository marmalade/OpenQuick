#ifndef __MAIN_H__
#define __MAIN_H__

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#ifndef WIN32
#error "No WIN32"
#endif

#ifndef _WINDOWS
#error "No _WINDOWS"
#endif

// Windows Header Files:
#include <windows.h>
#include <tchar.h>

// C RunTime Header Files
#include "CCStdC.h"

// Window size
#define WINDOW_ACTUAL_W     320
#define WINDOW_ACTUAL_H     480

#endif    // __MAIN_H__
