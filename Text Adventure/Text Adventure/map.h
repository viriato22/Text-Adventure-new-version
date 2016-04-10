#ifndef MAP_H
#define MAP_H

#include "entity.h"

class map : public entity{
public:

	int north, south, east, west;
	int items[10];
	char* obstacle;

public:

	void createmap1(int n);
};

#endif