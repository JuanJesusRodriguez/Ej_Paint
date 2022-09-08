#include "IColorSelect.h"
#ifndef __COLORSELECT__HPP
#define __COLORSELECT__HPP

class ColorSelect : public IColorSelect
{
public:
    ColorSelect();
    Color colorSelect(string colorTag);
};

#endif