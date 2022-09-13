#include "Canvas.h"
#include<iostream>

void Canvas::create(Shape *shape)
{
    ListOfShapes.insert(make_pair(nextId, shape));
    nextId++;
}

void Canvas::list(){
    for (auto it = 0 ; it < ListOfShapes.size(); it++){
        std::cout<<ListOfShapes[it] << std::endl;
    }
}

void Canvas::select(int uid){
	auto iterator = ListOfShapes.find(uid);
	if(iterator != ListOfShapes.end())
	{
		SelectedShapes.insert(make_pair(uid, ListOfShapes[iterator]));
	}
}

void Canvas::selectAll(){
	SelectedShapes = ListOfShapes;
}

void Canvas::unselect(int uid){
	auto iterator = SelectedShapes.find(uid);
	if(iterator != SelectedShapes.end())
	{
		SelectedShapes.erase(iterator);
	}
}

void Canvas::unselectAll(){
	SelectedShapes = std::map<int, Shape *>();
}
