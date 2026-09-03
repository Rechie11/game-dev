#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "RPG Game");

    sf::CircleShape shape(30.0f);
    shape.setFillColor(sf::Color::White);
    shape.setPosition(sf::Vector2f(400, 400));
	shape.setOutlineThickness(20.f);
	shape.setOutlineColor(sf::Color::Black);

    sf::CircleShape shape2(30.0f);
	shape2.setFillColor(sf::Color::White);
    shape2.setPosition(sf::Vector2f(200, 400));
    shape2.setOutlineThickness(20.f);
    shape2.setOutlineColor(sf::Color::Black);


	sf::ConvexShape shape3;
	shape3.setFillColor(sf::Color::Black);
    shape3.setPointCount(8);
    shape3.setPoint(0,{150.f, 150.f});
    shape3.setPoint(1,{250.f, 150.f});
    shape3.setPoint(2,{250.f, 100.f });
    shape3.setPoint(3,{300.f, 100.f});
    shape3.setPoint(4,{300.f, 150.f});
    shape3.setPoint(5,{400.f, 150.f});
    shape3.setPoint(6,{400.f, 200.f });
    shape3.setPoint(7,{150.f, 200.f });
    


    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::White);

        window.draw(shape);

        window.draw(shape2);

		window.draw(shape3);
        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }
}