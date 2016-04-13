#ifndef ACTIONS_H
#define ACTIONS_H

void action(map* location, character& mc, String& decision, door* doors);
void look(const map* location, const character& mc);
void move(map* location, character& mc, char direction, door* doors);
void help();
void opendoor(map* location, const character& mc, door* doors); 
void closedoor(map* location, const character& mc, door* doors);
void teleport(map* location, character mc);

#endif