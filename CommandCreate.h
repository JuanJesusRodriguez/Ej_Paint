#include "ICommandCreate.h"
#include "IPointsInitialFinal.h"
#include "Shape.h"

#ifndef COMMANDCREATE_H_
#define COMMANDCREATE_H_

class CommandCreate: public ICommandCreate{
	public:
		CommandCreate();
		virtual void create(Shape* shape, IPointsInitialFinal* pointsInitialFinal);
};

#endif
