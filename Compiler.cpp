#include "Compiler.h"

Compiler::Compiler(IApp* app, IParser* parser, ICanvas* canvas, IToolbar* toolbar):
app{app}, parser{parser}, canvas{canvas}, toolbar{toolbar}, executeCommand{nullptr}
{
	initializeLineCommandRegister();
}

void Compiler::compile(std::string command){
	executeCommand = parser->parse(command);
	IExecuteCommand *lineCommand(lineCommandRegister[executeCommand->typeCommand](executeCommand));
	lineCommand->execute();
	delete lineCommand;
}

void Compiler::initializeLineCommandRegister(){
	lineCommandRegister.insert(make_pair("create", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("list", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("select", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("selectAll", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("unselect", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("unselectAll", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("applyForeColor", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("applyBackgroundColor", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("move", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("remove", [=](CommandParseLine *executeCommand){

	}));

	lineCommandRegister.insert(make_pair("open", [=](CommandParseLine *executeCommand){

	}));
}

