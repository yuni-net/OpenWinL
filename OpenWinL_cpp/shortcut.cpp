#include <Manager.h>

namespace ow
{
	bool init()
	{
		return Manager::init();
	}

	bool init(const int screen_width, const int screen_height)
	{
		return Manager::init(screen_width, screen_height);
	}

	bool begin_frame()
	{
		return Manager::begin_frame();
	}

	void show()
	{
		return Manager::show();
	}

	float get_elapsed_sec()
	{
		return Manager::get_time().get_elapsed_sec();
	}
}