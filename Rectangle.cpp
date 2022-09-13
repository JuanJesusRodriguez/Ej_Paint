#include "Rectangle.h"

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
	return "Rectangle";
}


