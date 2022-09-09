#include "GetCallConstructor.h"


#ifndef GETCALLCONSTRUCTORRECTANGLE_H_
#define GETCALLCONSTRUCTORRECTANGLE_H_

typedef Shape* (*scriptConstructor) ();

class GetCallConstructorRectangle: public GetCallConstructor{
	public:
		GetCallConstructorRectangle(){}
		scriptConstructor getFunction();
};

#endif
