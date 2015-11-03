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


#ifdef ow_implement_is_DirectX9_
	HWND Window::get_handle() const
	{
		return window.myhandle();
	}

	bool Window::can_I_continue() const
	{
		return fw::Window::processage();
	}

	void Window::show() const
	{
		// todo
	}




	void Window::construct(const int width, const int height)
	{
		window.width(width).height(height).title("An Window");
		window.create();
	}
#endif

#ifdef ow_implement_is_OpenGL_
	GLFWwindow * Window::get_handle() const
	{
		return window;
	}

	bool Window::can_I_continue() const
	{
		glClear(GL_COLOR_BUFFER_BIT);
		return glfwWindowShouldClose(window) == 0;
	}

	void Window::show() const
	{
		glfwSwapBuffers(window);
	}




	void Window::construct(const int width, const int height)
	{
		window = glfwCreateWindow(width, height, "An Window", NULL, NULL);
		if (window == nullptr)
		{
			return;
		}

		glfwMakeContextCurrent(window);

		// êÇíºìØä˙êMçÜÇ1âÒë“Ç¬ê›íËÇ…Ç∑ÇÈ
		glfwSwapInterval(1);
	}
#endif


}