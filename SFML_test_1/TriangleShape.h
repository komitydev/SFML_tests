#pragma once

#include <vector>

#include "Point2D.h"
#include "BasicShape.h"

class TriangleShape : public BasicShape
{
public:
	TriangleShape(Point2D a, Point2D b, Point2D c)
	{
		std::vector<Point2D>& p = allPoints;
		p.push_back(a);
		p.push_back(b);
		p.push_back(c);
	};

	/**
	* Создание треугольника, вписанного в окружность
	*/
	TriangleShape(Point2D center, float radius)
	{
		if (radius <= 0)
		{
			throw "Radius must be a positive number";
		}
		
		Point2D a, b, c;
		a = { center.x, center.y + radius };
		b = { center.x - (static_cast<float>(cos(30 * MATH_PI_CONSTANT / 180.f)) * radius),
				center.y - (static_cast<float>(sin(30 * MATH_PI_CONSTANT / 180.f)) * radius)
		};
		c = { center.x + (static_cast<float>(cos(30 * MATH_PI_CONSTANT / 180.f)) * radius),
				center.y - (static_cast<float>(sin(30 * MATH_PI_CONSTANT / 180.f)) * radius)
		};

		std::vector<Point2D>& p = allPoints;
		p.push_back(a);
		p.push_back(b);
		p.push_back(c);
		setFillColor(sf::Color::Red);
	};
};
