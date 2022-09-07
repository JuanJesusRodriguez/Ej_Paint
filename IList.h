#include "point.h"
#include <string>
using namespace std;
#ifndef __ILIST__HPP
#define __ILIST__HPP

    class Ilist{
        public:
        virtual void list(string type,Point point) = 0;
    };

#endif /* __ILIST__HPP */