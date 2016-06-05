#include <iostream>
//#include "creature.h"
#include "world.h"
#include "map.h"
#include "character.h"
#include "entity.h"
#include "item.h"

// ----------------------------------------------------
world::world()
{
	timer = clock();
	map* newmap = new map("", "", 42 , 0, 0, 0, 0, 0);

	for (int n = 0; n < 20; n++){
		newmap->lock = 0;
		switch (n){
		case 0:
			newmap->id = 0;
			newmap->name = "Clearing";
			newmap->description = "You are in a clearing, you see smoke rising from the north\nand hear a river in the west.";
			newmap->north = 1;
			newmap->south = 2;
			newmap->east = 3;
			newmap->west = 4;

			break;
		case 1:

			newmap->id = 1;
			newmap->name = "North of the clearing";
			newmap->description = "You see smoke rising from the north, and see a river.";
			newmap->north = 5;
			newmap->south = 0;
			newmap->east = 3;
			newmap->west = 4;

			break;
		case 2:

			newmap->id = 2;
			newmap->name = "South of the clearing";
			newmap->description = "You see some leaves in the ground put in a well organized fashion.";
			newmap->north = 0;
			newmap->south = 8;
			newmap->east = 3;
			newmap->west = 4;

			break;
		case 3:

			newmap->id = 3;
			newmap->name = "East of the clearing";
			newmap->description = "You see a road that heads east.";
			newmap->north = 1;
			newmap->south = 2;
			newmap->east = 9;
			newmap->west = 0;

			break;
		case 4:

			newmap->id = 4;
			newmap->name = "River";
			newmap->description = "You see a great river flowing from north to south.\nIt seems there is a hut on the other snewmap->ide.";
			newmap->north = 1;
			newmap->south = 2;
			newmap->east = 0;
			newmap->west = 7;

			break;
		case 5:

			newmap->id = 5;
			newmap->name = "Destroyed village";
			newmap->description = "There is a destroyed village in front of you.\n You see small footprints leading west.";
			newmap->north = 33;
			newmap->south = 1;
			newmap->east = 33;
			newmap->west = 6;

			break;
		case 6:

			newmap->id = 6;
			newmap->name = "Goblin nest";
			newmap->description = "You enter a nest where you find some goblins feasting.";
			newmap->north = 33;
			newmap->south = 33;
			newmap->east = 5;
			newmap->west = 33;

			break;
		case 7:

			newmap->id = 7;
			newmap->name = "Hut";
			newmap->description = "There is a hut made of mud and straw with a door facing east, the air around here smells magical.";
			newmap->north = 0;
			newmap->south = 33;
			newmap->east = 4;
			newmap->west = 33;

			newmap->lock += 1000;

			break;
		case 8:

			newmap->id = 8;
			newmap->name = "Hole";
			newmap->description = "It seems that inside that hole was a maze.";
			newmap->north = 2;
			newmap->south = 0;
			newmap->east = 33;
			newmap->west = 33;

			break;
		case 9:

			newmap->id = 9;
			newmap->name = "Road";
			newmap->description = "Road leading to the capital";
			newmap->north = 33;
			newmap->south = 10;
			newmap->east = 33;
			newmap->west = 3;

			break;
		case 10:

			newmap->id = 10;
			newmap->name = "Gate";
			newmap->description = "Entrance to the capital";
			newmap->north = 9;
			newmap->south = 14;
			newmap->east = 12;
			newmap->west = 11;

			break;
		case 11:

			newmap->id = 11;
			newmap->name = "Armor shop";
			newmap->description = "Shop that sells armor";
			newmap->north = 33;
			newmap->south = 13;
			newmap->east = 10;
			newmap->west = 33;

			break;
		case 12:

			newmap->id = 12;
			newmap->name = "Weapon shop";
			newmap->description = "Shop that sells armor";
			newmap->north = 33;
			newmap->south = 15;
			newmap->east = 33;
			newmap->west = 10;

			break;
		case 13:

			newmap->id = 13;
			newmap->name = "Voodoo woman";
			newmap->description = "Strange woman that calls herself voodoo woman";
			newmap->north = 11;
			newmap->south = 16;
			newmap->east = 14;
			newmap->west = 33;

			break;
		case 14:

			newmap->id = 14;
			newmap->name = "Well";
			newmap->description = "Ornate well";
			newmap->north = 10;
			newmap->south = 17;
			newmap->east = 15;
			newmap->west = 13;

			break;
		case 15:

			newmap->id = 15;
			newmap->name = "Tavern";
			newmap->description = "Tavern near the docks";
			newmap->north = 12;
			newmap->south = 18;
			newmap->east = 19;
			newmap->west = 14;

			break;
		case 16:

			newmap->id = 16;
			newmap->name = "Alley";
			newmap->description = "Dark alley";
			newmap->north = 13;
			newmap->south = 33;
			newmap->east = 17;
			newmap->west = 33;

			break;
		case 17:

			newmap->id = 17;
			newmap->name = "Warehouse";
			newmap->description = "Warehouse of some big company";
			newmap->north = 14;
			newmap->south = 33;
			newmap->east = 18;
			newmap->west = 16;

			break;
		case 18:

			newmap->id = 18;
			newmap->name = "Docks";
			newmap->description = "Seems like some sort of festival with so many people";
			newmap->north = 15;
			newmap->south = 33;
			newmap->east = 33;
			newmap->west = 17;

			break;
		case 19:

			newmap->id = 19;
			newmap->name = "Castle";
			newmap->description = "Castle fit for a king";
			newmap->north = 33;
			newmap->south = 33;
			newmap->east = 33;
			newmap->west = 15;

			break;
		}

		things.pushback(newmap);
	}

	/*
	newmap->id = 20;
	newmap->name = "";
	newmap->description = "";
	newmap->north = ;
	newmap->south = ;
	newmap->east = ;
	newmap->west = ;*/

	item* sword = new item("Iron sword", "Sword made of iron", 0, true, true, true, 2, "You see an iron sword on the ground", "Sword made of iron");
	item* orb = new item("Orb", "Mysterious orb", 13, true, true, true, 5, "Mysterious orb", "Mysterious orb");

	//item* itemname = new item("", "", 0, false, false, false, 0, "", "");
}

