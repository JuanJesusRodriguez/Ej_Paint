#ifndef __IFACTORYSHAPE__
#define __IFACTORYSHAPE__

#include "Shape.h"
#include "Color.h"

class IFactoryShape
{
public:
	virtual Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea) = 0;
};

#endif