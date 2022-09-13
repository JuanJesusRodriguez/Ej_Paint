#include <iostream>
#include "Color.h"

using namespace std;

Color::Color(string color){this->color = color;}
string Color::getColor(){return this->color;}


/*
class ColorGeneric : public Color
{
    public:
        ColorGeneric(string colorValueInput): colorValue(colorValueInput){};
        string getColor()
        {
            colorValue;
        }
    private:
        string colorValue;
};

class ColorWhite : public Color
{
    public:
        ColorWhite(): colorValue("white"){};
        string getColor()
        {
            colorValue;
        }
    private:
        string colorValue; 
};

class ColorRed : public Color
{
    public:
        ColorRed(): colorValue("red"){};
        string getColor()
        {
            colorValue;
        }
    private:
        string colorValue;
};

*/