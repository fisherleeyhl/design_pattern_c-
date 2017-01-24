// The interface is implemented by many other
// subclasses that allow for many types of flying
// without effecting Animal, or Flys.
// Classes that implement new Flys interface
// subclasses can allow other classes to use
// that code eliminating code duplication

#ifndef _FLYS_H
#define _FLYS_H

#include <string>

using namespace std;

class Flys
{
	public:
		virtual string fly() = 0;
};

#endif