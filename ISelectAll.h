//#include "boost/uuid/uuid.hpp"
#include<list>
#include<string>


#ifndef __ISELECTALL__HPP
#define __ISELECTALL__HPP

class ISelectAll{
    public:
        virtual std::list<std::string> selectAll() = 0;
};

#endif