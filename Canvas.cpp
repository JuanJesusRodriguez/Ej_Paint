#include "Canvas.h"

void Canvas::addColoredShape(IColoredShape* coloredShape){
    int uid = drawnShape.size()+1;
    drawnShape.insert(pair<int,IColoredShape*> (uid,coloredShape) );
}

void Canvas::deleteColoredShape(int uid){
    drawnShape.erase(uid);
}

void modify(void (*ptr_change)(string property, int uid)){
    if(ptr_change != NULL){
            //ptr_change(property,uid);       
}