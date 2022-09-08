#include "Shape.h"
#include "IForeBackColors.h"
#include "IColoredShape.h"

#ifndef COLOREDSHAPE_H_
#define COLOREDSHAPE_H_

class ColoredShape: public IColoredShape{
	public:
		ColoredShape(Shape* shape, IForeBackColors* foreBackColors)
			:shape(shape), foreBackColors(foreBackColors){}
		Shape* getShape();
		IForeBackColors* getColors();
	private:
		Shape* shape;
		IForeBackColors* foreBackColors;
};

#endif
