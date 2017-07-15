
#include"Engine.h"
	void Engine::run(int CBRI,int LE,int steps) {
		int counterOfSteps = 0;
		unsigned long seconds = 30;
		Timer t;
		t.start();
		while (counterOfSteps <=steps) {
			if (t.elapsedTime() >= seconds) {
				simSteps += 1;
				if (simSteps % CBRI == 0) {
					addCows();
					putOnfield();
					
				}
				living(LE);
				counterOfSteps++;
				t.start();
			}
		}
	}

	void Engine::living(int LE) {
		for (int i = 0; i < cowsOnField.size(); i++)
		{
			cowsOnField[i]->extractNeighbours(fieldOfWorld);
			cowsOnField[i]->moveTo();
			cowsOnField[i]->gaze();
			if ((cowsOnField[i]->decreseEnergy())&& (cowsOnField[i]->ageIncrement(LE))) {
				cowsOnField.erase(cowsOnField.begin() + i-1);
				delete cowsOnField[i];
			}

		}
	}
	void Engine::ToString() {
	 this->fieldOfWorld->fieldToString();
	}

	int simSteps=0;
	Field * fieldOfWorld=new Field();
	std::vector<Cow *> cows;
	std::vector<Cow *> cowsOnField;
	Farm* farm=new Farm();
	void Engine::addCows() {
		cows.push_back(farm->createACow());
	}	
	void Engine::putOnfield() {
		Cow* cow=cows.at(0);
		int randomPos1 = (rand() % 19 + 0);
		int randomPos2= (rand() % 19 + 0);
		Cell* newCell = fieldOfWorld->viewCells(randomPos1,randomPos2);
		cow->setCurrentCell(newCell);
		cowsOnField.push_back(cow);
		cows.pop_back();
	}