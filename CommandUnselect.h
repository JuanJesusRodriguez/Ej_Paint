#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDUNSELECT__H
#define __COMMANDUNSELECT__H

class CommandUnselect : public IExecuteCommand
{
private:
    Canvas *canvas_;
    int uid_;

public:
    CommandUnselect(Canvas *canvas, int uid) : canvas_{canvas}, uid_{uid} {}

    void execute()
    {
        canvas_->unselect(uid_);
    }

    bool isSerial()
    {
        return true;
    }
};

#endif // __COMMANDUNSELECT__H