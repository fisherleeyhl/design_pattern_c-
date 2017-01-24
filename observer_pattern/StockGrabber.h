/*
 * StockGrabber.h
 *
 *  Created on: Jan 10, 2017
 *      Author: tj80mb
 */

#ifndef STOCKGRABBER_H_
#define STOCKGRABBER_H_

#include <vector>
#include "Subject.h"
#include "Observer.h"

using namespace std; // std namespace includes vector

class StockGrabber : public Subject
{
	private:
		vector<Observer *> observers;  // should be base class of observer
		double ibmPrice;
		double aaplPrice;
		double googPrice;
	public:
		//StockGrabber();
		virtual void registerObserver(Observer *o);
		virtual void unregisterObserver(Observer *o);
		virtual void notifyObserver();
		void setIBMPrice(double newIBMPrice);
		void setAAPLPrice(double newAAPLPrice);
		void setGOOGPrice(double newGOOGPrice);
};



#endif /* STOCKGRABBER_H_ */
