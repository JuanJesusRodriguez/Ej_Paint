#include "ICommandCreate.h"
#include "canvas.h"

void ICommandCreate::create(Shape* shape, IPointsInitialFinal* pointsInitialFinal,Canvas *canva){
    //es necesario IPointsInitialFinal si shape tiene los gets
        
    //Añadir figura al canvas:
    canvas->addColoredShape(shapeColored);
}