#include "ICommandUnselectPoint.h"
#ifndef __COMMANDUNSELECTPOINT__H
#define __COMMANDUNSELECTPOINT__H

class CommandUnselectPoint : public ICommandUnselectPoint
{
public:
    CommandUnselectPoint();
    void unselectPoint(Point point);
};

#endif // __COMMANDUNSELECTPOINT__H