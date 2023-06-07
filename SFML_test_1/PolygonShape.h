#pragma once
#pragma once

#include <vector>

#include "Point2D.h"
#include "BasicShape.h"

class PolygonShape : public BasicShape
{
public:
	/**
	* ���������� �������������� �� ������ ������
	*/
	PolygonShape(std::vector<Point2D> &v)
	{
		/*
			����� ��� �������� �����, ���������� ������������� ���������, ��� ������� ��������,
			����� ��� ����������� �������� �������������� ���������, �� ������ � �� ���� ������ �������� 
			�� ��� - ����� �������, ��� ��� �������� ��������
		*/
		allPoints = v;
	};
};
