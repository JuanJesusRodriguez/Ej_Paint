#include "point.h"
#ifndef __ICOMMANDUNSELECTPOINT__HPP
#define __ICOMMANDUNSELECTPOINT__HPP

    class ICommandUnselectPoint{
        public:
        virtual void unselectPoint(Point point) = 0;
    };

#endif /* __ICOMMANDUNSELECTPOINT__HPP */
