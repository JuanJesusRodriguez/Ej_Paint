#include "IColoredShape.h"
#include "Color.h"

#ifndef ICANVAS_H_
#define ICANVAS_H_

class ICanvas{
	public:
		virtual void addColoredShape(IColoredShape* coloredShape) = 0;
		virtual void deleteColoredShape(int uid) = 0;
		virtual void modify(Color* color, IColoredShape* (*change)(IColoredShape*, Color), int uid) = 0;
		virtual ~ICanvas() = 0;
};

#endif
