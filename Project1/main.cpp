#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using namespace sf;
int main()
{
    /*sf::RenderWindow window(sf::VideoMode(640, 480, 32), "Gravity");
    const float gravity = 0.002;
    int groundHeight = 480;
    sf::Vector2f velocity(sf::Vector2f(0, 0));

    sf::RectangleShape rect(sf::Vector2f(20, 20));
    rect.setPosition(320, 240);
    rect.setFillColor(sf::Color::Blue);

    float moveSpeed = 2.0f, jumpSpeed = 2.0f;

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
                                //Movement starts here                                               

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            velocity.x = moveSpeed;                              //Movement to right
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            velocity.x = -moveSpeed;                            //Movement to left
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            velocity.y = jumpSpeed;                                 //Movement down
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))       
        {
            velocity.y = -jumpSpeed;                //Movement up
        }
                                //Movement ends here
        
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
    }*/
    
    const unsigned WINDOW_WIDTH = 800; //Width
    const unsigned WINDOW_HEIGHT = 600; //Height
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Gravity");
    window.setFramerateLimit(60);

    float dt;
    Clock dt_clock;

    const float gridSize = 25.f;

    //Player
    const float movementSpeed = 600.f;
    Vector2f velocity;
    RectangleShape player;
    player.setFillColor(Color::Blue);
    player.setSize(Vector2f(gridSize, gridSize));


    while (window.isOpen())
    {

        dt = dt_clock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }


        //Player movement
        velocity.y = 5.f;
        velocity.x = 0.f;

        if (Keyboard::isKeyPressed(Keyboard::Up))
        {
            velocity.y += -movementSpeed * dt;
        }
        if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            velocity.y += movementSpeed * dt;
        }
        if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            velocity.x += -movementSpeed * dt;
        }
        if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            velocity.x += movementSpeed * dt;
        }
        if (Keyboard::isKeyPressed(Keyboard::W))
        {
            velocity.y += -movementSpeed * dt;
        }
        if (Keyboard::isKeyPressed(Keyboard::S))
        {
            velocity.y += movementSpeed * dt;
        }
        if (Keyboard::isKeyPressed(Keyboard::A))
        {
            velocity.x += -movementSpeed * dt;
        }
        if (Keyboard::isKeyPressed(Keyboard::D))
        {
            velocity.x += movementSpeed * dt;
        }

        player.move(velocity);


        //Collision screen

        //Left collision
        if (player.getPosition().x < 0.f)
        {
            player.setPosition(0.f, player.getPosition().y);
        }
        //Top collision
        if (player.getPosition().y < 0.f)
        {
            player.setPosition(player.getPosition().x, 0.f);
        }
        //Right collision
        if (player.getPosition().x + player.getGlobalBounds().width > WINDOW_WIDTH)
        {
            player.setPosition(WINDOW_WIDTH - player.getGlobalBounds().width, player.getPosition().y);
        }
        //Bottom collision
        if (player.getPosition().y + player.getGlobalBounds().height > WINDOW_HEIGHT)
        {
            player.setPosition(player.getPosition().x, WINDOW_HEIGHT - player.getGlobalBounds().height);
        }

        //Render
        window.clear();

        window.draw(player);

        window.display();
    }
    return 0;
}