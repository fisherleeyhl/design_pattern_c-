/*
 * Subject.h
 *
 *  Created on: Jan 9, 2017
 *      Author: tj80mb
 */

// The Subject class handles registering, unregistering, and notifying the observers

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include "Observer.h"

class Subject
{
	public:
		virtual void registerObserver(Observer *o) = 0;
		virtual void unregisterObserver(Observer *o) = 0;
		virtual void notifyObserver() = 0;
		virtual ~Subject() {}
};



#endif /* SUBJECT_H_ */
