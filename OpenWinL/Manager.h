#pragma once

#include <popular.h>
#include "Time.h"

namespace ow
{
	class Window;

	class Manager
	{
	public:
		static bool init();
		static bool init(const int screen_width, const int screen_height);
		static bool begin_frame();
		static void show();

		static const Time & get_time();




		static Manager & get_instance();
	private:
		std::unique_ptr<Window> window;
		std::unique_ptr<Time> time;

		bool init_dynamic(const int screen_width, const int screen_height);
		bool begin_frame_dynamic();
		void show_dynamic();
	};
}