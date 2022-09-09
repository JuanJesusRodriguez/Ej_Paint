#include "GetCallConstructor.h"


#ifndef GETCALLCONSTRUCTORRECTSQUARE_H_
#define GETCALLCONSTRUCTORRECTSQUARE_H_

typedef Shape* (*scriptConstructor) ();

class GetCallConstructorSquare: public GetCallConstructor{
	public:
		GetCallConstructorSquare(){}
		scriptConstructor getFunction();
};

#endif
