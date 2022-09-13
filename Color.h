#include <string>

#ifndef __COLOR__HPP
#define __COLOR__HPP

using namespace std;

class Color
{
public:
    Color();
    virtual string getColor() = 0;
    virtual ~Color();
};

class ColorBlack : public Color
{
public:
    string getColor()
    {
        return "black";
    }
    virtual ~ColorBlack();
};

class ColorWhite : public Color
{
public:
    string getColor()
    {
        return "white";
    }
    virtual ~ColorWhite();
};

class ColorRed : public Color
{
public:
    string getColor()
    {
        return "red";
    }
    virtual ~ColorRed();
};

class ColorBlue : public Color
{
public:
    string getColor()
    {
        return "blue";
    }
    virtual ~ColorBlue();
};

class ColorGreen : public Color
{
public:
    string getColor()
    {
        return "green";
    }
    virtual ~ColorGreen();
};

#endif
