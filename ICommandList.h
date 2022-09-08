#include "point.h"
#include <string>
using namespace std;
#ifndef __ICOMMANDLIST__HPP
#define __ICOMMANDLIST__HPP

    class ICommandList{
        public:
        virtual void list(string type,Point point) = 0;
    };

#endif /* __ICOMMANDLIST__HPP */
