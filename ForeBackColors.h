#include "ibackgroundcolor.h"
#include "iforecolor.h"
#include "IForeBackColor.h"

#ifndef FOREBACKCOLORS_H_
#define FOREBACKCOLORS_H_

class ForeBackColors : public IForeBackColors
{
	public:
		ForeBackColors(IForeColor* forecolor, IBackgroundColor* backgroundcolor)
			:forecolor(forecolor), backgroundcolor(backgroundcolor){}
		IForeColor* getForeColor();
		IBackgroundcolor* getBackgroundColor();
	private:
		IForeColor* forecolor;
		IBackgroundColor* backgroundcolor;

};

#endif
