#include "FactoryShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

Shape* FactoryCicle::createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea)
{
	return new Circle(p1,p2,colorBorder,colorArea);
}

Shape* FactoryRectangle::createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea)
{
	return new Rectangle(p1,p2,colorBorder,colorArea);
}

Shape* FactorySquare::createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea)
{
	return new Square(p1,p2,colorBorder,colorArea);
}