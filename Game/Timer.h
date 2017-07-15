#pragma once
#include <iostream>
#include <time.h>

class Timer {

public:
	void start();
	unsigned long elapsedTime();
	bool isTimeout(unsigned long seconds);
private:
	unsigned long begTime;
};

