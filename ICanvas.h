#include "IColoredShape.h"

#ifndef ICANVAS_H_
#define ICANVAS_H_

class ICanvas{
	public:
		virtual void addColoredShape(IColoredShape* coloredshape) = 0;
		virtual void deleteColoredShape(int uid) = 0;
};

#endif
