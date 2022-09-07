#include "point.h"
#ifndef __IUNSELECTPOINT__HPP
#define __IUNSELECTPOINT__HPP

    class IUnselectPoint{
        public:
        virtual void unselectPoint(Point point) = 0;
    };

#endif /* __IUNSELECTPOINT__HPP */
