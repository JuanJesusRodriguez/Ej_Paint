#include "IForeBackColor.h"
#ifndef ICOLOREDSHAPE_H_
#define ICOLOREDSHAPE_H_
class IColoredShape{
	public:
		virtual *Shape getShape() = 0;
		virtual *IForeBackColors() = 0;
};
#endif
