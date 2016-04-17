#include "map.h"

map::map(int id, String name, String description, int north, int south, int east, int west, char* obstacle) : entity(id, name, description){

};

void map::createmap(int n) {
	switch (n){
	case 0:

		id = 0;
		name = "Clearing";
		description = "You are in a clearing, you see smoke rising from the north\nand hear a river in the west.";
		north = 1;
		south = 2;
		east = 3;
		west = 4;

		break;
	case 1:

		id = 1;
		name = "North of the clearing";
		"You see smoke rising from the north, and see a river.";
		north = 5;
		south = 0;
		east = 3;
		west = 4;

		break;
	case 2:

		id = 2;
		name = "South of the clearing";
		description = "You see some leaves in the ground put in a well organized fashion.";
		north = 0;
		south = 8;
		east = 3;
		west = 4;

		break;
	case 3:

		id = 3;
		name = "East of the clearing";
		description = "You see a road that heads east.";
		north = 1;
		south = 2;
		east = 9;
		west = 0;

		break;
	case 4:

		id = 4;
		name = "River";
		description = "You see a great river flowing from north to south.\nIt seems there is a hut on the other side.";
		north = 1;
		south = 2;
		east = 0;
		west = 7;

		break;
	case 5:

		id = 5;
		name = "Destroyed village";
		description = "There is a destroyed village in front of you.\n You see small footprints leading west.";
		north = 33;
		south = 1;
		east = 33;
		west = 6;

		break;
	case 6:

		id = 6;
		name = "Goblin nest";
		description = "You enter a nest where you find some goblins feasting.";
		north = 33;
		south = 33;
		east = 5;
		west = 33;

		break;
	case 7:

		id = 7;
		name = "Hut";
		description = "There is a hut made of mud and straw, the air around here smells magical.";
		north = 0;
		south = 33;
		east = 4;
		west = 33;

		items[0] = 100;

		break;
	case 8:

		id = 8;
		name = "Hole";
		description = "It seems that inside that hole was a maze.";
		north = 2;
		south = 0;
		east = 33;
		west = 33;

		break;
	case 9:

		id = 9;
		name = "Road";
		description = "Road leading to the capital";
		north = 33;
		south = 10;
		east = 33;
		west = 3;

		break;
	case 10:

		id = 10;
		name = "Gate";
		description = "Entrance to the capital";
		north = 9;
		south = 14;
		east = 12;
		west = 11;

		break;
	case 11:

		id = 11;
		name = "Armor shop";
		description = "Shop that sells armor";
		north = 33;
		south = 13;
		east = 10;
		west = 33;

		break;
	case 12:

		id = 12;
		name = "Weapon shop";
		description = "Shop that sells armor";
		north = 33;
		south = 15;
		east = 33;
		west = 10;

		break;
	case 13:

		id = 13;
		name = "Voodoo woman";
		description = "Strange woman that calls herself voodoo woman";
		north = 11;
		south = 16;
		east = 14;
		west = 33;

		break;
	case 14:

		id = 14;
		name = "Well";
		description = "Ornate well";
		north = 10;
		south = 17;
		east = 15;
		west = 13;

		break;
	case 15:

		id = 15;
		name = "Tavern";
		description = "Tavern near the docks";
		north = 12;
		south = 18;
		east = 19;
		west = 14;

		break;
	case 16:

		id = 16;
		name = "Alley";
		description = "Dark alley";
		north = 13;
		south = 33;
		east = 17;
		west = 33;

		break;
	case 17:

		id = 17;
		name = "Warehouse";
		description = "Warehouse of some big company";
		north = 14;
		south = 33;
		east = 18;
		west = 16;

		break;
	case 18:

		id = 18;
		name = "Docks";
		description = "Seems like some sort of festival with so many people";
		north = 15;
		south = 33;
		east = 33;
		west = 17;

		break;
	case 19:

		id = 19;
		name = "Castle";
		description = "Castle fit for a king";
		north = 33;
		south = 33;
		east = 33;
		west = 15;

		break;
	}

	/*
	id = 20;
	name = "";
	description = "";
	north = ;
	south = ;
	east = ;
	west = ;
	*/
}