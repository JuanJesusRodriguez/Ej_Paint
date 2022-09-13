#include "Shape.h"
#include "Color.h"
#include <string>
#include "FactoryShape.h"
#include "FactoryColor.h"
#include "FactoryColorFixed.h"

#ifndef __ITOOLBAR__HPP
#define __ITOOLBAR__HPP

class IToolbar {
 public:
    //virtual Shape* SelectShape(std::string shapeTag) = 0;
    virtual Shape* SelectShape(std::string shapeType, Point* p1, Point* p2, Color* colorBorder, Color* colorArea) = 0;
    virtual Color* SelectColor() = 0;
    virtual Color* SelectColor(std::string colorTag) = 0;
    virtual ~IToolbar() = 0;

    virtual void addShapeFactory(string factoryName, FactoryShape* factoryType) = 0;
    virtual void addColorFactory(string factoryName, FactoryColor* factoryType) = 0;
    virtual void addColorFactoryFixed(string factoryName, FactoryColorFixed* factoryType) = 0;
    virtual void initFactoriesColors() = 0;
    virtual void initFactoriesShapes() = 0;
};
#endif
