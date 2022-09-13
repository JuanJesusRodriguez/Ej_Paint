#include "Canvas.h"
#include "compiler.h"
#include <fstream>
#include <iostream>

using namespace std;

void Canvas::create(Shape* shape)
{
	ListOfShapes.insert(make_pair(nextId, shape));
	nextId++;
}

void Canvas::list()
{
	for (auto iterator : ListOfShapes)
	{
		std::cout << iterator.first << iterator.second->getShapeType() << std::endl;
	}
}

void Canvas::select(int uid)
{
	auto iterator = ListOfShapes.find(uid);
	if (iterator != ListOfShapes.end())
	{
		SelectedShapes.insert(make_pair(uid, ListOfShapes[uid]));
	}
}

void Canvas::selectAll()
{
	SelectedShapes = ListOfShapes;
}

void Canvas::unselect(int uid)
{
	auto iterator = SelectedShapes.find(uid);
	if (iterator != SelectedShapes.end())
	{
		SelectedShapes.erase(iterator);
	}
}

void Canvas::unselectAll()
{
	SelectedShapes = std::map<int, Shape *>();
}

void Canvas::addNewForeColor(int uid, Color *color)
{
	auto iterator = ListOfShapes.find(uid);
	if (iterator != ListOfShapes.end())
	{
		ListOfShapes[uid]->setForeColor(color);
	}
}
void Canvas::addNewBackgroundColor(int uid, Color *color)
{
	auto iterator = ListOfShapes.find(uid);
	if (iterator != ListOfShapes.end())
	{
		ListOfShapes[uid]->setBackgroundColor(color);
	}
}

void Canvas::move(int uid, Point* pointInitial, Point* pointFinal)
{
	auto iterator = ListOfShapes.find(uid);
	if (iterator != ListOfShapes.end())
	{
		ListOfShapes[uid]->setPointInitial(pointInitial);
		ListOfShapes[uid]->setPointFinal(pointFinal);
	}
}

void Canvas::remove(int uid, Point point)
{
	auto iterator = ListOfShapes.find(uid);
	if (iterator != ListOfShapes.end())
	{
		ListOfShapes.erase(iterator);
	}
	else
	{
		if (Point(0, 0) != point)
		{
			for (auto iterator : ListOfShapes)
			{
				if ( point == iterator.second->getPointInitial() || iterator.second->getPointFinal() == point)
				{
					ListOfShapes.erase(ListOfShapes.find(iterator.first));
				}
			}
		}
		else
		{
			std::cout << "Error: There is nothing to remove" << std::endl;
		}
	}
}

void Canvas::open(Compiler* compiler , string filename){
		ifstream inputFile(filename);
		string command;
		while(getline(inputFile,command))
		{
			compiler->compile(command);
		}
}