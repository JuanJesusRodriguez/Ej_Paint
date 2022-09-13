#include "IApp.h"
#include "IParser.h"
#include "ICanvas.h"
#include "IToolbar.h"
#include "ICompiler.h"
#include "CLI11.hpp"

#ifndef APP_H_
#define APP_H_

class App: public IApp{
	public:
		App();
		void init();
		void stop();
		~App(){};
	private:
		bool end;
		CLI::App* cliApp;
		CommandParseLine* commandParseLine;
		IParser* parser;
		ICanvas* canvas;
		IToolbar* toolbar;
		ICompiler* compiler;
};

#endif
