#pragma once

#include <vector>

#include "Point2D.h"
#include "BasicShape.h"

class CircleShape : public BasicShape
{
	Point2D center;
	float radius;

public:
	CircleShape(Point2D center, float radius) : center(center), radius(radius)
	{
	};

	virtual void drawShape(sf::RenderWindow& window) override
	{
		sf::CircleShape shape(radius);
		/*
		ѕозици€ окружности в данном случае определ€етс€ как левый угол габаритного пр€моугольника,
		поэтому скорректируем ее относительно центра
		*/
		shape.setPosition(center.x - radius, center.y - radius);
		shape.setFillColor(fillColor);
		window.draw(shape);
	};

	virtual void drawOutline(sf::RenderWindow& window) override
	{
		sf::CircleShape shape(radius);
		/*
		ѕозици€ окружности в данном случае определ€етс€ как левый угол габаритного пр€моугольника,
		поэтому скорректируем ее относительно центра
		*/
		shape.setPosition(center.x - radius, center.y - radius);
		shape.setFillColor(sf::Color::Transparent);
		shape.setOutlineColor(outlineColor);
		shape.setOutlineThickness(1); // чтобы контур отображалс€, а не пропал при заливке центра прозрачным цветом
		window.draw(shape);
	};
};
