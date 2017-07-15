#pragma once
#include<vector>
using namespace std;
class Cell {
public:
	Cell(int i, int y);
	void eatGrass() ;
	int coordinateX();
	int coordinateY();
	Cell* Cell::FindBestGrass(vector<Cell*> c1);
	void hasACowSet(bool x);
	bool hasAString();
private:
	int grass;
	int x;
	int y;
	bool hasACow;
};