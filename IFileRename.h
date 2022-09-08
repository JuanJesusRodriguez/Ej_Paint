#include <fstream>
#include <string>
#include "ICurrentFilePath.h"

#ifndef __IFILERENAMER__HPP
#define __IFILERENAMER__HPP

class IFileRename {
    public:
        virtual void fileRename(ICurrentFilePath* currentFilePath, std::string newFileName) = 0;
};

#endif
