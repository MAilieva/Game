#include "Farm.h"
#include"Cow.h"

	Farm::Farm() {
	
	}
	Cow * Farm::createACow()
	{
		Cow* cow=new Cow();
		
		return cow;
	}
	Farm::~Farm()
	{
	}


