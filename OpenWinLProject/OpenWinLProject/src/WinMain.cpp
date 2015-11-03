#include <OpenWinL.h>
#include "God.h"

//int __stdcall WinMain(void * hI, void * hPI, TCHAR lCL, int nCS)
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

