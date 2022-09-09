#include "ShapeSelect.h"

 Shape* ShapeSelect::shapeSelect(std::string shapeTypeName)
 {
	 return iShapeConstructors->constructedShape(shapeTypeName);
 };

