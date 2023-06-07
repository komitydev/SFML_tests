#pragma once

#include <vector>

#include "Point2D.h"
#include "BasicShape.h"

class RectangleShape : public BasicShape
{
public:
	/**
	* ���������� �������������� �� ���� ������ (��������������� ��������)
	*/
	RectangleShape(Point2D a, Point2D b)
	{
		std::vector<Point2D>& p = allPoints;

		p.push_back(a);
		p.push_back({ a.x, b.y });
		p.push_back(b);
		p.push_back({ b.x, a.y });
	};

	/**
	* ���������� �������������� �� ����������� ������ � ������ ���� ������
	*/
	RectangleShape(Point2D center, float side_a, float side_b)
	{
		std::vector<Point2D>& p = allPoints;

		p.push_back({ center.x - (side_a / 2), center.y + (side_b / 2) });
		p.push_back({ center.x + (side_a / 2), center.y + (side_b / 2) });
		p.push_back({ center.x + (side_a / 2), center.y - (side_b / 2) });
		p.push_back({ center.x - (side_a / 2), center.y - (side_b / 2) });
	};
};
