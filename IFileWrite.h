#include <fstream>
#include <string>
#include <list>

#ifndef __IFILEWRITE__HPP
#define __IFILEWRITE__HPP

class IFileWrite{
    public:
        virtual void fileWrite(std::string path, std::string data) = 0;
        virtual void fileWrite(std::string path, std::list<std::string> data) = 0;
};

#endif