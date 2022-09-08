#include "Shape.h"
#include "IObtainShapeType.h"

#ifndef OBTAINSHAPETYPE_H_
#define OBTAINSHAPETYPE_H_

class ObtainShapeType: public IObtainShapeType
{
	public:
		ObtainShapeType();
		char* ShapeType(Shape* shape);
};

#endif
