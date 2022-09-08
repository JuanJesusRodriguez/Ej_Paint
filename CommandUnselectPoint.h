#include "ICommandUnselectPoint.h"

class CommandUnselectPoint : public ICommandUnselectPoint
{
public:
    CommandUnselectPoint();
    void unselectPoint(Point point);
};