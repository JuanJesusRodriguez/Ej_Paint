#ifndef __POINT__HPP
#define __POINT__HPP

class Point{
private:
double x,y;

public:
Point(double x,double y);
bool operator == (Point& point);
bool operator != (Point& point);
double getX();
double getY();
};

#endif
