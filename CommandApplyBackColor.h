#include "ICommandApplyBackColor.h"
#ifndef __COMMANDAPLYBACKCOLOR__H
#define __COMMANDAPLYBACKCOLOR__H

class CommandApplyBackColor : public ICommandApplyBackColor
{
public:
    CommandApplyBackColor();
    void applyBackColor(Shape *shape, Color color);
};
#endif // __COMMANDAPLYBACKCOLOR__H