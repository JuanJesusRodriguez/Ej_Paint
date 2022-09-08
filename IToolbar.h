#include "Shape.h"
#include "Color.h"

#ifndef __ITOOLBAR__HPP
#define __ITOOLBAR__HPP

class IToolbar {
 public:
    virtual Shape* SelectShape() = 0;
    virtual Color* SelectColor() = 0;
    virtual ~IToolbar() = 0;
};
#endif
