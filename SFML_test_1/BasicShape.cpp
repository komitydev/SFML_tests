#include "BasicShape.h"

#include <SFML/Graphics.hpp>

void BasicShape::drawShape(sf::RenderWindow &window)
{
    /*
        �������� �������������� �������������� �� �������������, ������� ������� �� ������ ������
    */
    sf::Vertex* vertices = new sf::Vertex[allPoints.size()];
    for (int i = 0; i < allPoints.size(); ++i)
    {
        vertices[i] = sf::Vertex(sf::Vector2f(allPoints[i].x, allPoints[i].y), fillColor);
    }

    window.draw(vertices, allPoints.size(), sf::TriangleFan);
    
    delete [] vertices;
}

void BasicShape::drawOutline(sf::RenderWindow& window)
{
    /*
        � ������ ������ ������� ������� ������� � �� ��� �������������� �����, 
        ��������� ������� ����� ������� ����������� � ������, ����� �������� ������
    */
    sf::Vertex* vertices = new sf::Vertex[allPoints.size()+1];
    for (int i = 0; i < allPoints.size(); ++i)
    {
        vertices[i] = sf::Vertex(sf::Vector2f(allPoints[i].x, allPoints[i].y), outlineColor);
    }
    vertices[allPoints.size()] = sf::Vertex(sf::Vector2f(allPoints[0].x, allPoints[0].y), outlineColor);

    window.draw(vertices, allPoints.size()+1, sf::LineStrip);

    delete[] vertices;
}
