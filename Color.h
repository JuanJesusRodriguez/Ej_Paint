#include <string>

#ifndef __COLOR__HPP
#define __COLOR__HPP

using namespace std;

class Color
{
    public:
        Color(string colorValueInput);
        virtual string getColor();
    private:
        string color;
};

#endif