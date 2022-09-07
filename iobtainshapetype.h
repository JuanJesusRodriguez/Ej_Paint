#include "Shape.h"

#ifndef IOBTAINSHAPETYPE_H_
#define IOBTAINSHAPETYPE_H_

class IObtainShapeType{
	public:
		virtual char* ShapeType(Shape* shape) = 0;
};

#endif
