#ifndef _DOG_H
#define _DOG_H

#include "Animal.h"

class Dog : public Animal
{
	public:
		//int a;
		void digHole();
		Dog();
		~Dog();
		void print();
		virtual void print1();
};

#endif
