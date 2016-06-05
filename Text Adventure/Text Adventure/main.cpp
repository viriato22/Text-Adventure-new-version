#include "String.h"
#include "vector.h"
#include "world.h"

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	char key;
	String text;
	vector<String> words;
	world superworldname;

	while (1){
		if (_kbhit()){
			key = _getch();

			if (key == '\r'){
				std::cout << endl;
				text.tokenize(words);
				//words = text.tokenize();
				if (words[0] == "quit" || words[0] == "exit" || words[0] == "leave" || words[0] == "surrender" || words[0] == "gg" ||words[0] == "Ric"){
					break;
				}
				else{
					superworldname.action(words);
				}
			}
			else if (key == '\b'){
				text--;
				std::cout << '\b' << ' ' << '\b';
			}
			else{
				text += key;
				std::cout << key;
			}
		}
		else{

		}
	}

	std::cout << "You lost" << endl;

	return 0;
}