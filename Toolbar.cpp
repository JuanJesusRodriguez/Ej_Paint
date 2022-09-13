#include "Toolbar.h"
#include<map>
//#include "FactoryShape.h"

/*
Shape* Toolbar::SelectShape(std::string shapeTag){
	return shapeSelector->shapeSelect(shapeTag);
}

Color* Toolbar::SelectColor(std::string colorTag){
	return colorSelector->colorSelect(colorTag);
	
}
*/

Shape* Toolbar::SelectShape(std::string shapeTag, Point* p1, Point* p2, Color* colorBorder, Color* colorArea)
{
	if(FactoriesShape.find(shapeTag) == FactoriesShape.end())
	{
		throw new std::exception(); //FactoryNotFoundException(key);
	}

	FactoryShape* factoryShape = FactoriesShape[shapeTag];

	Shape* s=factoryShape->createShape(p1, p2, colorBorder, colorArea);
}
Color* Toolbar::SelectColor(std::string colorTag)
{

}


void Toolbar::initFactoriesColors()
{
	FactoryColor* factoryColor = new FactoryColor();
	this->addColorFactory("generic", factoryColor);

/*
	FactoryColor* factoryColorWhite = new FactoryColor();
	this->addColorFactory("white", factoryColorWhite);

	FactoryColor* factoryColorWhite = new FactoryColor();
	this->addColorFactory("red", factoryColorRed);
	*/

}

void Toolbar::initFactoriesShapes()
{
	FactoryShape* factorySquare = new FactorySquare();
	this->addShapeFactory("square", factorySquare);

	FactoryShape* factoryRectangle = new FactoryRectangle();
	this->addShapeFactory("rectangle", factoryRectangle);

	FactoryShape* factoryCircle = new FactoryCircle();
	this->addShapeFactory("circle", factoryCircle);
}

void Toolbar::addColorFactory(string factoryName, FactoryColor* factoryType)
{
	this->FactoriesColor.insert(make_pair(factoryName,factoryType));
}

void Toolbar::addShapeFactory(string factoryName, FactoryShape* factoryType)
{
	this->FactoriesShape.insert(make_pair(factoryName,factoryType));
}