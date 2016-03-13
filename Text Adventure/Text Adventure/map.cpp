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
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 3:

		id = 3;
		strcpy_s(name, 25, "East of the clearing");
		strcpy_s(description, 100, "You see a road that heads east.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 4:

		id = 4;
		strcpy_s(name, 25, "River");
		strcpy_s(description, 100, "You see a great river flowing from north to south.\nIt seems there is a hut on the other side.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 5:

		id = 5;
		strcpy_s(name, 25, "Destroyed village");
		strcpy_s(description, 100, "There is a destroyed village in front of you.\n You see small footprints leading west.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 6:

		id = 6;
		strcpy_s(name, 25, "Goblin nest");
		strcpy_s(description, 100, "You enter a nest where you find some goblins feasting.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 7:

		id = 7;
		strcpy_s(name, 25, "Hut");
		strcpy_s(description, 100, "There is a hut made of mud and straw, the air around here smells magical.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		items[0] = 100;

		break;
	case 8:

		id = 8;
		strcpy_s(name, 25, "Hole");
		strcpy_s(description, 100, "It seems that inside that hole was a maze.");
		/*
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 9:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 10:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 11:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 12:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 13:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 14:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 15:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 16:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 17:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 18:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	case 19:

		/*
		id = ;
		strcpy_s(name, 25, "");
		strcpy_s(description, 100, "");
		north = ;
		south = ;
		east = ;
		west = ;
		*/

		break;
	}

	/*
	id = ;
	strcpy_s(name, 25, "");
	strcpy_s(description, 100, "");
	north = ;
	south = ;
	east = ;
	west = ;
	*/
}