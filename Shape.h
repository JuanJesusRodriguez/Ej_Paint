#include "Point.h"
#include "Color.h"
#include <string>

#ifndef __SHAPE__HPP
#define __SHAPE__HPP

class Shape
{
	public:
		virtual Point* getPointInitial() = 0;
		virtual Point* getPointFinal() = 0;
		virtual Color* getBackgroundColor()=0;
		virtual Color* getForeColor()=0;
		virtual void setPointInitial(Point point) = 0;
		virtual void setPointFinal(Point point) = 0;
		virtual void setBackgroundColor(Color color)=0;
		virtual void setForeColor(Color color)=0;
		virtual std::string getShapeType() = 0;
		virtual ~Shape()=0;
};

#endif
