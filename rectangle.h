#include "Shape.h"
#include "Point.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle: public Shape
{
	private:
		Point pointInitial;
		Point pointFinal;
	public:
		Rectangle(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){}
		Point getPointInitial();
		Point getPointFinal();
};
#endif
