#include "Bird.h"
#include "ItFlys.h"

#include <iostream>

Bird::Bird()
{
	a = 6;
	setSound("Tweet");

	// We set the Flys interface polymorphically
	// This sets the behavior as a flying Animal
	flyingType = new ItFlys();
}

Bird::~Bird()
{
	if (flyingType != NULL) {
		delete flyingType;
		flyingType = NULL;
	}
}

void Bird::print()
{
	cout << "bird class" << endl;
}

void Bird::print1()
{
	cout << "bird virtual class" << endl;
}