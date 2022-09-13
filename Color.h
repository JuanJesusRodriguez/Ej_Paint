#include <string>

#ifndef __COLOR__HPP
#define __COLOR__HPP

#define COLOR_WHITE "000000"
#define COLOR_BLACK "FFFFFF"
#define __COLOR__HPP_DEFAULT_COLOR "FFFFFF"

using namespace std;

class Color
{
    public:
        Color(string colorValueInput=__COLOR__HPP_DEFAULT_COLOR);
        virtual string getColor();
    private:
        string color;
};

#endif