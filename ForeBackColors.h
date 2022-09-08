#include "ibackgroundcolor.h"
#include "iforecolor.h"
#include "IForeBackColors.h"

#ifndef FOREBACKCOLORS_H_
#define FOREBACKCOLORS_H_

class ForeBackColors : public IForeBackColors
{
	public:
		ForeBackColors(IForeColor* foreColor, IBackgroundColor* backgroundColor)
			:foreColor(foreColor), backgroundColor(backgroundColor){}
		IForeColor* getForeColor();
		IBackgroundColor* getBackgroundColor();
	private:
		IForeColor* foreColor;
		IBackgroundColor* backgroundColor;

};

#endif
