#pragma once

enum OrganismType {PRED, PREY};

class Map; //forward declaration

class Animal {
public:
	Animal(Map* aMap, int xcoord, int ycoord); //create animal  at coord
	virtual ~Animal() { }

	virtual char representation() const = 0; //representation of this animal

	virtual void move() = 0; //moves animal

	virtual void breed() = 0; // breed animal

	virtual AnimalType getType() const = 0; // returns type

	void setMoved(bool hasMoved); //flags as moved 

	virtual int size() const = 0; //size of animal

	bool hasMoved() const; //has the animal moved

	virtual bool isDead() const; //returns whether the animal is dead or not

	bool in_range(int xx, int yy); //checks whether the animal is in range
	
protected:
	int x;	//position
	
	int y;	//position
	
	Map* map; //pointer to position

	virtual void createOffspring(int whereX, int whereY) = 0;  //creates new animals

	void movesTo(int xNew, int yNew); // moves animal from a to b 

	void breedAtNewCell(); //creates new animal doesnt breed off grid

	bool moved; // has the animal moved 

	int breedTicks; //counts how long since last breeding

	private:
};