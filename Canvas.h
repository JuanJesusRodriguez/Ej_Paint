#include "ICanvas.h"
#include "IColoredShape.h"
#include "Color.h"
#include <map>

#ifndef CANVAS_H_
#define CANVAS_H_

class Canvas : public ICanvas
{
<<<<<<< HEAD
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
=======
	public:
		Canvas();
		void addColoredShape(IColoredShape* coloredShape);
		void deleteColoredShape(int uid);
		void modify(Color* color, IColoredShape* (*change)(IColoredShape*, Color), int uid);
		
	private:                           
		static std::map<int, IColoredShape*> drawnShape;
>>>>>>> 84882cd7035451b3f1466825b6c743cbad59fc60
};

#endif
