/*
 * Observer.h
 *
 *  Created on: Jan 9, 2017
 *      Author: tj80mb
 */
// Observer class update method is called when the Subject changes

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer
{
	public:
		virtual void update(double ibmPrice, double aaplPrice, double googPrice) = 0;
		virtual ~Observer(){}
};




#endif /* OBSERVER_H_ */
