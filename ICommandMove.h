#include "Shape.h"

#ifndef __ICOMMANDMOVE__HPP
#define __ICOMMANDMOVE__HPP

class ICommandMove{
    public:
        virtual void shapeMove(Shape* shape, Point pointReference) = 0;
};

#endif
