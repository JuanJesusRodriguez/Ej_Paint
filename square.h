#include "Shape.h"
#include "Point.h"

#ifndef __SQUARE__HPP
#define __SQUARE__HPP

class Square: public Shape
{
    private:
        Point pointInitial;
        Point pointFinal;
    public:
        Square(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){}
        Point getPointInitial();
        Point getPointFinal();
};

#endif
