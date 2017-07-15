#pragma once

#include "Cow.h"
#include "Timer.h"
#include "Farm.h"
#include "Field.h"
#include<vector>
#include<random>
#include <string>

class Engine {
public:
	void run(int CBRI, int LE, int steps);
	void living(int LE);
	void ToString();

private:
	int simSteps;
	Field * fieldOfWorld;
	std::vector<Cow *> cows;
	std::vector<Cow *> cowsOnField;
	Farm* farm;
	void addCows();
	void putOnfield();
};