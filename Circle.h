#include "Shape.h"
#include "Point.h"
#include "Color.h"

#ifndef __CIRCLE__HPP
#define __CIRCLE__HPP

class Circle: public Shape
{
    private:
        Point* pointInitial;
        Point* pointFinal;
        Color* colorBorder;
		Color* colorArea;
    public:
        Circle(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
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
