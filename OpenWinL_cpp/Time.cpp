#include <Time.h>
#include <popular.h>

namespace ow
{

	float Time::get_elapsed_sec() const
	{
		auto now_time = std::chrono::system_clock::now();
		auto gap = now_time - last_time;
		auto gap_msec = std::chrono::duration_cast<std::chrono::seconds>(gap).count();
		return gap_msec*0.001f;
	}

	void Time::update()
	{
		last_time = std::chrono::system_clock::now();
	}
}