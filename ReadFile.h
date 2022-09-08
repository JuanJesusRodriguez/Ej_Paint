#include"IReadFile.h"

class ReadFile : public IReadFile{

    ReadFile();
    void readFile(std::ifstream file);
};