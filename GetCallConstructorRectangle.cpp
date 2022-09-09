#include "GetCallConstructorRectangle.h"
#include "Point.h"
#include "Rectangle.h"

typedef Shape* (*scriptConstructor) ();

Shape* callRectangleConstructor(){
	Shape* rectangle = new Rectangle(Point(0,0), Point(0,0));
	return rectangle;
}

scriptConstructor GetCallConstructorRectangle::getFunction(){
	return &callRectangleConstructor;
}
