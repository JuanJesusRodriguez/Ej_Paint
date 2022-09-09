#include "Shape.h"
#include "Point.h"
#include <string>

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle: public Shape
{
	private:
		Point pointInitial;
		Point pointFinal;
	public:
		Rectangle(){}
		Rectangle(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){}
		Point getPointInitial();
		Point getPointFinal();
		std::string getShapeType();
};

#endif
