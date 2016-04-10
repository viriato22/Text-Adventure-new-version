#include "map.h"
#include "character.h"
#include "item.h"
#include <iostream>
#include "actions.h"
#include "entity.h"

using namespace std;

void action(map* location, character mc, char* decision, door* doors) {
	char dir = decision[0];

	if ((decision[1] == '\0') && (dir == 'n' || dir == 's' || dir == 'e' || dir == 'w')) {
		move(location, mc, dir, doors);
	}
	else if (decision == "look") {
		look(location, mc);
	}
	else if (decision == "q" || decision == "quit") {
		//finish
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

void look(map* location, character mc) {
	int aux, counter;

	for (counter = 0; location[counter].id != mc.position; counter++);

	for (aux = 0; aux < strlen(location[counter].name); aux++) {
		cout << location[counter].name[aux];
	}
	cout << endl;

	for (aux = 0; aux < strlen(location[counter].description); aux++) {
		cout << location[counter].description[aux];
	}

	cout << endl;
}

void move(map* location, character mc, char direction, door* doors) {
	int previous = mc.position;
	bool door;

	switch (direction) {
	case 'n':
		if (location[previous].north != 33) {
			for (int aux = 0; aux < 0; aux++){
				if ((doors[aux].room == previous && doors[aux].direction == 0) && doors[aux].status == 0){
					door = 1;
				}
			}
			if (door != 1){
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
					door = 1;
				}
			}
			if (door != 1){
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
					door = 1;
				}
			}
			if (door != 1){
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
					door = 1;
				}
			}
			if (door != 1){
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

void opendoor(map* location, character mc, door* doors){
	for (int aux = 0; aux < 0; aux++){
		if (doors[aux].room == mc.position && doors[aux].status != 1){
			doors[aux].status = 1;
		}
	}
}

void closedoor(map* location, character mc, door* doors){
	for (int aux = 0; aux < 0; aux++){
		if (doors[aux].room == mc.position && doors[aux].status != 0){
			doors[aux].status = 0;
		}
	}
}