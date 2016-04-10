#include "item.h"
#include <string.h>

void door::createdoors(int n){
	switch (n){
	case 0:
		id = 100;
		onground = 1;
		pickable = 0;
		strcpy_s(description, 100, "Sturdy door\n");
		gate = 1;
		status = 0;
		room = 7;
		direction = 3;
		strcpy_s(name, 20, "Sturdy door");
	}
}