#include "Rectangle.h"

Rectangle::Rectangle(Point* p1, Point* p2, Color* colorBorder, Color* colorArea):pointInitial(pointInitial), pointFinal(pointFinal){
	colorBorder = new Color(COLOR_BLACK);
	colorArea =  new Color(COLOR_WHITE);
}

Point* Rectangle::getPointInitial(){
	return pointInitial;
}

Point* Rectangle::getPointFinal(){
	return pointFinal;
}

Color* Rectangle::getBackgroundColor(){
	return colorArea;
}

Color* Rectangle::getForeColor(){
	return colorBorder;
}

void Rectangle::setPointInitial(Point* point){
	pointInitial = point;
}

void Rectangle::setPointFinal(Point* point){
	pointFinal = point;
}

void Rectangle::setBackgroundColor(Color* color){
	colorArea = color;
}

void Rectangle::setForeColor(Color* color){
	colorBorder = color;
}

std::string Rectangle::getShapeType(){
	return "Rectangle";
}


