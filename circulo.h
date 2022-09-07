#include "shape.h"
#include "color.h"
#ifndef __CIRCULO__HPP
#define __CIRCULO__HPP


class Circulo{

    private:
    Point pointInitial;
    Point pointFinal;

    public:
    Circulo();
    Point getPointInitial();
    Point getPointFinal();

};


#endif // __CIRCULO__HPP