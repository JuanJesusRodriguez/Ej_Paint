#include "Shape.h"

#ifndef GETCALLCONSTRUCTOR_H_
#define GETCALLCONSTRUCTOR_H_

typedef Shape* (*scriptConstructor) ();

class GetCallConstructor
{
	virtual scriptConstructor getFunction() = 0;
	virtual ~GetCallConstructor() = 0;
};

#endif
