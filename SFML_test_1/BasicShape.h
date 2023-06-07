#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <vector>

#include "Point2D.h"

/**
* �����, �� �������� ����� �����������, ����� ���������� ������ ��� �������� ��������������� ��� ���������� �� ������.
* �������� �� ���������� �� �����������.
* ����� ������������ ����� ��� ����������� �����, �� ���������� ����� �������������� ������ drawShape � drawOutline.
*/
class BasicShape
{
protected:
	std::vector<Point2D> allPoints;

	sf::Color fillColor = sf::Color::Green;
	sf::Color outlineColor = sf::Color::Green;

public:
	/**
	* ���������� ������ � ��������
	*/
	virtual void drawShape(sf::RenderWindow &window);

	/**
	* ������� �� ����� ������ ������ ������
	*/
	virtual void drawOutline(sf::RenderWindow &window);

	void setFillColor(sf::Color c) { fillColor = c; };
	void setOutlineColor(sf::Color c) { outlineColor = c; };
};
