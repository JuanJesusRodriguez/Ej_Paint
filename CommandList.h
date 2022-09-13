#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDLIST__H
#define __COMMANDLIST__H

class CommandList : public IExecuteCommand
{
private:
    Canvas *canvas_;

public:
    CommandList(Canvas *canvas) : canvas_{canvas} {}

    void execute()
    {
        canvas_->list();
    }
};

#endif // __COMMANDLIST__H