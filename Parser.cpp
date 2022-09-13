#include "Parser.h"
#include "CLI11.hpp"

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

void Parser::setupAllCommands()
{
	cliApp->require_subcommand(1,1);
	setupCreate(cliApp, commandParseLine);
	setupList(cliApp, commandParseLine);
	setupSelect(cliApp, commandParseLine);
	setupSelectAll(cliApp, commandParseLine);
	setupUnselect(cliApp, commandParseLine);
	setupUnselectAll(cliApp, commandParseLine);
	setupApplyForeColor(cliApp, commandParseLine);
	setupApplyBackgroundColor(cliApp, commandParseLine);
	setupMove(cliApp, commandParseLine);
	setupRemove(cliApp, commandParseLine);
	setupOpen(cliApp, commandParseLine);
}

void Parser::setupCreate(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("Create", "Create a new shape");

	subCommand->add_option("-s", commandParseLine->typeShape, "Type of the shape")->required();
	subCommand->add_option("-ix", commandParseLine->initialPointX, "Initial Point X axis")->required();
	subCommand->add_option("-iy", commandParseLine->initialPointY, "Initial Point Y axis")->required();
	subCommand->add_option("-ex", commandParseLine->finalPointX, "Final Point X axis")->required();
	subCommand->add_option("-ey", commandParseLine->finalPointY, "Final Point Y axis")->required();
	subCommand->add_option("-f", commandParseLine->foreColor, "Border color")->required(false);
	subCommand->add_option("-b", commandParseLine->backgroundColor, "Background color")->required(false);

	subCommand->callback(
			[commandParseLine](){
				commandParseLine->typeCommand = "Create";
			}
	);

}

void Parser::setupList(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("List", "Show a list of shapes");

	subCommand->callback(
			[commandParseLine](){
				commandParseLine->typeCommand = "List";
			}
	);
}

void Parser::setupSelect(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("Select", "Select a shape");

	subCommand->add_option("-id", commandParseLine->uid, "The shape id")->required();

	subCommand->callback(
			[commandParseLine](){
				commandParseLine->typeCommand = "Select";
			}
	);
}

void Parser::setupSelectAll(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("SelectAll", "Select all shapes");

	subCommand->callback(
			[commandParseLine](){
				commandParseLine->typeCommand = "SelectAll";
			}
	);
}

void Parser::setupUnselect(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("Unselect", "Unselect a shape");

	subCommand->add_option("-id", commandParseLine->uid, "The shape id")->required();

	subCommand->callback(
				[commandParseLine](){
					commandParseLine->typeCommand = "Unselect";
				}
		);
}

void Parser::setypUnselectAll(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("UnselectAll", "Unselect all shapes");

		subCommand->callback(
				[commandParseLine](){
					commandParseLine->typeCommand = "UnselectAll";
				}
		);
}

void Parser::setupApplyForeColor(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("ApplyForeColor", "Apply a color to the border of a shape");

	subCommand->add_option("-id", commandParseLine->uid, "The shape id")->required();
	subCommand->add_option("-f", commandParseLine->foreColor, "Border color")->required();

	subCommand->callback(
				[commandParseLine](){
					commandParseLine->typeCommand = "ApplyForeColor";
				}
		);
}

void Parser::setupApplyBackgroundColor(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("ApplyBackgroundColor", "Apply a color to the background of a shape");

	subCommand->add_option("-id", commandParseLine->uid, "The shape id")->required();
	subCommand->add_option("-b", commandParseLine->backgroundColor, "Background color")->required();

	subCommand->callback(
				[commandParseLine](){
					commandParseLine->typeCommand = "ApplyBackgroundColor";
				}
		);
}

void Parser::setupMove(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("Move", "Move a shape");

	subCommand->add_option("-s", commandParseLine->typeShape, "Type of the shape")->required();
	subCommand->add_option("-ix", commandParseLine->initialPointX, "Initial Point X axis")->required();
	subCommand->add_option("-iy", commandParseLine->initialPointY, "Initial Point Y axis")->required();
	subCommand->add_option("-ex", commandParseLine->finalPointX, "Final Point X axis")->required();
	subCommand->add_option("-ey", commandParseLine->finalPointY, "Final Point Y axis")->required();

	subCommand->callback(
			[commandParseLine](){
				commandParseLine->typeCommand = "Move";
			}
	);
}

void Parser::setupRemove(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("Remove", "Remove a shape");
	subCommand->add_option("-s", commandParseLine->typeShape, "Type of the shape")->required(false);
	subCommand->add_option("-ix", commandParseLine->initialPointX, "Initial Point X axis")->required(false);
	subCommand->add_option("-iy", commandParseLine->initialPointY, "Initial Point Y axis")->required(false);

	subCommand->callback(
			[commandParseLine](){
				commandParseLine->typeCommand = "Remove";
			}
	);
}

void Parser::setupOpen(CLI::App* cliApp, CommandParseLine* commandParseLine){
	auto *subCommand = cliApp->add_subcommand("Open", "Open a file");

	subCommand->add_option("-id", commandParseLine->filePath, "The path of the file")->required();

	subCommand->callback(
				[commandParseLine](){
					commandParseLine->typeCommand = "Open";
				}
		);
}
