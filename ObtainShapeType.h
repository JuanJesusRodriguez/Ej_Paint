#include "Shape.h"
#include "IObtainShapeType.h"
#include <string>

#ifndef OBTAINSHAPETYPE_H_
#define OBTAINSHAPETYPE_H_

class ObtainShapeType: public IObtainShapeType
{
	public:
		ObtainShapeType();
		std::string ShapeType(Shape* shape);
};

#endif
