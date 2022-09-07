#include "Shape.h"
#include "Point.h"

using namespace std;

#ifndef __CIRCLE__HPP
#define __CIRCLE__HPP

class Circle: public Shape
{
    private:
        Point pointInitial;
        Point pointFinal;
    public:
        Circle(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){}
        Point getPointInitial();
        Point getPointFinal();
        string getShapeType();
};

#endif
