#include "IBackgroundColor.h"
#include "iForeColor.h"

#ifndef IFOREBACKCOLORS_H_
#define IFOREBACKCOLORS_H_

class IForeBackColors{
	public:
		virtual *IForeColor getForeColor() = 0;
		virtual *IBackgroundcolor getBackgroundColor = 0;
};
#endif
