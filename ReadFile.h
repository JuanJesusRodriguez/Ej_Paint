#include"IFileRead.h"

class FileRead : public IFileRead{

    FileRead();
    void fileRead(std::ifstream file);
};
