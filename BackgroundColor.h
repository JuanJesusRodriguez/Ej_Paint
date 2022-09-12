#include "IBackgroundColor.h"

#ifndef BACKGROUNDCOLOR_H_
#define BACKGROUNDCOLOR_H_

class BackgroundColor: public IBackgroundColor{
	public:
		BackgroundColor(Color color):color(color){}
		Color getColor();
	private:
		Color color;
};

#endif
