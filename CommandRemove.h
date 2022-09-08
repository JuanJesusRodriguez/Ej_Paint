#include "ICommandRemove.h"
#ifndef __COMMANDREMOVE__HPP
#define __COMMANDREMOVE__HPP

class CommandRemove : public ICommandRemove
{
public:
    CommandRemove();
    void remove(int id, Point point);
};

#endif // __COMMANDREMOVE__HPP