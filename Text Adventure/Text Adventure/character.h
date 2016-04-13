#ifndef CHARACTER_H
#define CHARACTER_H

class character {
public:
	int position;
	int weight;
	int inventory[10];
	int death;

public:
	void createmc();
	void finish();
};

#endif