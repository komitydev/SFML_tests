#pragma once
#pragma once

#include <vector>

#include "Point2D.h"
#include "BasicShape.h"

class PolygonShape : public BasicShape
{
public:
	/**
	* Построение многоугольника по набору вершин
	*/
	PolygonShape(std::vector<Point2D> &v)
	{
		/*
			Чтобы все работало верно, необходимо дополнительно убедиться, что полигон выпуклый,
			иначе при отображении возможно неопределенное поведение, но сейчас я не хочу писать проверку 
			на это - будем считать, что все полигоны выпуклые
		*/
		allPoints = v;
	};
};
