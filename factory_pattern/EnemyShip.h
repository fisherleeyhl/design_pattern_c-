/*
 * EnergyShip.h
 *
 *  Created on: Jan 9, 2017
 *      Author: tj80mb
 */

#ifndef ENEMYSHIP_H_
#define ENEMYSHIP_H_

#include <string>

using namespace std;

class EnemyShip
{
	private:
		string name;
		double speed;
		double directionX;
		double directionY;
		double amtDamage;
	public:
		string getName();
		void setName(string newName);
		double getDamage();
		void setDamage(double newDamage);

		void followHeroShip();
		void displayEnemyShip();
		void enemyShipShoots();
};



#endif /* ENEMYSHIP_H_ */
