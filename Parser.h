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
		void setupCreate();
		void setupList();
		void setupSelect();
		void setupSelectAll();
		void setupUnSelect();
		void setupUnselectAll();
		void setupApplyForeColor();
		void setupApplyBackgroundColor();
		void setupMove();
		void setupRemove();
		void setupOpen();
};

#endif
