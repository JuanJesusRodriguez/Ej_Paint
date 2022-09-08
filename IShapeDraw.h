#include "Shape.h"

#ifndef __ISHAPEDRAW__HPP
#define __ISHAPEDRAW__HPP

class IShapeDraw{
    public:
        virtual void shapeDraw(Shape* shape) = 0;
        virtual ~IShapeDraw() = 0;
};

#endif
