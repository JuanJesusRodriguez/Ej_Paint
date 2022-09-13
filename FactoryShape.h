#ifndef __FACTORYSHAPE__
#define __FACTORYSHAPE__

#include "Shape.h"
#include "Color.h"
#include "IFactoryShape.h"

class FactoryShape: public IFactoryShape
{
public:
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

class FactoryCircle: public FactoryShape
{
public:
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

class FactoryRectangle: public FactoryShape
{
public:
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

class FactorySquare: public FactoryShape
{
public:
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

#endif