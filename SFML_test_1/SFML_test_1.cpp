#include <SFML/Graphics.hpp>

#include <vector>

#include "Point2D.h"

#include "TriangleShape.h"
#include "RectangleShape.h"
#include "SquareShape.h"
#include "CircleShape.h"
#include "PolygonShape.h"

int WinMain()
{
    sf::RenderWindow window(sf::VideoMode(700, 350), "SFML TEST WINDOW");

    // polygon shape
    std::vector<Point2D> psv = { {30, 20}, {60, 20}, {100, 60}, {50, 100}, {35, 80} };
    PolygonShape ps(psv);
    
    // polygon outline
    std::vector<Point2D> pov = { {30, 120}, {60, 120}, {100, 160}, {50, 200}, {35, 180} };
    PolygonShape po(pov);

    // circle shape
    CircleShape cs({ 175, 75 }, 50);
    cs.setFillColor(sf::Color::Blue);

    // circle outline
    CircleShape co({ 300, 75 }, 50);
    co.setOutlineColor(sf::Color::Blue);

    // triangle shape
    TriangleShape ts({ 300, 75 }, 50);
    ts.setFillColor(sf::Color::Red);

    // triangle outline
    TriangleShape to({ 200, 150 }, { 250, 300 }, { 300, 250 });
    to.setOutlineColor(sf::Color::Red);

    // rectangle shape
    RectangleShape rs({450, 75}, 100, 50);
    rs.setFillColor(sf::Color::Cyan);

    // rectangle outline
    RectangleShape ro({ 400, 150 }, { 500, 300 });
    ro.setOutlineColor(sf::Color::Cyan);

    // square shape
    SquareShape ss({ 600, 75 }, 100);
    ss.setFillColor(sf::Color::Yellow);

    // square outline
    SquareShape so({ 600, 250 }, 100);
    so.setOutlineColor(sf::Color::Yellow);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // Отображение фигур
        ps.drawShape(window);
        po.drawOutline(window);

        cs.drawShape(window);
        co.drawOutline(window);

        ts.drawShape(window);
        to.drawOutline(window);

        rs.drawShape(window);
        ro.drawOutline(window);

        ss.drawShape(window);
        so.drawOutline(window);
        
        window.display();
    }

    return 0;
}
