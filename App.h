#include "IApp.h"

#ifndef APP_H_
#define APP_H_

class App: public IApp{
	public:
		App();
		void init();
		void stop();
};

#endif
