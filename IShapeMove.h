#include "Shape.h"

#ifndef __ISHAPEMOVE__HPP
#define __ISHAPEMOVE__HPP

class IShapeMove{
    public:
        virtual void shapeMove(Shape* shape, Point pointReference) = 0;
};

#endif