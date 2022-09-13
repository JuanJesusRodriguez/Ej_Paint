#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDSELECT__H
#define __COMMANDSELECT__H

class CommandSelect : public IExecuteCommand
{
private:
    Canvas *canvas_;
    int uid_;

public:
    CommandSelect(Canvas *canvas, int uid) : canvas_{canvas}, uid_{uid} {}

    void execute()
    {
        canvas_->select(uid_);
    }

    bool isSerial()
    {
        return true;
    }
};

#endif // __COMMANDSELECT__H