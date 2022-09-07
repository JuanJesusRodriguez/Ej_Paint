#include "shape.h"
#include "color.h"
#ifndef __ITOOLBAR__HPP
#define __ITOOLBAR__HPP

class IToolbar {
 public:
    virtual Shape* CreateShape() = 0;
    virtual Color* PickColor() = 0;
};
#endif