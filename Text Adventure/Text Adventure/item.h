#ifndef ITEM_H
#define ITEM_H

#include "entity.h"

class item : public entity{
public:

	bool onground; // 0 -> on inventory, 1 -> on ground
	bool usable; // 0 -> no, 1 -> yes
	bool pickable; // 0 -> no, 1 -> yes
	int weight;

};

class door : public item{
public:

	bool gate;
	bool status; // 0 -> Closed, 1 -> Open
	int direction; // 0 -> North, 1 -> South, 2 ->  East, 3 -> West
	int room;

public:

	void createdoors(int n);
};

class weapon : public item{
	int damage;
};

class armor : public item{
	int defense;
	int slot; // 0 -> not equipped, 1 -> head, 2 -> chest, 3 -> legs, 4 -> hand
};

#endif