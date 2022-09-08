#include "ICanvas.h"
#include "IColoredShape.h"
#include <map>

#ifndef CANVAS_H_
#define CANVAS_H_

class Canvas: public ICanvas
{
	public:
		Canvas();
		void addColoredShape(IColoredShape* coloredShape);
		void deleteColoredShape(int uid);
	private:
		std::map<int, IColoredShape*> drawnShape;
};

#endif
