#pragma once

#include "Window.h"

namespace ow
{
	class Manager
	{
	public:
		static bool init();
		static bool init(const int screen_width, const int screen_height);
		static bool begin_frame();
		static void show();




		static Manager & get_instance();
	private:
		std::unique_ptr<Window> window;
		bool init_dynamic(const int screen_width, const int screen_height);
		bool begin_frame_dynamic();
		void show_dynamic();
	};
}