#pragma once

#include "popular.h"

namespace ow
{
	class Window
	{
	public:
		Window();
		Window(const int width, const int height);

		bool can_I_continue() const;
		void show() const;

#ifdef ow_implement_is_DirectX9_
		HWND get_handle() const;
#endif

#ifdef ow_implement_is_OpenGL_
		GLFWwindow * get_handle() const;
#endif



	private:
#ifdef ow_implement_is_DirectX9_
		fw::Window window;
#endif

#ifdef ow_implement_is_OpenGL_
		GLFWwindow * window;
#endif

		void construct(const int width, const int height);
	};
}