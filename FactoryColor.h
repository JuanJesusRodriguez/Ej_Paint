#ifndef __FACTORYCOLOR__
#define __FACTORYCOLOR__

class FactoryColor
{
public:
	virtual Color* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea) = 0;
};

class FactoryCicle: public FactoryShape
{
public:
	FactoryCicle() {}
	Shape* createShape(Point* p1, Point* p2, Color* colorBorder, Color* colorArea);
};

#endif