#include "Animal.h"
#include <iostream>

void Animal::setName(string newName)
{
	name = newName;
}

string Animal::getName()
{
	return name;
}

void Animal::setHeight(double newHeight)
{
	height = newHeight;
}

double Animal::getHeight()
{
	return height;
}

void Animal::setWeight(int newWeight)
{
	weight = newWeight;
}

double Animal::getWeight()
{
	return weight;
}

void Animal::setFavFood(string newFavFood)
{
	favFood = newFavFood;
}

string Animal::getFavFood()
{
	return favFood;
}

void Animal::setSpeed(double newSpeed)
{
	speed = newSpeed;
}

double Animal::getSpeed()
{
	return speed;
}

void Animal::setSound(string newSound)
{
	sound = newSound;
}

string Animal::getSound()
{
	return sound;
}

string Animal::tryToFly()
{
	return flyingType->fly();
}

void Animal::setFlyingAbility(Flys *newFlyType)
{
	if (flyingType != NULL) {
		delete(flyingType);
		flyingType = NULL;
	}

	flyingType = newFlyType;
}

void Animal::print()
{
	cout << "animal class" << endl;
}

void Animal::print1()
{
	cout << "animal virtual class" << endl;
}

void Animal::print2()
{
	cout << "animal virtual class 222" << endl;
}