#include "Circle.h"

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

