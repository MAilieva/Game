#include"Engine.cpp"
#include"UIcpp.cpp"
#include<iostream>
int main() {
	UI *u = new UI();
	u->printField();
	int CBRI;
	int LE;
	int steps;
    std::cout << "Enter CBRI " << std::endl;
	std::cin >> CBRI;
	std::cout << "Enter LE " << std::endl;
	std::cin >> LE;
	std::cout << "Enter number of steps" << std::endl;
	std::cin >> steps;
	u->e.run(CBRI, LE, steps);
	u->printField();
	return 0;
}