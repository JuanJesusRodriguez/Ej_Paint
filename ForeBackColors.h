#include "ibackgroundcolor.h"
#include "iforecolor.h"
#include "IForeBackColors.h"

#ifndef FOREBACKCOLORS_H_
#define FOREBACKCOLORS_H_

class ForeBackColors : public IForeBackColors
{
	public:
		ForeBackColors(IForeColor* forecolor, IBackgroundColor* backgroundcolor)
			:forecolor(forecolor), backgroundcolor(backgroundcolor){}
		IForeColor* getForeColor();
		IBackgroundColor* getBackgroundColor();
	private:
		IForeColor* forecolor;
		IBackgroundColor* backgroundcolor;

};

#endif
