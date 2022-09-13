#include "Square.h"

Point Square::getPointFinal()
{
    return this->pointFinal;
}

Point Square::getPointInitial()
{
    return this->pointInitial;
}

Color Square::getColorBorder()
{
    return this->colorBorder;
}

Color Square::getColorArea()
{
    return this->colorBorder;
}

std::string Square::getShapeType()
{
    return "Square";
}
