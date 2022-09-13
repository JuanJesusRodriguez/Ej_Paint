#include "Canvas.h"
#include<iostream>

void Canvas::create(Shape *shape)
{
    ListOfShapes.insert(make_pair(nextId, shape));
    nextId++;
}

void Canvas::list(){
	for (auto iterator : ListOfShapes){
        std::cout<< iterator.first << iterator.second->getShapeType() << std::endl;
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

void Canvas::addNewForeColor(int uid, Color* color){
	auto iterator = ListOfShapes.find(uid);
	if(iterator != ListOfShapes.end())
	{
		ListOfShapes[iterator]->setForeColor(color);
	}
}
void Canvas::addNewBackgroundColor(int uid, Color* color){
	auto iterator = ListOfShapes.find(uid);
	if(iterator != ListOfShapes.end())
	{
		ListOfShapes[iterator]->setBackgroundColor(color);
	}
}

void Canvas::move(int uid, Point pointInitial, Point pointFinal){
	auto iterator = ListOfShapes.find(uid);
	if(iterator != ListOfShapes.end())
	{
		ListOfShapes[iterator]->setPointInitial(pointInitial);
		ListOfShapes[iterator]->setPointFinal(pointFinal);
	}
}

void Canvas::remove(int uid, Point point){
	auto iterator = ListOfShapes.find(uid);
	if(iterator != ListOfShapes.end())
	{
		ListOfShapes.erase(iterator);
	}
	else{
		if(point != Point(0,0)){
			for (auto iterator : ListOfShapes){
				if(iterator->second.getPointInitial() == point || iterator->second.getPointFinal() == point){
					ListOfShapes.erase(ListOfShapes.find(iterator->first));
				}
			}
		}
		else{
			std::cout << "Error: There is nothing to remove" << std::endl;
		}
	}
}
