#include "IColorSelect.h"
#ifndef __COLORSELECT__HPP
#define __COLORSELECT__HPP

class ColorSelect : public IColorSelect
{
public:
    ColorSelect();
    void colorSelect(Color color);
};

#endif