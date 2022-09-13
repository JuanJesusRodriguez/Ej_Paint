#include "Rectangle.h"

<<<<<<< Updated upstream
Point Rectangle::getPointInitial()
{
	return this->pointInitial;
}

Point Rectangle::getPointInitial()
{
	return this->pointFinal;
}

Color Rectangle::getColorBorder()
{
    return this->colorBorder;
}

Color Rectangle::getColorArea()
{
    return this->colorBorder;
}

std::string getShapeType()
{
=======
Rectangle::Rectangle(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){
	colorBorder("black");
	colorArea("white");
}

Point Rectangle::getPointInitial(){
	return pointInitial;
}

Point Rectangle::getPointFinal(){
	return pointFinal;
}

Color Rectangle::getBackgroundColor(){
	return colorArea;
}

Color Rectangle::getForeColor(){
	return colorBorder;
}

void Rectangle::setPointInitial(Point point){
	pointInitial = point;
}

void Rectangle::setPointFinal(Point point){
	pointFinal = point;
}

void Rectangle::setBackgroundColor(Color color){
	colorArea = color;
}

void Rectangle::setForeColor(Color color){
	colorBorder = color;
}

std::string Rectangle::getShapeType(){
>>>>>>> Stashed changes
	return "Rectangle";
}


