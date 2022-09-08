#include "Point.h"
#include "IPointsInitialFinal.h"

#ifndef POINTSINITIALFINAL_H_
#define POINTSINITIALFINAL_H_

class PointsInitialFinal: public IPointsInitialFinal
{
	public:
		PointsInitialFinal(Point pointInitial, Point pointFinal)
			:pointInitial(pointInitial), pointFinal(pointFinal){}
		Point PointInitial();
		Point PointFinal();
	private:
		Point pointInitial;
		Point pointFinal;
};

#endif
