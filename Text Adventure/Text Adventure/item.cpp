#include "item.h"
#include <string.h>
#include <iostream>

using namespace std;

void door::createdoors(int n){
	switch (n){
	case 0:
		id = 100;
		onground = 1;
		pickable = 0;
		description = "Sturdy door";
		gate = 1;
		status = 0;
		room = 7;
		direction = 3;
		name = "Sturdy door";
		break;

	default:
		cout << "Error: No door available" << endl;
	}
}