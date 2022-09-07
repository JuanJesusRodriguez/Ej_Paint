#include "IColoredShape.h"
#ifndef ICANVAS_H_
#define ICANVAS_H_
class ICanvas{
	public:
		virtual void addShape(*IColoredShape coloredshape) = 0;
		virtual void deleteShape() = 0;
};
#endif
