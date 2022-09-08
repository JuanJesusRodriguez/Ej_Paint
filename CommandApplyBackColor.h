#include "ICommandApplyBackColor.h"

class CommandApplyBackColor : public ICommandApplyBackColor
{
public:
    CommandApplyBackColor();
    void applyBackColor(Shape *shape, Color color);
};