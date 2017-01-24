#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Bird.h"
#include "ItFlys.h"

using namespace std;

int main()
{
	Dog dog;
	Animal *sparky = &dog;   // flyingType variable will have property of Dog class
	Bird bird;
	Animal *tweety = &bird;  // flyingType variable will have property of Bird class
	cout << sparky->tryToFly() << endl;
	cout << tweety->tryToFly() << endl;

	ItFlys itflys;
	sparky->setFlyingAbility(&itflys);
	cout << sparky->tryToFly() << endl;

	// some tests
	dog.print();    // if all classes have same nonvirtual function, variable will execute their own function
	bird.print();
	sparky->print();   // execute base class's nonvirtual function
	tweety->print();
	// if field a inherits from base class, then object of derived class can change the field value. if has own, does not change, excute their own
	cout << dog.a << endl;
	cout << bird.a << endl;
	cout << sparky->a << endl;
	cout << tweety->a << endl;

	sparky->print1();  // polymorphism due to virtual function
	tweety->print1();

	sparky->print2();
	tweety->print2();
	dog.print2();
	bird.print2();




	// dealing with memory
	sparky->flyingType = NULL;     // need to set pointer in object to NULL if reuse

	cout << "Successful!" << endl;
	return 0;
}