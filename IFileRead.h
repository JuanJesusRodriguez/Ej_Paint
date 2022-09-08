#include <fstream>
#include <string>

#ifndef __IREADFILE__HPP
#define __IREADFILE__HPP

class IFileRead{
    public:
        virtual std::fstream fileRead(std::string fileFullPath) = 0;
};

#endif
