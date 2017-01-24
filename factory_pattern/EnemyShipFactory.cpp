/*
 * EnemyShipFactory.cpp
 *
 *  Created on: Jan 9, 2017
 *      Author: tj80mb
 */

#include "EnemyShipFactory.h"
#include "UFOEnemyShip.h"
#include "RocketEnemyShip.h"
#include "BigUFOEnemyShip.h"

EnemyShip *EnemyShipFactory::makeEnemyShip(string newShipType)
{
	EnemyShip *newShip = NULL;
	if (newShipType == "U") {
		newShip = new UFOEnemyShip();
	}
	else if (newShipType == "R") {
		newShip = new RocketEnemyShip();
	}
	else if (newShipType == "B") {
		newShip = new BigUFOEnemyShip();
	}
	return newShip;
}



