#ifndef MAP_H
#define MAP_H

#include "entity.h"

class map : public entity{
public:
	int north, south, east, west;
	int items[10];
	char* obstacle;

public:
	map(int id, String name, String description, int north, int south, int east, int west, char* obstacle);
public:
	void createmap(int n);
};

#endif