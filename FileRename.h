#include <fstream>
#include <string>
#include "ICurrentFilePath.h"
#include "IFileRename.h"

#ifndef FILERENAME_H_
#define FILERENAME_H_

public FileRename: public IFileRename{
	public:
		FileRename();
		void fileRename(ICurrentFilePath* currentFilePath, std::string newFileName)
			: currentFilePath(currentFilePath), newFileName(newFileName){}
}

#endif
