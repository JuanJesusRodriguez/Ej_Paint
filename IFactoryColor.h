#ifndef __ICOLORFACTORY_H_
#define __ICOLORFACTORY_H_
#include "Color.h"

class IFactoryColor
{
    public:
        virtual Color* createColor(string colorValue) = 0;
};

#endif /* __ICOLORFACTORY_H_ */