#include "Dog.h"
#include "CantFly.h"
#include <iostream>

using namespace std;

Dog::Dog()
{
	a = 5;
	setSound("Bark");
	// We set the Flys interface polymorphically
	// This sets the behavior as a non-flying Animal
	flyingType = new CantFly();  // cannot use local memory because local memory only exists in constructor scope, need to create in heap then in destructor to release memory
}

Dog::~Dog()
{
	if (flyingType != NULL) {
		delete flyingType;
		flyingType = NULL;
	}	
}

void Dog::digHole()
{
	cout << "Dug a hole" << endl;
}

void Dog::print()
{
	cout << "dog class" << endl;
}

void Dog::print1()
{
	cout << "dog virual class" << endl;
}
