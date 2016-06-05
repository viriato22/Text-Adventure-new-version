#ifndef ITEM_H
#define ITEM_H

#include "entity.h"

class item : public entity{
public:
	bool onground; // 0 -> on inventory/container, 1 -> on ground
	bool usable; // 0 -> no, 1 -> yes
	bool pickable; // 0 -> no, 1 -> yes
	int weight;

	char* grounddesc, containerdesc;

public:
	item(const char* title, const char* description, int position, bool onground, bool usable, bool pickable, int weight, char* grounddesc, char* containerdesc);
};

#endif