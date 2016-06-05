#ifndef MAP_H
#define MAP_H

#include "entity.h"

class map : public entity{
public:
	int north, south, east, west;
	int lock = 0; // lock = 0 == no locked doors; lock = 1 == locked north; lock = 10 == locked south; lock = 100 == locked east; lock = 1000 == locked west;

public:
	map(const char* title, const char* description, int position, int north, int south, int east, int west, int lock);

public:
	bool operator= (entity* things);
};

#endif