#include "ISelectAll.h"

#ifndef __SELECTALL__HPP
#define __SELECTALL__HPP

class SelectAll: public ISelectAll
{
    public:
        std::list<std::string> selectAll() {};
};

#endif