#include "IForeColor.h"

#ifndef FORECOLOR_H_
#define FORECOLOR_H_

class ForeColor: public IForeColor{
	public:
		ForeColor(Color color): color(color){}
		Color getColor();
	private:
		Color color;
};

#endif
