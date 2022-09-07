#include "Shape.h"
#ifndef __ISELECTSHAPE__HPP
#define __ISELECTSHAPE__HPP

class IShapeSelect{
    public:
    virtual void shapeSelect(Shape* Shape) = 0;
};
#endif // __ISELECTSHAPE__HPP
