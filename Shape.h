#include "Point.h"
#include <string>

#ifndef __SHAPE__HPP
#define __SHAPE__HPP

class Shape
{
	public:
		virtual Point getPointInitial() = 0;
		virtual Point getPointFinal() = 0;
		virtual string getShapeType() = 0;
};

#endif // __SHAPE__HPP
