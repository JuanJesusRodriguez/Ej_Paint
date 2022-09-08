#include "ICommandMove.h"

class CommandMove : public ICommandMove
{
public:
    CommandMove();
    void shapeMove(Shape *shape, Point pointReference);
};