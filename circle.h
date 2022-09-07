#include "shape.h"
#include "point.h"
#ifndef __CIRCLE__HPP
#define __CIRCLE__HPP


class Circle{

    private:
    Point pointInitial;
    Point pointFinal;

    public:
    Circle();
    Point getPointInitial();
    Point getPointFinal();

};


#endif // __CIRCLE__HPP