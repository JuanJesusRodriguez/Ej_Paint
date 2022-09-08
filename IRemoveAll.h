#include<list>
#include<string>

#ifndef __IREMOVEALL__HPP
#define __IREMOVEALL__HPP

template <typename T>
class IRemoveAll{
    public:

        /*
        For use with:
        virtual std::list<std::string> selectAll() = 0;
        virtual void removeAll(std::list<std::string>) = 0;
        */
        virtual void removeAll(std::list<T>) = 0;
};

#endif