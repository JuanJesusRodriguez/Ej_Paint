#include "ICommandApplyForeColor.h"
#ifndef __COMMANDAPPLYFORECOLOR__HPP
#define __COMMANDAPPLYFORECOLOR__HPP

class CommandApplyForeColor : public ICommandApplyForeColor
{
public:
    CommandApplyForeColor();
    void applyForeColor(Shape *shape, Color color);
};
#endif // __COMMANDAPPLYFORECOLOR__HPP