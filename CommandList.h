#include "ICommandList.h"
#ifndef __COMMANDLIST__HPP
#define __COMMANDLIST__HPP

class CommandList : public ICommandList
{
public:
    CommandList();
    void list(string type, Point point);
};

#endif // __COMMANDLIST__HPP