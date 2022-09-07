#include "Shape.h"
#include "IForeBackColors.h"

#ifndef ICOLOREDSHAPE_H_
#define ICOLOREDSHAPE_H_
class IColoredShape{
	public:
		virtual Shape* getShape() = 0;
		virtual IForeBackColors* getColors() = 0;
};
#endif
