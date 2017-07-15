#include "Cell.h"
#include"Field.h"
#include <string>

	Cell * Field::viewCells(int  x,int y ) {
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if(i==x&&j==y)
			   return field[i][j];
			}
		}
		return new Cell(-1, -1);
	}
	 Field::Field() {
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				field[i][j] = new Cell(i, j);
			}
		}
	}
	 Field::~Field()
	 {
	 }
	void Field::fieldToString() {
		std::string result = "";
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (field[i][j]->hasAString()) {
					result += "X";
				}
				result += "*";
			}
			result += "\n";
		}
	}
