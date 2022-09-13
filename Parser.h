#ifndef PARSER_H_
#define PARSER_H_

#include "CLI11.hpp"
#include "IParser.h"
#include "Point.h"

class Parser: public IParser{
	public:
		Parser(CLI::App* cliApp, CommandParseLine* commandParseLine);
		CommandParseLine* parse(std::string command);
	private:
		CLI::App* cliApp;
		CommandParseLine* commandParseLine;

		void resetCommandParseLine();
		void setupAllCommands();
		void setupCreate(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupList(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupSelect(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupSelectAll(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupUnselect(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupUnselectAll(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupApplyForeColor(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupApplyBackgroundColor(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupMove(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupRemove(CLI::App* cliApp, CommandParseLine* commandParseLine);
		void setupOpen(CLI::App* cliApp, CommandParseLine* commandParseLine);
};

#endif
