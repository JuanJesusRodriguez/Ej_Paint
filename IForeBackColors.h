#include "IBackgroundColor.h"
#include "IForeColor.h"

#ifndef IFOREBACKCOLORS_H_
#define IFOREBACKCOLORS_H_

class IForeBackColors{
	public:
		virtual IForeColor* getForeColor() = 0;
		virtual IBackgroundColor* getBackgroundColor() = 0;
};
#endif
