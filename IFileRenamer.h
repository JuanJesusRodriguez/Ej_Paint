#include "Shape.h"
#include "Color.h"
#include <fstream>
#include <string>

#ifndef __IFILERENAMER__HPP
#define __IFILERENAMER__HPP

class IFileRenamer {
    public:
        virtual void FileRename(std::string fullPath, std::string currentFileName, std::string newFileName) = 0;
};
#endif