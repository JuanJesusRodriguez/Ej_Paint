#include "point.h"
#ifndef __ISELECTPOINT__HPP
#define __ISELECTPOINT__HPP

    class ISelectPoint{
        public:
        virtual void selectPoint(Point point) = 0;
    };

#endif /* __ISELECTPOINT__HPP */