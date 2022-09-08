#include <string>

#ifndef ICURRENTFILEPATH_H_
#define ICURRENTFILEPATH_H_

class ICurrentFilePath{
	public:
		virtual std::string getFullPath()=0;
		virtual std::string getCurrentFileName()=0;
};

#endif
