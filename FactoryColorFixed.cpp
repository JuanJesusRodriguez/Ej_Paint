#include "FactoryColorFixed.h"

FactoryColorFixed::FactoryColorFixed(string colorValue)
{
    this->colorValue=colorValue;
}

Color* FactoryColorFixed::createColor()
{
    Color* color = new Color(this->colorValue);
    return color;
}
        
