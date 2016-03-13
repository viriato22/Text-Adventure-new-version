#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "character.h"
#include "item.h"
#include "actions.h"

// TO DO
// Data of creation map																						
// Change according to character position																			[done]	
// Finish movement functions																						[done]
// Actions																											[done move, help & look]

// TO START
// Introduce objects
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
		location[n].createmap(n);
	}
	
	for (int n = 0; n < 1; n++){
		doors[n].createdoors(n);
	}

	look(location, mc);

	do {
		scanf_s("%s", decision, 20);

		action(location, mc, decision, doors);
	} while (mc.death != 1);

	delete[] location;
	system("pause");
	return 0;
}