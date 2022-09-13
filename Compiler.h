#include "ICompiler.h"
#include "ICanvas.h"
#include "IToolbar.h"
#include "IParser.h"
#include "IExecuteCommand.h"
#include "IApp.h"
#include <map>

#ifndef COMPILER_H_
#define COMPILER_H_

class Compiler: public ICompiler{
	public:
		Compiler(IApp* app, IParser* parser, Canvas* canvas, Toolbar* toolbar);
		void compile(std::string command);
	private:
		IApp *app;
		IParser* parser;
		Canvas* canvas;
		Toolbar* toolbar;
		CommandParseLine* executeCommand;
		typedef IExecuteCommand* (*executeFuntion)(CommandParseLine*);
		std::map<std::string, executeFuntion> lineCommandRegister;

		void initializeLineCommandRegister();
};

#endif
