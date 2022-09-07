#include "point.h"
#ifndef __SHAPE__HPP
#define __SHAPE__HPP

class Shape
{
	public:
		virtual Point getPointInitial() = 0;
		virtual Point getPointFinal() = 0;
};

#endif // __SHAPE__HPP