#pragma once
#include"Cell.h"
class Field {
public:
	Cell * viewCells(int  x, int y);
	 Field();
	~Field();
	void fieldToString();
private:
	Cell* field[20][20];

}; 
