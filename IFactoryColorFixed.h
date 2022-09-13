#ifndef __ICOLORFACTORYFIXED_H_
#define __ICOLORFACTORYFIXED_H_
#include "Color.h"

class IFactoryColorFixed
{
    public:
        virtual Color* createColor() = 0;
};

#endif /* __ICOLORFACTORY_H_ */