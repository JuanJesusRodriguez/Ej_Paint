#include "Shape.h"
#include "ShapeConstructors.h"
#include "GetCallConstructor.h"
#include <string>
#include <map>

typedef Shape* (*scriptConstructor) ();
typedef std::map<std::string, scriptConstructor> constructorMap;

ShapeConstructors::ShapeConstructors(){
	for(std::string typeShape : shapeNames){
		allConstructors.insert(std::pair<std::string, scriptConstructor>
			(typeShape, shapeFuntions[iterator]->getFunction()));
		iterator++;
	}
}

Shape* ShapeConstructors::constructedShape(std::string shapeTypeName){
	Shape* shape = nullptr;
	if(isValidShape(shapeTypeName)){
		shape = (*allConstructors[allConstructors.find(shapeTypeName)]->second)();
	}
	return shape;
}

bool ShapeConstructors::isValidShape(std::string shapeTypeName){
	return allConstructors.find(shapeTypeName)!=allConstructors.end();
}
