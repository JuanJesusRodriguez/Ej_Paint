#include "Point.h"

#ifndef __ICOMMANDSELECTPOINT__HPP
#define __ICOMMANDSELECTPOINT__HPP

    class ICommandSelectPoint{
        public:
        virtual void selectPoint(Point point) = 0;
        virtual void ~ICoimmandSelectPoint() = 0;
    };

#endif /* __ICOMMANDSELECTPOINT__HPP */
