#include "ICanvas.h"
#include "IColoredShape.h"
#include "Color.h"
#include <map>

#ifndef CANVAS_H_
#define CANVAS_H_

class Canvas: public ICanvas
{
	public:
		Canvas();
		void addColoredShape(IColoredShape* coloredShape);
		void deleteColoredShape(int uid);
		void modify(Color* color, IColoredShape* (*change)(IColoredShape*, Color), int uid);
		
	private:                           
		static std::map<int, IColoredShape*> drawnShape;
};

#endif
