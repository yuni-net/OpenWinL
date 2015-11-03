#include <Window.h>

namespace ow
{
	Window::Window()
	{
		const int default_width = 960;
		const int default_height = 600;
		construct(default_width, default_height);
	}

	Window::Window(const int width, const int height)
	{
		construct(width, height);
	}



	void Window::construct(const int width, const int height)
	{
		window = glfwCreateWindow(width, height, "An Window", NULL, NULL);
		if (window == nullptr)
		{
			return;
		}

		glfwMakeContextCurrent(window);

		// ���������M����1��҂ݒ�ɂ���
		glfwSwapInterval(1);
	}

}