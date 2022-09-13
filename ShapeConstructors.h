#include "Shape.h"
#include "IShapeConstructors.h"
#include "GetCallConstructor.h"
#include <string>
#include <map>

#ifndef SHAPECONSTRUCTORS_H_
#define SHAPECONSTRUCTORS_H_

typedef Shape* (*scriptConstructor) ();
typedef std::map<std::string, scriptConstructor> constructorMap;

class ShapeConstructors: public IShapeConstructors
{
	public:
		ShapeConstructors();
		Shape* constructedShape(std::string shapeTypeName);
		bool isValidShape(std::string shapeTypeName);
	private:
		constructorMap allConstructors;
		
		GetCallConstructor* shapeFuntions[3] = {
				GetCallConstructorRectangle(),
				GetCallConstructorSquare(),
				GetCallConstructorCircle()
		};
		
		std::string shapeNames[3] = {"rectangle", "square", "circle"};
		int iterator=0;

		GetCallConstructorRectangle();
		GetCallConstructorSquare();
		GetCallConstructorCircle();
};

#endif
