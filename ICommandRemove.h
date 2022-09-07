#include "Point.h"
#ifndef ICOMMANDREMOVE_H_
#define ICOMMANDREMOVE_H_

class ICommandRemove{
	virtual void remove(int id, Point point)=0;
};

#endif
