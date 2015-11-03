#pragma once

#include "Manager.h"

namespace ow
{
	bool init();
	bool init(const int screen_width, const int screen_height);
	bool begin_frame();
	void show();
	float get_elapsed_sec();
}