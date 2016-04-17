#include <stdlib.h>
#include "entity.h"
#include "map.h"
#include "character.h"
#include "item.h"
#include "actions.h"
#include "String.h"
#include "vector.h"
#include <iostream>

using namespace std;

// FINISHED
// Data of creation map																						
// Change according to character position																			[done]	
// Finish movement functions																						[done]

// TO DO
// Actions																											[done move, help & look]
// Introduce objects																								[weapons, armors, misc, puzzle items]

// TO START
// Introduce NPCs (need to create CLASS)
// Blocades

int main(void) {
	int lose = 0;
	char* text = new char[100];
	vector<String> words;
	map* location = new map[20];
	door* doors = new door[1];
	character mc;

	mc.createmc();

	
	doors[0].createdoors(0);

	look(location, mc);

	do {
		cin >> text;

		tokenize(text, words);

		action(location, mc, words, doors);
	} while (mc.death != 1);

	cout << "Thanks for playing";

	delete[] location;
	delete[] doors;	

	system("pause");
	return 0;
}