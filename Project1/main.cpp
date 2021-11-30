#include <SFML/Graphics.hpp>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480, 32), "Gravity");
    const float gravity = 1;
    int groundHeight = 440;
    sf::Vector2f velocity(sf::Vector2f(0, 0));

    sf::RectangleShape rect(sf::Vector2f(20, 20));
    rect.setPosition(0, 0);
    rect.setFillColor(sf::Color::Blue);

    float moveSpeed = 0.1f, jumpSpeed = 1.1f;
    while (window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch (Event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            velocity.x = moveSpeed;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            velocity.x = -moveSpeed;
        else
            velocity.x = 0;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            velocity.y = -jumpSpeed;


        if (rect.getPosition().y + rect.getSize().y < groundHeight || velocity.y < 0)
        {
            velocity.y += gravity;
        }
        else
        {
            rect.setPosition(rect.getPosition().x, groundHeight - rect.getSize().y);
            velocity.y = 0;
        }

        rect.move(velocity.x, velocity.y);


        window.clear(sf::Color(0, 240, 255));
        window.draw(rect);
        window.display();
    }
}