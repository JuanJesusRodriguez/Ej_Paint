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
        Color* colorBorder;
		Color* colorArea;
    public:
        Circle(Point pointInitial, Point pointFinal);
        Point getPointInitial();
		Point getPointFinal();
		Color* getBackgroundColor();
		Color* getForeColor();
		void setPointInitial(Point point);
		void setPointFinal(Point point);
		void setBackgroundColor(Color* color);
		void setForeColor(Color* color);
		std::string getShapeType();
};

#endif
