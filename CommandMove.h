#include "ICommandMove.h"
#ifndef __COMMANDMOVE__HPP
#define __COMMANDMOVE__HPP

class CommandMove : public ICommandMove
{
public:
    CommandMove();
    void shapeMove(Shape *shape, Point pointReference);
    
};

#endif // __COMMANDMOVE__HPP