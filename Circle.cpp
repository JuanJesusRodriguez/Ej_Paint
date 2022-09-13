#include "Circle.h"
<<<<<<< Updated upstream

Point Circle::getPointInitial()
{
    return this->pointInitial;
}

Point Circle::getPointFinal()
{
    return this->pointFinal;
}

Color Circle::getColorBorder()
{
    return this->colorBorder;
}

Color Circle::getColorArea()
{
    return this->colorBorder;
}

std::string Circle::getShapeType()
{
    return "Circle";
=======

Circle::Circle(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){
	colorBorder("black");
	colorArea("white");
}

Point Circle::getPointInitial(){
	return pointInitial;
}

Point Circle::getPointFinal(){
	return pointFinal;
}

Color Circle::getBackgroundColor(){
	return colorArea;
}

Color Circle::getForeColor(){
	return colorBorder;
}

void Circle::setPointInitial(Point point){
	pointInitial = point;
>>>>>>> Stashed changes
}

void Circle::setPointFinal(Point point){
	pointFinal = point;
}

void Circle::setBackgroundColor(Color color){
	colorArea = color;
}

void Circle::setForeColor(Color color){
	colorBorder = color;
}

std::string Circle::getShapeType(){
	return "Circle";
}

