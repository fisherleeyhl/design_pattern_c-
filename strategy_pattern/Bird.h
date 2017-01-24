#ifndef _BIRD_H
#define _BIRD_H

#include "Animal.h"

class Bird : public Animal
{
	public:
		//int a;
		Bird();
		~Bird();
		void print();
		virtual void print1();
};

#endif