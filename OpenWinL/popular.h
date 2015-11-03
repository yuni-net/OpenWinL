#pragma once

#include <memory>
#include <tchar.h>

#ifdef ow_implement_is_DirectX9
#include <Windows.h>
#endif

#define GLFW_DLL
#include "glfw3.h"
#pragma comment(lib, "glfw3.lib")
#pragma comment(lib, "glfw3dll.lib")
#pragma comment(lib, "opengl32.lib")
