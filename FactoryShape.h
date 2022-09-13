#ifndef __FACTORYSHAPE__
#define __FACTORYSHAPE__

#include "Shape.h"
#include "Color.h"

class FactoryShape
{
public:
	virtual Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea) = 0;
};

class FactoryCircle: public FactoryShape
{
public:
	FactoryCircle() {}
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

class FactoryRectangle: public FactoryShape
{
public:
	FactoryRectangle() {}
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

class FactorySquare: public FactoryShape
{
public:
	FactorySquare() {}
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

#endif