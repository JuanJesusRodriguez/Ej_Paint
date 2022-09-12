#include "Toolbar.h"

Shape* Toolbar::SelectShape(std::string shapeTag){
	return shapeSelector->shapeSelect(shapeTag);
}

Color* Toolbar::SelectColor(std::string colorTag){
	return colorSelector->colorSelect(colorTag);
}
