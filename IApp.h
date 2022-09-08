#ifndef IAPP_H_
#define IAPP_H_

class IApp{
	virtual void init()=0;
	virtual void stop()=0;
	virtual ~IApp() = 0;
};
#endif
