#include "Color.h"

#ifndef IFORECOLOR_H_
#define IFORECOLOR_H_

class IForeColor{
	public:
		virtual Color getColor() = 0;
		virtual ~IForeColor() = 0;
};

#endif
