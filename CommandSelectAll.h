#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDSELECTALL__H
#define __COMMANDSELECTALL__H

class CommandSelectAll : public IExecuteCommand
{
private:
    Canvas *canvas_;

public:
    CommandSelectAll(Canvas *canvas) : canvas_{canvas} {}

    void execute()
    {
        canvas_->selectAll();
    }

};

#endif // __COMMANDSELECTALL__H