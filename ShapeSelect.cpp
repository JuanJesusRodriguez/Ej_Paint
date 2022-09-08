 #include "ShapeSelect.h"
 #include "Rectangle.h"
 
 Shape* ShapeSelect::shapeSelect(std::string shapeTypeName)
 {
    if(shapeTypeName=="rectangle")
    {
        Shape* s = new Rectangle();
        return s;
    }
 };

