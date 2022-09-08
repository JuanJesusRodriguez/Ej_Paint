#include "Color.h"

#ifndef IADDCOLOR_H_
#define IADDCOLOR_H_

class IAddColor{
	public:
		virtual void addColor(Color color) = 0;
		virtual ~IAddColor() = 0;
};

#endif
