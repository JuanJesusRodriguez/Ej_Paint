#include "IPointsInitialFinal.h"
#include "Shape.h"
#ifndef ICOMMANDCREATE_H_
#define ICOMMANDCREATE_H_
	class ICommandCreate{
	public:
		virtual void create(Shape* shape, IPointsInitialFinal* pointsInitialFinal) = 0;
	};
#endif
