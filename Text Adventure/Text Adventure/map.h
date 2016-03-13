
class map {
public:

	int id;
	char name[25];
	char description[100];
	int north, south, east, west;
	int items[10];
	char* obstacle;

	void createmap(int n);
};