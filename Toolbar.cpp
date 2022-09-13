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

void Toolbar::initFactoriesColors()
{
	FactoryColor* factoryColor = new FactoryColor();
	this->addColorFactory("hex", factoryColor);

	FactoryColor* factoryColorBlack = new FactoryColor();
	this->addColorFactory("black", factoryColorBlack);

	FactoryColor* factoryColorWhite = new FactoryColor();
	this->addColorFactory("white", factoryColorWhite);

	FactoryColor* factoryColorWhite = new FactoryColor();
	this->addColorFactory("red", factoryColorRed);

	FactoryColor* factoryColorWhite = new FactoryColor();
	this->addColorFactory("blue", factoryColorBlue);

	FactoryColor* factoryColorWhite = new FactoryColor();
	this->addColorFactory("green", factoryColorGreen);
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
	this->colorFactories.insert(make_pair(factoryName,factoryType));
}

void Toolbar::addShapeFactory(string factoryName, FactoryShape* factoryType)
{
	this->shapeFactories.insert(make_pair(factoryName,factoryType));
}