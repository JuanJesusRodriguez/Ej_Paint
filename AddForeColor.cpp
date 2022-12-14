#include "AddForeColor.h"
#include "ICanvas.h"
#include "IColoredShape.h"

void AddForeColor::addForeColor(Color* color,int uid){
    iCanvas->modify(color, &modifyColoredShape, uid);
}

IColoredShape* modifyColoredShape(IColoredShape* coloredShape, Color color){
	IForeBackColors* newForeBackColor = coloredShape->getColors();
	IForeColor* newForeColor = new ForeColor(color);
	newForeBackColor = new ForeBackColor(newForeColor, newForeBackColor->getBackgroundColor());
	return ColoredShape(coloredShape->getShape(), newForeBackColor);
}
