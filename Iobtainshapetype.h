#include "Shape.h"
#include <string>

#ifndef IOBTAINSHAPETYPE_H_
#define IOBTAINSHAPETYPE_H_

class IObtainShapeType{
	public:
		virtual std::string ShapeType(Shape* shape) = 0;
};

#endif
