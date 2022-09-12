#include "ColoredShape.h"

Shape* ColoredShape::getShape(){
	return shape;
}

IForeBackColors* ColoredShape::getColors(){
	return foreBackColors;
}
