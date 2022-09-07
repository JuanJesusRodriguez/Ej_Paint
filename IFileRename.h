#include <fstream>
#include <string>

#ifndef __IFILERENAMER__HPP
#define __IFILERENAMER__HPP

class IFileRename {
    public:
        virtual void FileRename(std::string fullPath, std::string currentFileName, std::string newFileName) = 0;
};

#endif