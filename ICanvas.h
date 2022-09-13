#include "IColoredShape.h"
#include "Color.h"

#ifndef ICANVAS_H_
#define ICANVAS_H_

class ICanvas{
	public:
		virtual ~ICanvas() = 0;
		virtual void create(Shape* shape) = 0;
		virtual void list() = 0;
		virtual void select(int uid)= 0;
		virtual void selectAll() = 0;
		virtual void unselect(int uid) = 0;
		virtual void unselectAll() = 0;
		virtual void addNewForeColor(int uid, Color* color) = 0;
		virtual void addNewBackgroundColor(int uid, Color* color) = 0;
		virtual void move(int uid, Point pointInitial, Point pointFinal) = 0;
		virtual void remove(int uid, Point point) = 0;
};

#endif
