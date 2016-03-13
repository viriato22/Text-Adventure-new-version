#include "item.h"
#include <string.h>

void door::createdoors(int n){
	switch (n){
	case 0:
		data.id = 100;
		data.onground = 1;
		data.pickable = 0;
		strcpy_s(data.lookaction_onground, 100, "Sturdy door\n");
		gate = 1;
		status = 0;
		room = 7;
		direction = 3;
		strcpy_s(data.name, 20, "Sturdy door");
	}
}