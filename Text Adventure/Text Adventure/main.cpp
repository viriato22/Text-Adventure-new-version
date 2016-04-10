#include <stdlib.h>
#include "entity.h"
#include "map.h"
#include "character.h"
#include "item.h"
#include "actions.h"
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
	char decision[20];
	map* location = new map[20];
	door* doors = new door[0];
	character mc;

	mc.createmc();

	for (int n = 0; n < 20; n++){
		location[n].createmap1(n);
	}
	
	for (int n = 0; n < 1; n++){
		doors[n].createdoors(n);
	}

	look(location, mc);

	do {
		cin >> decision;

		action(location, mc, decision, doors);
	} while (mc.death != 1);

	delete[] location;
	system("pause");
	return 0;
}