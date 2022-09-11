#include "IColoredShape.h"

#ifndef __ISHAPEDRAW__HPP
#define __ISHAPEDRAW__HPP

class IShapeDraw{
    public:
        virtual void shapeDraw(IColoredShape* coloredShape) = 0;
        virtual ~IShapeDraw() = 0;
};

#endif
