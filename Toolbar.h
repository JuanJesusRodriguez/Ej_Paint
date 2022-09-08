#include "Shape.h"
#include "Color.h"
#include "IToolbar.h"

#ifndef TOOLBAR_H_
#define TOOLBAR_H_

class Toolbar: public IToolbar{
	public:
		Shape* SelectShape();
		Color* SelectColor();
};

#endif
