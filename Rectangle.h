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
		Rectangle(Point pointInitial, Point pointFinal);
        Point getPointInitial();
		Point getPointFinal();
<<<<<<< Updated upstream
		Color getColorBorder();
        Color getColorArea();
=======
		Color getBackgroundColor();
		Color getForeColor();
		void setPointInitial(Point point);
		void setPointFinal(Point point);
		void setBackgroundColor(Color color);
		void setForeColor(Color color);
>>>>>>> Stashed changes
		std::string getShapeType();
};

#endif
