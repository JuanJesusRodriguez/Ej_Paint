#include "IShapeSelect.h"

#ifndef __SHAPESELECT__HPP
#define __SHAPESELECT__HPP

class ShapeSelect: public IShapeSelect
{
    Shape* shapeSelect(std::string shapeTypeName){};
};

#endif