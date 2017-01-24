/*
 * StockObserver.h
 *
 *  Created on: Jan 11, 2017
 *      Author: tj80mb
 */

#ifndef STOCKOBSERVER_H_
#define STOCKOBSERVER_H_

#include "Observer.h"
#include "Subject.h"

class StockObserver : public Observer
{
	private:
		double ibmPrice;
		double aaplPrice;
		double googPrice;

		static int observerIDTracker;  // used as a counter
		int observerID;
		Subject *stockGrabber;  // should be base class of subject
	public:
		StockObserver(Subject *stockGrabber);
		virtual void update(double ibmPrice, double aaplPrice, double googPrice);
		void printThePrice();
};



#endif /* STOCKOBSERVER_H_ */
