#include "Color.h"

#ifndef __ICOLORSELECT__HPP
#define __ICOLORSELECT__HPP

class IColorSelect{
    public:
        virtual void colorSelect(Color color) = 0;
        virtual ~IColorSelect() = 0;
};

#endif
