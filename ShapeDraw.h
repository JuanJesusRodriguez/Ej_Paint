#include"IShapeDraw.h"
#include "ICanvas.h"

class ShapeDraw : public IShapeDraw{
	public:
    	ShapeDraw(){}
    	void shapeDraw(IColoredShape* coloredShape);
	private:
    	ICanvas* canvas;
};
