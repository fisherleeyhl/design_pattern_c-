/*
 * EnemyShipFactory.h
 *
 *  Created on: Jan 9, 2017
 *      Author: tj80mb
 */

#ifndef ENEMYSHIPFACTORY_H_
#define ENEMYSHIPFACTORY_H_

// This is a factory thats only job is creating ships
// By encapsulating ship creation, we only have one
// place to make modifications
#include <string>
#include "EnemyShip.h"
using namespace std;

class EnemyShipFactory
{
	public:
		EnemyShip *makeEnemyShip(string newShipType);
};



#endif /* ENEMYSHIPFACTORY_H_ */
