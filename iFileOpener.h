#include "Shape.h"
#include "Color.h"
#include <fstream>
#include <string>

#ifndef __IFILEOPENER__HPP
#define __IFILEOPENER__HPP

class iFileOpener {
    public:
        virtual std::fstream open(std::string path) = 0;
};
#endif