world::~world(){}

bool world::action(vector<String>& words){
	bool ret = true;

	if (words.buffer[0] == "look" || words.buffer[0] == "see"){
		mc->look(words, things);
	}
	else if (((words.buffer[0] == "move" || words.buffer[0] == "go" || words.buffer[0] == "proceed" || words.buffer[0] == "advance" || words.buffer[0] == "progress" || words.buffer[0] == "walk") && (words.buffer[1] == "north" || words.buffer[1] == "south" || words.buffer[1] == "east" || words.buffer[1] == "west" || words.buffer[1] == "n" || words.buffer[1] == "s" || words.buffer[1] == "e" || words.buffer[1] == "w")) || words.buffer[0] == "north" || words.buffer[0] == "south" || words.buffer[0] == "east" || words.buffer[0] == "west" || words.buffer[0] == "n" || words.buffer[0] == "s" || words.buffer[0] == "e" || words.buffer[0] == "w"){
		if (mc->move(words, things)) mc->look(words, things);
	}
	else if (words.buffer[0] == "lock" && (words.buffer[1] == "north" || words.buffer[1] == "south" || words.buffer[1] == "east" || words.buffer[1] == "west" || words.buffer[1] == "n" || words.buffer[1] == "s" || words.buffer[1] == "e" || words.buffer[1] == "w")){
		mc->lock(words, things);
	}
	else if (words.buffer[0] == "unlock" && (words.buffer[1] == "north" || words.buffer[1] == "south" || words.buffer[1] == "east" || words.buffer[1] == "west" || words.buffer[1] == "n" || words.buffer[1] == "s" || words.buffer[1] == "e" || words.buffer[1] == "w")){
		mc->lock(words, things);
	}
	

	else if (words.buffer[0] == "help") help();

	else printf("Don't know what to do.\n");

	return ret;
}

void world::help(){

}