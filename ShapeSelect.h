#include "IShapeSelect.h"
#include "IShapeConstructors.h"

#ifndef __SHAPESELECT__HPP
#define __SHAPESELECT__HPP

class ShapeSelect: public IShapeSelect
{
	public:
    //To be called from IToolbar::SelectShape
    	Shape* shapeSelect(std::string shapeTypeName);
	private:
    	IShapeConstructors* iShapeConstructors = new ShapeConstructors();
};

#endif
