#include "item.h"

item::item(const char* title, const char* description, int position, bool ong, bool us, bool pi, int we, char* ground, char* container) :entity(name, description, position){
	type = ITEM;
	onground = ong;
	usable = us;
	pickable = pi;
	weight = we;
	if (onground){
		description = ground;
	}
	else{
		description = container;
	}
}
