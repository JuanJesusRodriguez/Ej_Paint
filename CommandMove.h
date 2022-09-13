#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDMOVE__H
#define __COMMANDMOVE__H

class CommandMove : public IExecuteCommand
{
private:
    Canvas *canvas_;
    Point* pointInitial_;
    Point* pointFinal_;
    int uid_;

public:
    CommandMove(int uid, Point* pointInitial, Point* pointFinal) : 
    uid_{uid}, pointInitial_{pointInitial}, pointFinal_{pointFinal} {}

    void execute()
    {
        canvas_->move(uid_, pointInitial_, pointFinal_);
    }
};

#endif // __COMMANDMOVE__H