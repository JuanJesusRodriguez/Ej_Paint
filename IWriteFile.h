#include <fstream>
#include <string>
#ifndef __IWRITEFILE__HPP
#define __IWRITEFILE__HPP

class IWriteFile{
    private:
    std::ofstream file;

    public:
    virtual void writeFile(std::ofstream file, std::string data) = 0;
};
#endif // __IREADFILE__HPP