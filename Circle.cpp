#include "Circle.h"

Circle::Circle(Point* p1, Point* p2, Color* colorBorder, Color* colorArea):pointInitial(pointInitial), pointFinal(pointFinal){
	colorBorder = new Color(COLOR_BLACK);
	colorArea =  new Color(COLOR_WHITE);
}

Point* Circle::getPointInitial(){
	return pointInitial;
}

Point* Circle::getPointFinal(){
	return pointFinal;
}

Color* Circle::getBackgroundColor(){
	return colorArea;
}

Color* Circle::getForeColor(){
	return colorBorder;
}

void Circle::setPointInitial(Point* point){
	pointInitial = point;
}

void Circle::setPointFinal(Point* point){
	pointFinal = point;
}

void Circle::setBackgroundColor(Color* color){
	colorArea = color;
}

void Circle::setForeColor(Color* color){
	colorBorder = color;
}

std::string Circle::getShapeType(){
	return "Circle";
}

