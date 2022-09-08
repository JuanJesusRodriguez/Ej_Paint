#include"color.h"
#include"shape.h"
#ifndef __ICOMMANDAPLYBACKCOLOR__H
#define __ICOMMANDAPLYBACKCOLOR__H

class ICommandApplyBackColor{

    public:
    virtual void applyBackColor(Shape* shape,Color color) = 0;
    virtual ~ICommandApplyBackColor() = 0;
};

#endif // __ICOMMANDAPLYBACKCOLOR__H
