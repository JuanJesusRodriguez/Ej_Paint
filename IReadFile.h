#include <fstream>
#ifndef __IREADFILE__HPP
#define __IREADFILE__HPP

class IReadFile{
    public:
    virtual void readFile(std::fstream fileDescriptor) = 0;
};
#endif // __IREADFILE__HPP