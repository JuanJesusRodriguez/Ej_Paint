#include "IFactoryColor.h"

class FactoryColorBlack : public IFactoryColor
{
public:
    FactoryColorBlack();
    Color *createColor();
};

class FactoryColorWhite : public IFactoryColor
{
public:
    FactoryColorWhite();
    Color *createColor();
};

class FactoryColorRed
{
public:
    FactoryColorRed();
    Color *createColor();
};

class FactoryColorBlue
{
public:
    FactoryColorBlue();
    Color *createColor();
};

class FactoryColorGreen
{
public:
    FactoryColorGreen();
    Color *createColor();
};