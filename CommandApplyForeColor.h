#include "ICommandApplyBackColor.h"

class CommandApplyBackColor : public ICommandApplyBackColor
{
public:
    CommandApplyBackColor();
    void applyForeColor(Shape *shape, Color color);
};