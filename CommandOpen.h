#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDOPEN__H
#define __COMMANDOPEN__H

class CommandOpen : public IExecuteCommand
{
private:
    Compiler *compiler_;
    Canvas *canvas_;
    string filename_;

public:
    CommandOpen(Compiler *compiler, Canvas *canvas, string filename) : compiler_(compiler), canvas_{canvas}
    {
        filename_ = filename;
    }

    void execute()
    {
        canvas_->open(compiler_, filename_);
    }
};

#endif // __COMMANDOPEN__H