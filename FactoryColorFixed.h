#include "IFactoryColorFixed.h"

class FactoryColorFixed : public IFactoryColorFixed
{
    public:
        FactoryColorFixed(string colorValue);
        Color* createColor();

    private:
        string colorValue;
};