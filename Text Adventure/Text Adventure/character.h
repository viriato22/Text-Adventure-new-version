#ifndef character_H
#define character_H

#include "entity.h"

using namespace std;

class character : public entity{
public:
	character(const char* name, const char* description, int position);
	~character();

public:
	void look(const vector<String>& words, const vector<entity*> things) const;
	bool move(const vector<String>& words, const vector<entity*>& things);
	bool lock(const vector<String>& words, vector<entity*>& things);
	bool unlock(const vector<String>& words, vector<entity*>& things);
};

#endif