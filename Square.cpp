#include "Square.h"

Square::Square(Point* pointInitial, Point* pointFinal):pointInitial(pointInitial), pointFinal(pointFinal){
	colorBorder = new Color(COLOR_BLACK);
	colorArea =  new Color(COLOR_WHITE);
}

Point* Square::getPointInitial(){
	return pointInitial;
}

Color* Square::getBackgroundColor(){
	return colorArea;
}

Color* Square::getForeColor(){
	return colorBorder;
}

void Square::setPointInitial(Point* point){
	pointInitial = point;
}

void Square::setPointFinal(Point* point){
	pointFinal = point;
}

void Square::setBackgroundColor(Color* color){
	colorArea = color;
}

void Square::setForeColor(Color* color){
	colorBorder = color;
}

std::string Square::getShapeType(){
	return "Square";
}

