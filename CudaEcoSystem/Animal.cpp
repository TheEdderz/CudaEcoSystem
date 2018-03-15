#include <iostream>
#include "Animal.h"
#include "Map.h"

//place an animal at location
Animal::Animal(Map* aMap, int xcoord, int ycoord) {
	map = aMap;
	x = xcoord;
	y = ycoord;
	breedTicks = 0;
	moved = false;
	map->setAt(x, y, this);
	}

//flags animal as moved
void Animal::setMoved(bool hasMoved) {
	moved = hasMoved;
}

//has the animal moved
bool Animal::hasMoved() const {
	return moved; 
}

//moves the animal from a to b 
void Animal::movesTo(int xNew, int yNew) {
	map->setAt(xNew, yNew, map->getAt(x, y));
	map->setAt(x, y, NULL);
	x = xNew;
	y = yNew;
	map - getAt(x, y)->setMoved(true);
}

//breeds a new animal using generateoffspring 
void Animal::breedAtNewCell() {
	if ((map - getAt(x, y + 1) == NULL) && in_range(x, y + 1))
	{
		generateOffspring(x, y + 1);
	}
	else if ((map - getAt(x, y - 1) == NULL) && in_range(x, y - 1))
	{
		generateOffspring(x, y - 1);
	}
	else if ((map - getAt(x + 1, y) == NULL) && in_range(x + 1, y))
	{
		generateOffspring(x + 1, y);
	}
	else if ((map - getAt(x - 1, y) == NULL) && in_range(x - 1, y))
	{
		generateOffspring(x - 1, y);
	}
}

//is the animal in range
bool Animal::in_range(int xx, int yy)
{
	return (xx >= 0) && (xx < MAPSIZE);
}

//returns if hte animal is dead or not
bool Animal::isDead() const {
	return false;
}