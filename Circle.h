#include "Shape.h"
#include "Point.h"

using namespace std;

#ifndef __CIRCLE__HPP
#define __CIRCLE__HPP

class Circle: public Shape
{
    private:
        Point _pointInitial;
        Point _pointFinal;
    public:
        Circle(Point pointInitial, Point pointFinal):_pointInitial(pointInitial), _pointFinal(pointFinal){}
        Point getPointInitial();
        Point getPointFinal();
        string getShapeType();
};

#endif
