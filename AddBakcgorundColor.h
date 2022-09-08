#include "Color.h"
#include "IAddBackgroundColor.h"

#ifndef ADDBACKGROUNDCOLOR_H_
#define ADDBACKGROUNDCOLOR_H_

class AddBackgroundColor: public IAddBackgroundColor
{
	AddBackgroundColor();
	void addBackgroundColor(Color* color, int uid);
};

#endif
