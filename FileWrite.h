#include"IFileWrite.h"

class FileWrite : public IFileWrite{

    FileWrite();
    void fileWrite(std::ofstream file, std::string data);
};