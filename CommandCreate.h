#include "IExecuteCommand.h"
#include "Toolbar.h"
#include "Canvas.h"
#ifndef __COMMANDCREATE__H
#define __COMMANDCREATE__H

class CommandCreate : public IExecuteCommand
{
private:
    Toolbar *toolbar_;
    Canvas *canvas_;
    string shapeType_;
	string backColor_;
	string foreColor_;
	Point *pointInitial_;
	Point *pointFinal_;
    

public:
    CommandCreate(Toolbar *toolbar, Canvas *canvas, string shapeType, string backColor, string foreColor, Point *pointInitial, Point *pointFinal) :
     toolbar_{toolbar}, canvas_{canvas}, pointInitial_(pointInitial), pointFinal_(pointFinal)
    {
		shapeType_ = shapeType;
        backColor_ = backColor;
		foreColor_ = foreColor;
    }
    void execute(){
        //Falta funcion
    }
};

#endif // __COMMANDCREATE__H