#include "character.h"
#include <iostream>
#include "map.h"
//#include "item.h"

character::character(const char* title, const char* description, int position):entity(name, description, position){
	type = PLAYER;
}

character::~character(){}

void character::look(const vector<String>& words, const vector<entity*> things) const{
	int aux, counter, counter2;

	for (counter = 0; counter < things.num_elements; counter++){
		if (things[counter]->id == position || (things[counter]->position == position && things[counter]->type != PLAYER)){
			if (things[counter]->id == position){
				for (aux = 0; aux < things[counter]->name.length(); aux++) {
					cout << things[counter]->name[aux];
				}
				cout << endl;
			}

			for (aux = 0; aux < things[counter]->description.length(); aux++) {
				cout << things[counter]->description[aux];
			}

			cout << endl;
		}
	}
}

bool character::move(const vector<String>& words, const vector<entity*>& things){
	int aux, newpos;
	bool locked;

	for (aux = 0; things[aux]->id != position; aux++);

	map* temp = (map*)things[aux];
	
	if (words[0] == "n" || words[0] == "north" || words[1] == "n" || words[1] == "north"){
		newpos = temp->north;
		locked = temp->lock % 10;
	}
	else if (words[0] == "s" || words[0] == "south" || words[1] == "s" || words[1] == "south"){
		newpos = temp->south;
		locked = (temp->lock % 100) / 10;
	}
	else if (words[0] == "e" || words[0] == "east" || words[1] == "e" || words[1] == "east"){
		newpos = temp->east;
		locked = (temp->lock % 1000) / 100;
	}
	else if (words[0] == "w" || words[0] == "west" || words[1] == "w" || words[1] == "west"){
		newpos = temp->west;
		locked = temp->lock / 1000;
	}
	else{
		return false;
	}

	if (newpos != 33 || locked == false){
		position = newpos;
	}
	else if (locked == true){
		cout << "It's locked" << endl;
		return false;
	}
	else{
		cout << "Can't go that way" << endl;
		return false;
	}

	return true;
}

bool character::lock(const vector<String>& words, vector<entity*>& things){
	int i;

	for (i = 0; things[i]->id != position; i++);

	map* temp = (map*)things[i];
	bool locked;
	int barrier;

	if (words[0] == "n" || words[0] == "north" || words[1] == "n" || words[1] == "north"){
		locked = temp->lock % 10;
		barrier = 1;
	}
	else if (words[0] == "s" || words[0] == "south" || words[1] == "s" || words[1] == "south"){
		locked = (temp->lock % 100) / 10;
		barrier = 10;
	}
	else if (words[0] == "e" || words[0] == "east" || words[1] == "e" || words[1] == "east"){
		locked = (temp->lock % 1000) / 100;
		barrier = 100;
	}
	else if (words[0] == "w" || words[0] == "west" || words[1] == "w" || words[1] == "west"){
		locked = temp->lock / 1000;
		barrier = 1000;
	}
	else{
		return false;
	}

	if (!locked){
		temp->lock += barrier;
	}
	else{
		cout << "It's alredy locked" << endl;
		return false;
	}

	return true;
}

bool character::unlock(const vector<String>& words, vector<entity*>& things){
	int i;

	for (i = 0; things[i]->id != position; i++);

	map* temp = (map*)things[i];
	bool locked;
	int barrier;

	if (words[0] == "n" || words[0] == "north" || words[1] == "n" || words[1] == "north"){
		locked = temp->lock % 10;
		barrier = 1;
	}
	else if (words[0] == "s" || words[0] == "south" || words[1] == "s" || words[1] == "south"){
		locked = (temp->lock % 100) / 10;
		barrier = 10;
	}
	else if (words[0] == "e" || words[0] == "east" || words[1] == "e" || words[1] == "east"){
		locked = (temp->lock % 1000) / 100;
		barrier = 100;
	}
	else if (words[0] == "w" || words[0] == "west" || words[1] == "w" || words[1] == "west"){
		locked = temp->lock / 1000;
		barrier = 1000;
	}
	else{
		return false;
	}

	if (!locked){
		cout << "It's already unlocked" << endl;
		return false;
	}
	else{
		temp->lock -= barrier;
	}

	return true;
}
