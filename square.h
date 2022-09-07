#include "shape.h"
#include "point.h"
#ifndef __SQUARE__HPP
#define __SQUARE__HPP

class Square: public Shape
{

    private:
        Point pointInitial;
        Point pointFinal;
    public:
        Point getPointInitial();
        Point getPointFinal();
        void draw(Point pointInitial, Point pointFinal);
};

#endif // __SQUARE__HPP
