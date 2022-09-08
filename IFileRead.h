#include <fstream>
#include <string>
#include <list>

#ifndef __IFILEREAD__HPP
#define __IFILEREAD__HPP

class IFileRead{
    public:
        virtual std::list<std::string> fileRead(std::string path) = 0;
        virtual ~IFileRead() = 0;
};

#endif
