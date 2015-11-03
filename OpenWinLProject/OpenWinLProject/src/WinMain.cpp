#include <OpenWinL.h>
#include "God.h"

int ow_main
{
	ow::Manager::init();

	God::load();
	God::init();


	while (ow::Manager::begin_frame())
	{
		God::update();
		God::draw();


		ow::Manager::show();


	}

	return 0;
}

