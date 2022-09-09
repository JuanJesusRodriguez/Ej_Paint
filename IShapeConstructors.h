#include "Shape.h"
#include <string>

#ifndef ISHAPECONSTRUCTORS_H_
#define ISHAPECONSTRUCTORS_H_

class IShapeConstructors{
	virtual Shape* constructedShape(std::string shapeTypeName) = 0;
	virtual ~IShapeConstructors() = 0;
};

#endif
