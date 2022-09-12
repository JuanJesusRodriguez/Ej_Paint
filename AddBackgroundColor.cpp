#include "AddBackgroundColor.h"
#include "ICanvas.h"
#include "IColoredShape.h"

void addBackgroundColor::addBackgroundColor(Color* color,int uid){
    iCanvas->modify(color, &modifyColoredShape, uid);
}

IColoredShape* modifyColoredShape(IColoredShape* coloredShape, Color color){
	IForeBackColors* newForeBackColor = coloredShape->getColors();
	IBackgroundColor* newBackgroundColor = new BackgroundColor(color);
	newForeBackColor = new ForeBackColor(newForeBackColor->getForeColor(), newBackgroundColor);
	return ColoredShape(coloredShape->getShape(), newForeBackColor);
}
