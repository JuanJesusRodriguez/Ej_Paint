#include "ICanvas.h"
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
	void addNewForeColor(int uid, Color* color);
	void addNewBackgroundColor(int uid, Color* color);
	void move(int uid, Point pointInitial, Point pointFinal);
	void remove(int uid, Point point);
	void open(Compiler* compiler , string filename);

private:
	int nextId = 0;
	std::map<int, Shape *> ListOfShapes;
	std::map<int, Shape *> SelectedShapes;
};

#endif
