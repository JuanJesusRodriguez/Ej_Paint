#include "Shape.h"
#include "Color.h"
#include <string>

#ifndef __ITOOLBAR__HPP
#define __ITOOLBAR__HPP

class IToolbar {
 public:
    virtual Shape* SelectShape(std::string shapeTag) = 0;
    virtual Color* SelectColor(std::string colorTag) = 0;
    virtual ~IToolbar() = 0;
};
#endif
