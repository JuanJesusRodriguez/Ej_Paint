#include "App.h"

int main()
{
    App *app = new App();
	app->init();
	delete app;
}