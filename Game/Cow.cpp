#include "Cow.h"
#include "Field.h"
#include "Cell.h"
#include "vector"

	Cow::Cow()
	{
		this->age = 0;
		this->energy = 0;
	}
	void Cow::gaze() {
		int grassEaten = 0;
		while (grassEaten <= age + 3) {
			this->energy+=1;
			grassEaten += 1;
			this->currentCell->eatGrass();
		}
	}
	void Cow::extractNeighbours(Field * field) {
		for (int i =currentCell->coordinateX()-1; i <= currentCell->coordinateX() +1; i++)
		{
			for (int j = currentCell->coordinateY()- 1; j <= currentCell->coordinateY() + 1; j++)
			{
				if (field->viewCells(i, j)->coordinateX() !=-1&& field->viewCells(i, j)->coordinateY()!=-1) {
					this->neighborcells.push_back(field->viewCells(i, j));
			}

			}
		}
	}
	void Cow::extractNeighboursAdvanced(Field*  field) {
		for (int i = currentCell->coordinateX() - 2; i <= currentCell->coordinateX()+ 2; i++)//broken encapsulation of coordinates
		{
			for (int j = currentCell->coordinateY() - 2; j <= currentCell->coordinateY() + 2; j++)
			{
				if (field->viewCells(i, j)->coordinateX() != -1 && field->viewCells(i, j)->coordinateY() != -1) {
					this->neighborcells.push_back(field->viewCells(i, j));
				}

			}
		}
	}
	void  Cow::moveTo() {
		this->currentCell = currentCell->FindBestGrass(this->neighborcells);
		this->currentCell->hasACowSet(true);
	}
	bool Cow::ageIncrement(int LE) {
		this->age++;
		if (age >= LE) {
			return true;
		}
		return false;

	}
		bool Cow::decreseEnergy(){
		this->energy -= energy * 10 / 100;
		if (this->energy > 0) {
			return false;
		}
		else
			return true;
	}
	void Cow::setCurrentCell(Cell * cell){
		this->currentCell = cell;
		this->currentCell->hasACowSet(true);
	}

	Cow::~Cow()
	{
	}


