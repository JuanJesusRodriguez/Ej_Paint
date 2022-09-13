#include "FactoryColor.h"

Color *FactoryColorBlack::createColor()
{
    return new ColorBlack();
}

Color *FactoryColorWhite::createColor()
{
    return new ColorWhite();
}

Color *FactoryColorRed::createColor()
{
    return new ColorRed();
}

Color *FactoryColorBlue::createColor()
{
    return new ColorBlue();
}

Color *FactoryColorGreen::createColor()
{
    return new ColorGreen();
}