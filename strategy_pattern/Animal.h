#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>
#include "Flys.h"

using namespace std;

class Animal
{
	private:
		string name;
		double height;
		int weight;
		string favFood;
		double speed;
		string sound;
	public:
		// Instead of using an interface in a traditional way
		// we use an instance variable that is a subclass
		// of the Flys interface.
		
		// Animal doesn't care what flyingType does, it just
		// knows the behavior is available to its subclasses
		
		// This is known as Composition : Instead of inheriting
		// an ability through inheritance the class is composed
		// with Objects with the right ability

		// Composition allows you to change the capabilities of
		// objects at run time!

		Flys *flyingType;
		int a;

		void setName(string newName);
		string getName();
		void setHeight(double newHeight);
		double getHeight();
		void setWeight(int newWeight);
		double getWeight();
		void setFavFood(string newFavFood);
		string getFavFood();
		void setSpeed(double newSpeed);
		double getSpeed();
		void setSound(string newSound);
		string getSound();
		string tryToFly();
		void setFlyingAbility(Flys *newFlyType);
		void print();
		virtual void print1();
		void print2();


    /* BAD
    * You don't want to add methods to the super class.
    * You need to separate what is different between subclasses
    * and the super class
    public void fly(){
	   System.out.println("I'm flying");
    }
    */

};

#endif