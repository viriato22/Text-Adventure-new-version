#ifndef ENTITY_H
#define ENTITY_H

#include "String.h"

enum entities{
	ENTITY,
	CREATURE,
	ITEM,
	MAP
};

class entity{
public:

	int id;
	String name;
	String description;

public:
	entity(int id, String name, String description);

public:
	virtual void look();
};

#endif