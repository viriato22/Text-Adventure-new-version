#ifndef ENTITY_H
#define ENTITY_H

#include "String.h"
#include "vector.h"

enum entities{
	ENTITY,
	PLAYER,
	CREATURE,
	ITEM,
	MAP
};

class entity{
public:

	int id;
	String name;
	String description;
	entities type;
	int position;
	vector<entities*>* container;

public:
	entity(String name, String description, int position);

public:
	
};

#endif