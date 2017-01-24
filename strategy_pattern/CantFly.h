#ifndef _CANTFLY_H
#define _CANTFLY_H

#include "Flys.h"
#include <string>

using namespace std;

// class for animals which cannot fly
class CantFly : public Flys
{
	public:
		virtual string fly();
};

#endif