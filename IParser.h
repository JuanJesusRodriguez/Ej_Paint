#include <string>
#include "ParseCommandLine.h"

#ifndef IPARSER_H_
#define IPARSER_H_

class IParser{
	public:
		virtual CommandParseLine* parse(std::string command) = 0;
		virtual ~IParser()=0;
};

#endif
