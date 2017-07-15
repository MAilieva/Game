#pragma once
#include"Field.h"
class Cow
{
public:
	Cow();
	~Cow();
	void gaze();
	bool ageIncrement(int LE);
	void extractNeighbours(Field * field);
	void moveTo();
	bool decreseEnergy();
	void setCurrentCell(Cell * cell);
	void extractNeighboursAdvanced(Field * field);
private:
	int energy;
	int age;
	int position;
	Cell* currentCell;
	std::vector<Cell *> neighborcells;

};
