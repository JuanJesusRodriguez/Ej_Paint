#include <string>

#ifndef ICOMPILER_H_
#define ICOMPILER_H_

class ICompiler{
	public:
		virtual void compile(std::string command) = 0;
		virtual ~ICompiler()=0;
};

#endif
