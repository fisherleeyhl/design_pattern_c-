/*
 * main.cpp
 *
 *  Created on: Jan 6, 2017
 *      Author: tj80mb
 */

#include <iostream>
#include "EnemyShipFactory.h"

using namespace std;

void doStuffEnemy(EnemyShip *theEnemy)
{
	theEnemy->displayEnemyShip();
	theEnemy->followHeroShip();
	theEnemy->enemyShipShoots();
}

int main(int argc, char **argv)
{
	// create the factory object
	EnemyShipFactory shipFactory;

	 /*
	        EnemyShip theEnemy = null;
	        // Old way of creating objects
	        // When we use new we are not being dynamic
	        EnemyShip ufoShip = new UFOEnemyShip();
	        doStuffEnemy(ufoShip);
	        System.out.print("\n");

	        // -----------------------------------------
	        // This allows me to make the program more dynamic
	        // It doesn't close the code from being modified
	        // and that is bad!

	        // Defines an input stream to watch: keyboard
	        Scanner userInput = new Scanner(System.in);
	        String enemyShipOption = "";
	        System.out.print("What type of ship? (U or R)");

	        if (userInput.hasNextLine()){
	            enemyShipOption = userInput.nextLine();
	        }

	        if (enemyShipOption == "U"){
	            theEnemy = new UFOEnemyShip();
	        } else

	        if (enemyShipOption == "R"){
	            theEnemy = new RocketEnemyShip();
	        } else {
	            theEnemy = new BigUFOEnemyShip();
	        }

	        doStuffEnemy(theEnemy);
	        // --------------------------------------------
	*/



	// create enemy ship object
	EnemyShip *theEnemy = NULL;
	cout<<"What type of ship? (U / R / B)"<<endl;
	string typeOfShip;
	cin>>typeOfShip;
	theEnemy = shipFactory.makeEnemyShip(typeOfShip);
	if (theEnemy != NULL) {
		doStuffEnemy(theEnemy);
		delete theEnemy;
	}
	else {
		cout<<"Please enter U, R, or B next time"<<endl;
	}

	cout<<"Successful!"<<endl;
	return 0;
}


