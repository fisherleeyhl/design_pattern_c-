/*
 * EnergyShip.cpp
 *
 *  Created on: Jan 9, 2017
 *      Author: tj80mb
 */
#include "EnemyShip.h"
#include <iostream>

string EnemyShip::getName()
{
	return name;
}

void EnemyShip::setName(string newName)
{
	name = newName;
}

double EnemyShip::getDamage()
{
	return amtDamage;
}

void EnemyShip::setDamage(double newDamage)
{
	amtDamage = newDamage;
}

void EnemyShip::followHeroShip()
{
	cout<<getName()<<" is following the hero"<<endl;
}

void EnemyShip::displayEnemyShip()
{
	cout<<getName()<<" is on the screen"<<endl;
}

void EnemyShip::enemyShipShoots()
{
	cout<<getName()<<" attacks and does "<<getDamage()<<" damage to hero"<<endl;
}

