#include "Shape.h"
#ifndef __IDRAWFIGURE__HPP
#define __IDRAWFIGURE__HPP

class IDrawShape{
    public:
    virtual void drawShape(Shape* shape) = 0;
};
#endif // __IDRAWFIGURE__HPP