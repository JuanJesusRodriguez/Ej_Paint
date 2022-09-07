#include <fstream>
#include <string>

#ifndef __IFILEWRITE__HPP
#define __IFILEWRITE__HPP

class IFileWrite{
    private:
    std::ofstream file;

    public:
    virtual void fileWrite(std::ofstream file, std::string data) = 0;
};
#endif // __IFILEWRITE__HPP