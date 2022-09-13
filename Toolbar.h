#include <map>
#include "Shape.h"
#include "Color.h"
#include "IToolbar.h"
#include "IShapeSelect.h"
#include "IColorSelect.h"
#include "FactoryShape.h"
#include "FactoryColor.h"

#ifndef TOOLBAR_H_
#define TOOLBAR_H_

class Toolbar: public IToolbar{
	public:
		Shape* SelectShape(std::string shapeTag);
		Color* SelectColor(std::string colorTag);
		void initFactoriesColors();
		void initFactoriesShapes();

	private:

		map<string, FactoryShape*> shapeFactories;
		map<string, FactoryColor*> colorFactories;
		//map<string, FactoryColor*> colorFactories;

		/*
	private:
		IShapeSelect* shapeSelector;
		IColorSelect* colorSelector;
		*/

};

#endif
