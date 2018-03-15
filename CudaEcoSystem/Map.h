#pragma once
#include "Animal.h"

//size of the grid
const int MAPSIZE = 80;

struct Position
{
	int x;
	int y; 
};

class Map
{
public: 
	
	Map(unsigned int seed);		//constructor
	~Map();	//destructor
	void display() const; //displays the world


private:
	Animal* map[MAPSIZE][MAPSIZE];

};
