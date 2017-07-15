#include "Cell.h"
#include <vector>

	Cell::Cell (int x,int y) {
		this->x = x;
		this->y = y; 
		this->grass = 20;
}
	void Cell::eatGrass() {
		grass =grass -1;
}
	int Cell::coordinateX() {
		return this->x;
	}
	int Cell::coordinateY() {
		return this->y;
	}
	 Cell* Cell::FindBestGrass(std::vector<Cell*> c1) {
		int max =0;
		Cell * theCell=new Cell(0,0);
		for (int i = 0; i < c1.size(); i++)
		{
			if (c1[i]->grass > max) {
				max = c1[i]->grass;
				theCell = c1[i];
			}
		}
		return theCell;
	}
	 void Cell::hasACowSet(bool x) {
		 if (x) {
			this->hasACow=true;
		 }
		 else
		 {
			 this->hasACow = false;
		 }
	 }
	 bool Cell::hasAString() {
		 return hasACow;
	 }


