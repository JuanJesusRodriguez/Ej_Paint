#include "Canvas.h"

void Canvas::addColoredShape(IColoredShape* coloredShape){
    int uid = drawnShape.size()+1;
    drawnShape.insert(pair<int,IColoredShape*> (uid,coloredShape) );
}

void Canvas::deleteColoredShape(int uid){
    drawnShape.erase(uid);
}