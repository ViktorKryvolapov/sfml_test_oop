#include <SFML/Graphics.hpp>

int main()
{
	sf::ContextSettings cs;
	cs.antialiasingLevel = 8;
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!",
		sf::Style::Default, cs);
	sf::CircleShape shape(100.f);	
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}