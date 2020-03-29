#pragma once


// for checking OS
#define ATWin
//#define ATUnix
//#define ATOSX

#pragma comment(lib, "opengl32.lib")
#include "ATUI.h"
#define GLEW_STATIC
#include "GL/glew.h"

#ifdef ATWin
#include "GL/wglew.h"
#endif