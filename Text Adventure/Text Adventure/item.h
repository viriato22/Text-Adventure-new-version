
class item {
public:

	int id;
	char name[20];
	bool onground; // 0 -> on inventory, 1 -> on ground
	bool usable; // 0 -> no, 1 -> yes
	char lookaction_onground[100];
	char lookaction_oninventory[100];
	int weight;
	bool pickable;

};

class door {
public:

	item data;
	bool gate;
	bool status; // 0 -> Closed, 1 -> Open
	int direction; // 0 -> North, 1 -> South, 2 ->  East, 3 -> West
	int room;

public:

	void createdoors(int n);
};