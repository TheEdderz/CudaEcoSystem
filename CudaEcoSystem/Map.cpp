#include <iostream>
#include <cstdlib>  // for rand
#include <ctime>
#include "Map.h"

using namespace std;


//constructor
Map::Map(unsigned int seed) {
		//randomise the random number generator
		srand(seed);
		//randomly set array a
		for (int i = 0; i < MAPSIZE; i++)
		{
			for (int j = 0; j < MAPSIZE; j++)
			{
				map[i][j] = NULL;
			}
		}
}

//deconstructor
Map::~Map() {
	for (int i = 0; i < MAPSIZE; i++) {
		for (int j = 0; j < MAPSIZE; j++) {
			if (map != NULL) {
				delete map[i][j];
			}
		}
	}
}

//display array function
void Map::display() const {
	cout << endl << endl;
	for (int j = 0; j < MAPSIZE; j++) {
		for (int i = 0; i < MAPSIZE; i++) {
			if (map[i][j] == NULL) {
				cout << ".";
			}
		}
		cout << endl;
	}
}