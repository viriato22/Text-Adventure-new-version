#include "map.h"

map::map(const char* title, const char* description, int position, int n, int s, int e, int w, int l) : entity(name, description, position){
	type = MAP;
	container = nullptr;
	north = n;
	south = s;
	east = e;
	west = w;
	lock = l;
}
