#include "GetCallConstructorCircle.h"
#include "Point.h"
#include "Circle.h"

typedef Shape* (*scriptConstructor) ();

Shape* callCircleConstructor(){
	Shape* circle = new Circle(Point(0,0), Point(0,0));
	return circle;
}

scriptConstructor GetCallConstructorCircle::getFunction(){
	return &callCircleConstructor;
}
