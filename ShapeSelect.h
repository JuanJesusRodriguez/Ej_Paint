#include "IShapeSelect.h"

#ifndef __SHAPESELECT__HPP
#define __SHAPESELECT__HPP

class ShapeSelect: public IShapeSelect
{
    //To be called from IToolbar::SelectShape
    Shape* shapeSelect(std::string shapeTypeName){};
};

#endif