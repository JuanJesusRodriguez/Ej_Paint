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
        Square(Point pointInitial, Point pointFinal);
        Point getPointInitial();
<<<<<<< Updated upstream
        Point getPointFinal();
        Color getColorBorder();
        Color getColorArea();
        std::string getShapeType();
=======
		Point getPointFinal();
		Color getBackgroundColor();
		Color getForeColor();
		void setPointInitial(Point point);
		void setPointFinal(Point point);
		void setBackgroundColor(Color color);
		void setForeColor(Color color);
		std::string getShapeType();
>>>>>>> Stashed changes
};

#endif
