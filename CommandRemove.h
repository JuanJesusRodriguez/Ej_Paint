#include "ICommandRemove.h"

class CommandRemove : public ICommandRemove
{
public:
    CommandRemove();
    void remove(int id, Point point);
};