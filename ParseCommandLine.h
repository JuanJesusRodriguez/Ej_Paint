#include "Point.h"
#include <string>

#ifndef PARSECOMMANDLINE_H_
#define PARSECOMMANDLINE_H_

struct CommandParseLine{
	std::string typecommand;
	std::string typeShape;
	double initialPointX;
	double initialPointY;
	double finalPointX;
	double finalPointY;
	std::string foreColor;
	std::string backgroundColor;
	int uid;
	std::string filePath;
};

#endif
