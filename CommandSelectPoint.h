#include"ICommandSelectPoint.h"
#ifndef __COMMANDSELECTPOINT__H
#define __COMMANDSELECTPOINT__H

class CommandSelectPoint : public ICommandSelectPoint{
    CommandSelectPoint();
    void selectPoint(Point point);
};

#endif // __COMMANDSELECTPOINT__H