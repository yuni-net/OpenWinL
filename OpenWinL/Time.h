#pragma once

#include <chrono>

namespace ow
{
	class Time
	{
	public:
		float get_elapsed_sec() const;
		void update();




	private:
		typedef std::chrono::system_clock::time_point time_point;
		time_point last_time;
	};
}