#include "App.h"
#include "Parser.h"
#include "Canvas.h"
#include "Toolbar.h"
#include "Compiler.h"
#include "CLI11.hpp"
#include "IFactoryShape.h"
#include "IFactoryColor.h"
#include <string>
#include <iostream>

#include "IFactoryColorFixed.h"

App::App():end(false)
{
	cliApp = new CLI::App("Application Paint");
	commandParseLine = new CommandParseLine();
	parser = new Parser(cliApp, commandParseLine);
	canvas = new Canvas();
	toolbar = new Toolbar();
	compiler = new Compiler(this, parser, canvas, toolbar);

	FactoryShape* factoryRectangle = new FactoryRectangle();
	toolbar->addShapeFactory("Rectangle", factoryRectangle);
	FactoryShape* factorySquare = new FactorySquare();
	toolbar->addShapeFactory("Square", factorySquare);
	FactoryShape *factoryCircle = new FactoryCircle();
	toolbar->addShapeFactory("Circle", factoryCircle);

	string animals[] = {"White", "Black", "Red", "Blue", "Green"}; 

	for(string s:animals)
	{
		FactoryColorFixed* factory = new FactoryColorFixed(s);
		toolbar->addColorFactoryFixed(s, factory);
	}
}

//IMPLEMENTAR DESTRUCTOR PENDIENTE


void App::init(){
	do{
		std::string command;
		cin.getline(command);
		compiler->compile(command);
	}while(!end);
}

void App::stop(){
	end=false;
}
