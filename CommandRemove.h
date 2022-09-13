#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDREMOVE__H
#define __COMMANDREMOVE__H

class CommandRemove : public IExecuteCommand
{
private:
    Canvas *canvas_;
    Point pointInitial_;
    int uid_;

public:
    CommandRemove(Canvas* canvas, int uid, Point pointInitial) : 
    canvas_{canvas} , uid_{uid}, pointInitial_{pointInitial} {}

    void execute()
    {
        canvas_->remove(uid_,pointInitial_);
    }

    bool isSerial()
    {
        return true;
    }
};

#endif // __COMMANDREMOVE__H