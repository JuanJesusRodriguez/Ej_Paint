#include "Shape.h"
#include "Color.h"
#include "IToolbar.h"
#include "IShapeSelect.h"
#include "IColorSelect.h"

#ifndef TOOLBAR_H_
#define TOOLBAR_H_

class Toolbar: public IToolbar{
	public:
		Shape* SelectShape(std::string shapeTag);
		Color* SelectColor(std::string colorTag);
	private:
		IShapeSelect* shapeSelector;
		IColorSelect* colorSelector;

};

#endif
