#include "ibackgroundcolor.h"
#include "iforecolor.h"
#include "IForeBackColor.h"

#ifndef FOREBACKCOLORS_H_
#define FOREBACKCOLORS_H_

class ForeBackColors : public IForeBackColors
{
	public:
		ForeBackColors(IForeColor* foreColor, IBackgroundColor* backgroundColor)
			:foreColor(foreColor), backgroundColor(backgroundColor){}
		IForeColor* getForeColor();
		IBackgroundcolor* getBackgroundColor();
	private:
		IForeColor* foreColor;
		IBackgroundColor* backgroundColor;

};

#endif
