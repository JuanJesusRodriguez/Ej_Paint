#include "IAddForeColor.h"
#include "ICanvas.h"

class AddForeColor : public IAddForeColor{
	public:
    	void addForeColor(Color* color,int uid);
	private:
    	ICanvas* iCanvas;
};
