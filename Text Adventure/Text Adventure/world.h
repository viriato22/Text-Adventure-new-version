#ifndef world_H
#define world_H

#include "String.h"
#include "character.h"
#include "entity.h"
#include <list>

#include <time.h>

#define TICK_FREQUENCY 0.5f

using namespace std;

class world{
public:
	world();
	~world();

public:

	bool tick(vector<String>& aux);
	bool action(vector<String>& aux);
	void loop();
	void help();

private:

	clock_t timer;
	vector<entity*> things;
	character* mc = new character("MC", "Hero of the story", 0);
};

#endif