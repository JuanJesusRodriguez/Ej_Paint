#include "Point.h"

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}

bool Point::operator == (Point& point){
	return (point.getX() == x && point.getY() == y);
}

bool Point::operator != (Point& point){
	return (point.getX() != x || point.getY() != y);
}


double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}


