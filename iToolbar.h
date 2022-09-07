#include "shape.h"
#include "color.h"
#ifndef __ITOOLBAR__HPP
#define __ITOOLBAR__HPP

class IToolbar {
 public:
    IToolbar();
    virtual Shape* SelectShape() = 0;
    virtual Color* SelectColor() = 0;
};
#endif