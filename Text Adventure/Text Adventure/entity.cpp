#include "entity.h"

entity::entity(String name, String description, int position):name(name), description(description), position(position){
	type = ENTITY;
	container = nullptr;
}