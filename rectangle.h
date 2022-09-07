#include "shape.h"
#include "point.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle: public Shape
{
	public:
		Rectangle(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){}
		Point getPointInitial();
		Point getPointFinal();
};
#endif
