#include "point.h"
#ifndef __SHAPE__HPP
#define __SHAPE__HPP

class Shape
{
private:
    Point pointInitial;
    Point pointFinal;

public:
    virtual Point getPointInitial() = 0;
    virtual Point getPointFinal() = 0;
    virtual void draw(Point pointInitial ,Point pointFinal) = 0;
};

#endif // __SHAPE__HPP