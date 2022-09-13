#include "Shape.h"
#include "Point.h"
#include "Color.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle: public Shape
{
	private:
		Point pointInitial;
		Point pointFinal;
		Color colorBorder;
		Color colorArea;
	public:
		Rectangle(Point* pointInitial, Point* pointFinal, Color* colorBorder, Color* colorArea):pointInitial(*pointInitial), pointFinal(*pointFinal), colorBorder(*colorBorder), colorArea(*colorArea){}
		Point getPointInitial();
		Point getPointFinal();
		Color getColorBorder();
        Color getColorArea();
		std::string getShapeType();
};

#endif
