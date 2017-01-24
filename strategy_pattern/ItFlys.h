#ifndef _ITFLYS_H
#define _ITFLYS_H

#include "Flys.h"
#include <string>

using namespace std;

// class for animals which can fly
class ItFlys : public Flys
{
	public:
		virtual string fly();
};

#endif