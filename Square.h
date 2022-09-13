#include "Shape.h"
#include "Point.h"
#include "Color.h"

#ifndef __SQUARE__HPP
#define __SQUARE__HPP

class Square: public Shape
{
    private:
        Point* pointInitial;
        Point* pointFinal;
        Color* colorBorder;
		Color* colorArea;
    public:
        Square(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
        Point* getPointInitial();
		Point* getPointFinal();
		Color* getBackgroundColor();
		Color* getForeColor();
		void setPointInitial(Point* point);
		void setPointFinal(Point* point);
		void setBackgroundColor(Color* color);
		void setForeColor(Color* color);
		std::string getShapeType();
};

#endif
