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
