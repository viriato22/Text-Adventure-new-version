#include "map.h"
#include "character.h"
#include "item.h"
#include <iostream>
#include "actions.h"
#include "entity.h"

using namespace std;

void action(map* location, character& mc, String& decision, door* doors) {
	if ((decision == "n") || (decision == "north") || (decision == "s") || (decision == "south") || (decision == "e") || (decision == "east") || (decision == "w") || (decision == "west")) {
		char dir = decision.text[0];

		move(location, mc, dir, doors);
	}
	else if (decision == "look") {
		look(location, mc);
	}
	else if (decision == "q" || decision == "quit") {
		mc.finish();
	}
	else if (decision == "help"){
		help();
	}
	else if (decision == "open door"){
		opendoor(location, mc, doors);
	}
	else if (decision == "close door"){
		closedoor(location, mc, doors);
	}
}

void look(const map* location, const character& mc) {
	int aux, counter;

	for (counter = 0; location[counter].id != mc.position; counter++);

	for (aux = 0; aux < location[counter].name.length(); aux++) {
		cout << location[counter].name[aux];
	}
	cout << endl;

	for (aux = 0; aux < location[counter].description.length(); aux++) {
		cout << location[counter].description[aux];
	}

	cout << endl;
}

void move(map* location, character& mc, char direction, door* doors) {
	int previous = mc.position;
	bool gate = false;

	switch (direction) {
	case 'n':
		if (location[previous].north != 33) {
			for (int aux = 0; aux < 0; aux++){
				if ((doors[aux].room == previous && doors[aux].direction == 0) && doors[aux].status == 0){
					gate = true;
				}
			}
			if (gate != true){
				mc.position = location[previous].north;
			}
			else {
				cout << "A door is blocking your path" << endl;
			}
		}
		else {
			//blocade();
		}
		break;
	case 's':
		if (location[previous].south != 33) {
			for (int aux = 0; aux < 0; aux++){
				if ((doors[aux].room == previous && doors[aux].direction == 1) && doors[aux].status == 0){
					gate = 1;
				}
			}
			if (gate != 1){
				mc.position = location[previous].south;
			}
			else {
				cout << "A door is blocking your path" << endl;
			}
		}
		else {
			//blocade();
		}
		break;
	case 'e':
		if (location[previous].east != 33) {
			for (int aux = 0; aux < 0; aux++){
				if ((doors[aux].room == previous && doors[aux].direction == 2) && doors[aux].status == 0){
					gate = 1;
				}
			}
			if (gate != 1){
				mc.position = location[previous].east;
			}
			else {
				cout << "A door is blocking your path" << endl;
			}
		}
		else {
			//blocade();
		}
		break;
	default:
		if (location[previous].west != 33) {
			for (int aux = 0; aux < 0; aux++){
				if ((doors[aux].room == previous && doors[aux].direction == 3) && doors[aux].status == 0){
					gate = 1;
				}
			}
			if (gate != 1){
				mc.position = location[previous].west;
			}
			else {
				cout << "A door is blocking your path" << endl;
			}
		}
		else {
			//blocade();
		}
	}
	look(location, mc);
}

void help(){
	cout << "To move write n/s/e/w\n";
	cout << "To look write look\n";
	cout << "To quit write q or quit\n";
	cout << "To open a door write open door";
	cout << "To close a door write close door";
}

void opendoor(map* location, const character& mc, door* doors){
	for (int aux = 0; aux < 0; aux++){
		if (doors[aux].room == mc.position && doors[aux].status != 1){
			doors[aux].status = 1;
		}
	}
}

void closedoor(map* location, const character& mc, door* doors){
	for (int aux = 0; aux < 0; aux++){
		if (doors[aux].room == mc.position && doors[aux].status != 0){
			doors[aux].status = 0;
		}
	}
}

void teleport(map* location, character& mc, String& decision){
	mc.position = decision.text[5];
	look(location, mc);
}