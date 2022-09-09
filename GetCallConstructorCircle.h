#include "GetCallConstructor.h"

#ifndef GETCALLCONSTRUCTORRECTCIRCLE_H_
#define GETCALLCONSTRUCTORRECTCIRCLE_H_

typedef Shape* (*scriptConstructor) ();

class GetCallConstructorCircle: public GetCallConstructor{
	public:
		GetCallConstructorCircle(){}
		scriptConstructor getFunction();
};

#endif
