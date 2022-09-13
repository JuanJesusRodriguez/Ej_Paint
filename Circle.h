#include "Shape.h"
#include "Point.h"
#include "Color.h"

#ifndef __CIRCLE__HPP
#define __CIRCLE__HPP

class Circle: public Shape
{
    private:
        Point pointInitial;
        Point pointFinal;
        Color colorBorder;
		Color colorArea;
    public:
        Circle(Point* pointInitial, Point* pointFinal, Color* colorBorder, Color* colorArea):pointInitial(*pointInitial), pointFinal(*pointFinal), colorBorder(*colorBorder), colorArea(*colorArea){}
        Point getPointInitial();
        Point getPointFinal();
        Color getColorBorder();
        Color getColorArea();
        string getShapeType();
};

#endif
