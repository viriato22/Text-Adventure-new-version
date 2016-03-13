#include "map.h"
#include <string.h>

void map::createmap(int n) {
	switch (n){
	case 0:

		id = 0;
		strcpy_s(name, 25, "Clearing");
		strcpy_s(description, 100, "You are in a clearing, you see smoke rising from the north\nand hear a river in the west.");
		north = 1;
		south = 2;
		east = 3;
		west = 4;

		break;
	case 1:

		id = 1;
		strcpy_s(name, 25, "North of the clearing");
		strcpy_s(description, 100, "You see smoke rising from the north, and see a river.");
		north = 5;
		south = 0;
		east = 3;
		west = 4;

		break;
	case 2:

		id = 2;
		strcpy_s(name, 25, "South of the clearing");
		strcpy_s(description, 100, "You see some leaves in the ground put in a well organized fashion.");
		north = 0;
		south = 8;
		east = 3;
		west = 4;

		break;
	case 3:

		id = 3;
		strcpy_s(name, 25, "East of the clearing");
		strcpy_s(description, 100, "You see a road that heads east.");
		north = 1;
		south = 2;
		east = 9;
		west = 0;

		break;
	case 4:

		id = 4;
		strcpy_s(name, 25, "River");
		strcpy_s(description, 100, "You see a great river flowing from north to south.\nIt seems there is a hut on the other side.");
		north = 1;
		south = 2;
		east = 0;
		west = 7;

		break;
	case 5:

		id = 5;
		strcpy_s(name, 25, "Destroyed village");
		strcpy_s(description, 100, "There is a destroyed village in front of you.\n You see small footprints leading west.");
		north = 33;
		south = 1;
		east = 33;
		west = 6;

		break;
	case 6:

		id = 6;
		strcpy_s(name, 25, "Goblin nest");
		strcpy_s(description, 100, "You enter a nest where you find some goblins feasting.");
		north = 33;
		south = 33;
		east = 5;
		west = 33;

		break;
	case 7:

		id = 7;
		strcpy_s(name, 25, "Hut");
		strcpy_s(description, 100, "There is a hut made of mud and straw, the air around here smells magical.");
		north = 0;
		south = 33;
		east = 4;
		west = 33;

		items[0] = 100;

		break;
	case 8:

		id = 8;
		strcpy_s(name, 25, "Hole");
		strcpy_s(description, 100, "It seems that inside that hole was a maze.");
		north = 2;
		south = 0;
		east = 33;
		west = 33;

		break;
	case 9:

		id = 9;
		strcpy_s(name, 25, "Road");
		strcpy_s(description, 100, "Road leading to the capital");
		north = 33;
		south = 10;
		east = 33;
		west = 3;

		break;
	case 10:

		id = 10;
		strcpy_s(name, 25, "Gate");
		strcpy_s(description, 100, "Entrance to the capital");
		north = 9;
		south = 14;
		east = 12;
		west = 11;

		break;
	case 11:

		id = 11;
		strcpy_s(name, 25, "Armor shop");
		strcpy_s(description, 100, "Shop that sells armor");
		north = 33;
		south = 13;
		east = 10;
		west = 33;

		break;
	case 12:

		id = 12;
		strcpy_s(name, 25, "Weapon shop");
		strcpy_s(description, 100, "Shop that sells armor");
		north = 33;
		south = 15;
		east = 33;
		west = 10;

		break;
	case 13:

		id = 13;
		strcpy_s(name, 25, "Voodoo woman");
		strcpy_s(description, 100, "Strange woman that calls herself voodoo woman");
		north = 11;
		south = 16;
		east = 14;
		west = 33;

		break;
	case 14:

		id = 14;
		strcpy_s(name, 25, "Well");
		strcpy_s(description, 100, "Ornate well");
		north = 10;
		south = 17;
		east = 15;
		west = 13;

		break;
	case 15:

		id = 15;
		strcpy_s(name, 25, "Tavern");
		strcpy_s(description, 100, "Tavern near the docks");
		north = 12;
		south = 18;
		east = 19;
		west = 14;

		break;
	case 16:

		id = 16;
		strcpy_s(name, 25, "Alley");
		strcpy_s(description, 100, "Dark alley");
		north = 13;
		south = 33;
		east = 17;
		west = 33;

		break;
	case 17:

		id = 17;
		strcpy_s(name, 25, "Warehouse");
		strcpy_s(description, 100, "Warehouse of some big company");
		north = 14;
		south = 33;
		east = 18;
		west = 16;

		break;
	case 18:

		id = 18;
		strcpy_s(name, 25, "Docks");
		strcpy_s(description, 100, "Seems like some sort of festival with so many people");
		north = 15;
		south = 33;
		east = 33;
		west = 17;

		break;
	case 19:

		id = 19;
		strcpy_s(name, 25, "Castle");
		strcpy_s(description, 100, "Castle fit for a king");
		north = 33;
		south = 33;
		east = 33;
		west = 15;

		break;
	}

	/*
	id = 20;
	strcpy_s(name, 25, "");
	strcpy_s(description, 100, "");
	north = ;
	south = ;
	east = ;
	west = ;
	*/
}