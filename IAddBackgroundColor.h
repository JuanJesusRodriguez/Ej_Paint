#include "Color.h"

#ifndef IADDBACKGROUNDCOLOR_H_
#define IADDBACKGROUNDCOLOR_H_

class IAddBackgroundColor{
	public:
		virtual void addColor(Color color, int uid) = 0;
		virtual ~IAddBackgroundColor() = 0;
};

#endif
