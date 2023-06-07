#pragma once

#include <vector>

#include "Point2D.h"
#include "RectangleShape.h"

class SquareShape : public RectangleShape
{
public:
	/**
	* ѕостроение квадрата по центру и стороне
	*/
	SquareShape(Point2D center, float side) : RectangleShape(center, side, side)
	{
	};
};
