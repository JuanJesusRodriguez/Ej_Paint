#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDAPLYFORECOLOR__H
#define __COMMANDAPLYFORECOLOR__H

class CommandApplyForeColor : public IExecuteCommand
{
private:
    Toolbar *toolbar_;
    Canvas *canvas_;
    string foreColor_;
    int uid_;

public:
    CommandApplyForeColor(Toolbar *toolbar, Canvas *canvas, string foreColor, int uid) :
     toolbar_{toolbar}, canvas_{canvas}, uid_{uid}
    {
        foreColor_ = foreColor;
    }
    void execute(){
        //Falta funcion
    }
};

#endif // __COMMANDAPLYFORECOLOR__H