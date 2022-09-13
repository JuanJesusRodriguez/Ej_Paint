#include "ICanvas.h"
#include "IColoredShape.h"
#include "Color.h"
#include <map>

#ifndef CANVAS_H_
#define CANVAS_H_

class Canvas : public ICanvas
{
public:
	void create(Shape *shape);
	void list();
	void select(int uid);
	void selectAll();
	void unselect(int uid);
	void unselectAll();

private:
	int nextId = 0;
	std::map<int, Shape *> ListOfShapes;
	std::map<int, Shape *> SelectedShapes;
};

#endif
