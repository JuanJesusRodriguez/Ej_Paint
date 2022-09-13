#include "Square.h"

Square::Square(Point pointInitial, Point pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){
	colorBorder("black");
	colorArea("white");
}

Point Square::getPointInitial(){
	return pointInitial;
}

<<<<<<< Updated upstream
Color Square::getColorBorder()
{
    return this->colorBorder;
}

Color Square::getColorArea()
{
    return this->colorBorder;
}

std::string Square::getShapeType()
{
    return "Square";
=======
Point Square::getPointFinal(){
	return pointFinal;
>>>>>>> Stashed changes
}

Color Square::getBackgroundColor(){
	return colorArea;
}

Color Square::getForeColor(){
	return colorBorder;
}

void Square::setPointInitial(Point point){
	pointInitial = point;
}

void Square::setPointFinal(Point point){
	pointFinal = point;
}

void Square::setBackgroundColor(Color color){
	colorArea = color;
}

void Square::setForeColor(Color color){
	colorBorder = color;
}

std::string Square::getShapeType(){
	return "Square";
}

