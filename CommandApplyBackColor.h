#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDAPLYBACKCOLOR__H
#define __COMMANDAPLYBACKCOLOR__H

class CommandApplyBackColor : public IExecuteCommand
{
private:
    Toolbar *toolbar_;
    Canvas *canvas_;
    string backColor_;
    int uid_;

public:
    CommandApplyBackColor(Toolbar *toolbar, Canvas *canvas, string backColor, int uid) :
     toolbar_{toolbar}, canvas_{canvas}, uid_{uid}
    {
        backColor_ = backColor;
    }
    void execute(){
        //Falta funcion
        canvas_->addNewBackgroundColor(uid_,toolbar_->SelectColor(backColor_));
    }
};

#endif // __COMMANDAPLYBACKCOLOR__H