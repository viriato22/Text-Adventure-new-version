#ifndef ACTIONS_H
#define ACTIONS_H

void tokenize(char* text, vector<String>& words);

void action(map* location, character& mc, vector<String>& words, door* doors);
void look(const map* location, const character& mc);
void move(map* location, character& mc, char direction, door* doors);
void help();
void opendoor(map* location, const character& mc, door* doors); 
void closedoor(map* location, const character& mc, door* doors);
void teleport(map* location, character mc);

#endif