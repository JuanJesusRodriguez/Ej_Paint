#include "IFactoryColor.h"

class FactoryColor : public IFactoryColor
{
    public:
        Color *createColor();
};