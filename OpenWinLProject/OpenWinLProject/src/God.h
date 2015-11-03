#pragma once

class God
{
public:
	static void load();
	static void init();
	static void update();
	static void draw();


private:
	static God & get_instance();
	God();
	void load_dynamic();
	void init_dynamic();
	void update_dynamic();
	void draw_dynamic();
};