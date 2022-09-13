#include "Toolbar.h"

/*
Shape* Toolbar::SelectShape(std::string shapeTag){
	return shapeSelector->shapeSelect(shapeTag);
}

Color* Toolbar::SelectColor(std::string colorTag){
	return colorSelector->colorSelect(colorTag);
	
}
*/

void Toolbar::initColors()
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

void Toolbar::initShapes()
{
	FactoryShape* factorySquare = new FactorySquare();
	this->addShapeFactory("square", factorySquare);

	FactoryShape* factoryRectangle = new FactoryRectangle();
	toolbar->addShapeFactory("rectangle", factoryRectangle);

	FactoryShape* factoryCircle = new FactoryCircle();
	toolbar->addShapeFactory("circle", factoryCircle);
}