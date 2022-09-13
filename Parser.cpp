#include "Parser.h"

Parser::Parser(CLI::App* cliApp, CommandParseLine* commandParseLine):
cliApp{cliApp}, commandParseLine{commandParseLine}
{
	resetCommandParseLine();
	setupAllCommands();
}

CommandParseLine* Parser::parse(std::string command){
	resetCommandParseLine();
	cliApp->parse(command);

	return commandParseLine;
}

void Parser::resetCommandParseLine(){
	commandParseLine->typeCommand = "null";
	commandParseLine->typeShape = "null";
	commandParseLine->initialPointX = 0;
	commandParseLine->initialPointY = 0;
	commandParseLine->finalPointX = 0;
	commandParseLine->finalPointY = 0;
	commandParseLine->foreColor = "Black";
	commandParseLine->backgroundColor = "White";
	commandParseLine->uid = 0;
	commandParseLine->filePath = "";
}


