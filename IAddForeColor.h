#include "Color.h"

#ifndef __IADDFORECOLOR__HPP
#define __IADDFORECOLOR__HPP

class IAddForeColor{
    public:
    virtual void addForeColor(Color* color, int uid) = 0;
    virtual ~IAddForeColor() = 0;
};
#endif // __IADDFORECOLOR__HPP
