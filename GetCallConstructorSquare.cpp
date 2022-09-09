#include "GetCallConstructorSquare.h"
#include "Point.h"
#include "Square.h"

typedef Shape* (*scriptConstructor) ();

Shape* callSquareConstructor(){
	Shape* square = new Square(Point(0,0), Point(0,0));
	return square;
}

scriptConstructor GetCallConstructorSquare::getFunction(){
	return &callSquareConstructor;
}
