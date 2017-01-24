/*
 * StockObserver.cpp
 *
 *  Created on: Jan 11, 2017
 *      Author: tj80mb
 */

#include "StockObserver.h"
#include <iostream>

using namespace std;

int StockObserver::observerIDTracker = 0;  // initialization of non constant static field, shared by all objects

StockObserver::StockObserver(Subject *stockGrabber)
{
	this->stockGrabber = stockGrabber;
	this->observerID = ++observerIDTracker;
	cout<<"New Observer "<<this->observerID<<endl;
	this->stockGrabber->registerObserver(this);
}

void StockObserver::update(double ibmPrice, double aaplPrice, double googPrice)
{
	this->ibmPrice = ibmPrice;
	this->aaplPrice = aaplPrice;
	this->googPrice = googPrice;
	printThePrice();
}

void StockObserver::printThePrice()
{
	cout<<observerID<<endl;
	cout<<"IBM: "<<ibmPrice<<endl;
	cout<<"AAPL: "<<aaplPrice<<endl;
	cout<<"GOOG: "<<googPrice<<endl;
}



