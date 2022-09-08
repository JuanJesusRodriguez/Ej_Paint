#include <fstream>
#include <string>

#ifndef __IREADFILE__HPP
#define __IREADFILE__HPP

class IReadFile{
    public:
        virtual std::fstream readFile(std::string fileFullPath) = 0;
};

#endif