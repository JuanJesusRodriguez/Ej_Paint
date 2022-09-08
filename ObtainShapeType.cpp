#include "ObtainShapeType.h"
#include "Shape.h"
#include <string>

ObtainShapeType::ObtainShapeType(){}

std::string ObtainShapeType::ShapeType(Shape* shape){
	return shape->getShapeType();
}
