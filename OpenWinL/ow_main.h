#pragma once

#include "popular.h"

#ifdef ow_implement_is_DirectX9_
#define ow_main WINAPI WinMain(HINSTANCE hI, HINSTANCE hPI, LPSTR lCL, int nCS)
#endif

#ifdef ow_implement_is_OpenGL_
#define ow_main main(int argc, char * argv[])
#endif