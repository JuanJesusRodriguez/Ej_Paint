#include "Shape.h"
#include "Point.h"
#include "Color.h"

#ifndef __SQUARE__HPP
#define __SQUARE__HPP

class Square: public Shape
{
    private:
        Point pointInitial;
        Point pointFinal;
        Color colorBorder;
		Color colorArea;
    public:
        Square(Point* pointInitial, Point* pointFinal, Color* colorBorder, Color* colorArea):pointInitial(*pointInitial), pointFinal(*pointFinal), colorBorder(*colorBorder), colorArea(*colorArea){}
        Point getPointInitial();
        Point getPointFinal();
        Color getColorBorder();
        Color getColorArea();
        std::string getShapeType();
};

#endif
