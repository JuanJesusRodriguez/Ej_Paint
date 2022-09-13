#include "FactoryColor.h"

Color* FactoryColor::createColor(string colorValue)
{
    Color* color = new Color(colorValue);
    return color;
}


/*
Color *FactoryColorWhite::createColor()
{
    return new ColorWhite();
}

Color *FactoryColorRed::createColor()
{
    return new ColorRed();
}
*/
