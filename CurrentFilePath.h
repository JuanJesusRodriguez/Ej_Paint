#include <string>
#include "ICurrentFilePath.h"

#ifndef CURRENTFILEPATH_H_
#define CURRENTFILEPATH_H_

class CurrentFilePath: public ICurrentFilePath
{
	public:
		CurrentFilePath(std::string fullPath, std::string currentName)
			: fullPath(fullPath), currentName(currentName){}
		std::string getFullPath();
		std::string getCurrentFileName();
	private:
		std::string fullPath;
		std::string currentName;
};

#endif
