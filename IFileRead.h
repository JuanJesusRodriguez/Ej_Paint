#include <fstream>
#include <string>

#ifndef __IFILEREAD__HPP
#define __IFILEREAD__HPP

class IFileRead{
    public:
        virtual std::fstream fileRead(std::string fileFullPath) = 0;
};

#endif
