#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <vector>

#include "Point2D.h"

/**
*  ласс, от которого можно наследовать, чтобы определить классы дл€ выпуклых многоугольников дл€ построени€ по точкам.
* ѕроверка на выпуклость не реализована.
* ћожно унаследовать класс дл€ определени€ круга, но необходимо будет переопределить методы drawShape и drawOutline.
*/
class BasicShape
{
protected:
	std::vector<Point2D> allPoints;

	sf::Color fillColor = sf::Color::Green;
	sf::Color outlineColor = sf::Color::Green;

public:
	/**
	* ќтобразить фигуру с заливкой
	*/
	virtual void drawShape(sf::RenderWindow &window);

	/**
	* ¬ывести на экран только контур фигуры
	*/
	virtual void drawOutline(sf::RenderWindow &window);

	void setFillColor(sf::Color c) { fillColor = c; };
	void setOutlineColor(sf::Color c) { outlineColor = c; };
};
