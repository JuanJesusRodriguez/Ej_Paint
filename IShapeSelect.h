#include "Shape.h"
#include<string>

#ifndef __ISHAPESELECT__HPP
#define __ISHAPESELECT__HPP

class IShapeSelect{
    public:
        virtual Shape* shapeSelect(std::string shapeTypeName) = 0;
};

#endif
