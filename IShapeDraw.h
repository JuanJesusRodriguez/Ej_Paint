#include "Shape.h"
#ifndef __IDRAWFIGURE__HPP
#define __IDRAWFIGURE__HPP

class IShapeDraw{
    public:
    virtual void shapeDraw(Shape* shape) = 0;
};
#endif // __IDRAWFIGURE__HPP