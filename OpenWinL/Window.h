#pragma once

#include "popular.h"

namespace ow
{
	class Window
	{
	public:
		Window();
		Window(const int width, const int height);

		GLFWwindow * get_handle();



	private:
		GLFWwindow * window;
		void construct(const int width, const int height);
	};
}