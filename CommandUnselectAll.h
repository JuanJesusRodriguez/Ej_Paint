#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDUNSELECTALL__H
#define __COMMANDUNSELECTALL__H

class CommandUnselectAll : public IExecuteCommand
{
private:
    Canvas *canvas_;

public:
    CommandUnselectAll(Canvas *canvas) : canvas_{canvas} {}

    void execute()
    {
        canvas_->unselectAll();
    }

};

#endif // __COMMANDUNSELECTALL__H