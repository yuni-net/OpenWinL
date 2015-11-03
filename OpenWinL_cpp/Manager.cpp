#include <Manager.h>
#include <popular.h>
#include <Window.h>

namespace ow
{
	bool Manager::init()
	{
		const int default_width = 960;
		const int default_height = 600;
		return get_instance().init_dynamic(default_width, default_height);
	}

	bool Manager::init(const int screen_width, const int screen_height)
	{
		return get_instance().init_dynamic(screen_width, screen_height);
	}

	bool Manager::begin_frame()
	{
		return get_instance().begin_frame_dynamic();
	}

	void Manager::show()
	{
		get_instance().show_dynamic();
	}


	const Time & Manager::get_time()
	{
		return *(get_instance().time);
	}




	Manager & Manager::get_instance()
	{
		static Manager manager;
		return manager;
	}



#ifdef ow_implement_is_DirectX9_
	bool Manager::init_dynamic(const int screen_width, const int screen_height)
	{
		window.reset(new Window(screen_width, screen_height));
		time.reset(new Time());

		return true;
	}

	bool Manager::begin_frame_dynamic()
	{
		time->update();
		return window->can_I_continue();
	}

	void Manager::show_dynamic()
	{
		window->show();
	}
#endif

#ifdef ow_implement_is_OpenGL_
	bool Manager::init_dynamic(const int screen_width, const int screen_height)
	{
		if (glfwInit() == GL_FALSE)
		{
			return false;
		}

		window.reset(new Window(screen_width, screen_height));

		return true;
	}

	bool Manager::begin_frame_dynamic()
	{
		glfwPollEvents();
		time->update();
		return window->can_I_continue();
	}

	void Manager::show_dynamic()
	{
		window->show();
	}
#endif



}