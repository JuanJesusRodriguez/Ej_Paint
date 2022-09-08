#include"color.h"
#include"shape.h"
#ifndef __ICOMMANDAPLYFORECOLOR__H
#define __ICOMMANDAPLYFORECOLOR__H

class ICommandApplyForeColor{

    public:
    virtual void applyForeColor(Shape* shape,Color color) = 0;
    virtual ~ICommandApplyForeColor() = 0;
};

#endif // __ICOMMANDAPLYFORECOLOR__H
