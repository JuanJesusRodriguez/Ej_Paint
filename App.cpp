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

App::App():end(false)
{
	cliApp = new CLI::App("Application Paint");
	commandParseLine = new CommandParseLine();
	parser = new Parser(cliApp, commandParseLine);
	canvas = new Canvas();
	toolbar = new Toolbar();
	compiler = new Compiler(this, parser, canvas, toolbar);

	IFactoryShape *factoryRectangle = FactoryRectangle();
	toolbar->addShapeFactory("Rectangle", *factoryRectangle);
	IFactoryShape *factorySquare = FactorySquare();
	toolbar->addShapeFactory("Square", *factorySquare);
	IFactoryShape *factoryCircle = FactoryCircle();
	toolbar->addShapeFactory("Circle", *factoryCircle);

	IFactoryColor* factoryWhite = new FactoryColor();
	toolbar->addColorFactory("White", factoryWhite);
	IFactoryColor* factoryBlack = new FactoryColor();
	toolbar->addColorFactory("Black", factoryBlack);
	IFactoryColor* factoryRed = new FactoryColor();
	toolbar->addColorFactory("Red", factoryRed);
	IFactoryColor* factoryBlue = new FactoryColor();
	toolbar->addColorFactory("Blue", factoryBlue);
	IFactoryColor* factoryGreen = new FactoryColor();
	toolbar->addColorFactory("Green", factoryGreen);
}


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
