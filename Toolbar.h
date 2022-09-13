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
		Shape* SelectShape(std::string shapeType, Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
		Color* SelectColor(); //Now there is only the generic type of color, it is unnecessary to specify an string colorType.
		Color* SelectColor(std::string colorType);
		void addShapeFactory(string factoryName, FactoryShape* factoryType);
		void addColorFactory(string factoryName, FactoryColor* factoryType);
		void initFactoriesColors();
		void initFactoriesShapes();

	private:

		map<string, FactoryShape*> FactoriesShape;
		map<string, FactoryColor*> FactoriesColor;


		//map<string, FactoryColor*> colorFactories;

		/*
	private:
		IShapeSelect* shapeSelector;
		IColorSelect* colorSelector;
		*/

};

#endif
