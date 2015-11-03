#include "God.h"

void God::load()
{
	get_instance().load_dynamic();
}

void God::init()
{
	get_instance().init_dynamic();
}

void God::update()
{
	get_instance().update_dynamic();
}

void God::draw()
{
	get_instance().draw_dynamic();
}

God & God::get_instance()
{
	static God god;
	return god;
}

God::God()
{
	// Nothing
}

void God::load_dynamic()
{
	// todo
}

void God::init_dynamic()
{
	// todo
}

void God::update_dynamic()
{
	// todo
}

void God::draw_dynamic()
{
	// todo
}

