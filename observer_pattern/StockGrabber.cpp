/*
 * StockGrabber.cpp
 *
 *  Created on: Jan 10, 2017
 *      Author: tj80mb
 */

#include "StockGrabber.h"
#include <stddef.h>
#include <algorithm>

/*
StockGrabber::StockGrabber()
{
	// field variables need initialization?
}
*/

void StockGrabber::registerObserver(Observer *observer)
{
	observers.push_back(observer);
}

void StockGrabber::unregisterObserver(Observer *observer)
{
	vector<Observer*>::iterator it;
	it = find(observers.begin(), observers.end(), observer);
	observers.erase(it);
}

void StockGrabber::notifyObserver()
{
	for (size_t i = 0; i < observers.size(); i++) {
		observers[i]->update(ibmPrice, aaplPrice, googPrice);
	}
}

void StockGrabber::setIBMPrice(double newIBMPrice)
{
	ibmPrice = newIBMPrice;
	notifyObserver();
}

void StockGrabber::setAAPLPrice(double newAAPLPrice)
{
	aaplPrice = newAAPLPrice;
	notifyObserver();
}

void StockGrabber::setGOOGPrice(double newGOOGPrice)
{
	googPrice = newGOOGPrice;
	notifyObserver();
}
