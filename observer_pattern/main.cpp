/*
 * main.cpp
 *
 *  Created on: Jan 9, 2017
 *      Author: tj80mb
 */


#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "StockGrabber.h"
#include "StockObserver.h"

using namespace std;

int main(int argc, char **argv)
{

	StockGrabber stockGrabber;
	StockObserver stockObserver1(&stockGrabber);

	stockGrabber.setIBMPrice(197.00);
	stockGrabber.setAAPLPrice(677.60);
	stockGrabber.setGOOGPrice(676.40);

	StockObserver stockObserver2(&stockGrabber);

	stockGrabber.setIBMPrice(197.00);
	stockGrabber.setAAPLPrice(677.60);
	stockGrabber.setGOOGPrice(676.40);

	stockGrabber.unregisterObserver(&stockObserver1);

	stockGrabber.setIBMPrice(197.00);
	stockGrabber.setAAPLPrice(677.60);
	stockGrabber.setGOOGPrice(676.40);

	// multi-thread code here


	cout<<"successful"<<endl;
}

