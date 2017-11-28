#include "Background.h"
#include "ResourceManager.h"
#include "Entity.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML works!",
		sf::Style::Default);
	ResourceManager resourceManager;
	Background background(resourceManager.getTexture("back1.jpg"));
	Entity butterfly(resourceManager.getTexture("bf1.png"));
	butterfly.setMoveStep(10);
	butterfly.setPosition(400, 400);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (event.type == sf::Event::KeyPressed)
			{
				switch (event.key.code)
				{
				case sf::Keyboard::Left:
					butterfly.move(Direction::Left);
					break;
				case sf::Keyboard::Right:
					butterfly.move(Direction::Right);
					break;
				case sf::Keyboard::Up:
					butterfly.move(Direction::Up);
					break;
				case sf::Keyboard::Down:
					butterfly.move(Direction::Down);
					break;
				}
			}
		}

		window.clear();
		background.draw(window);
		butterfly.draw(window);
		window.display();
	}

	return 0;
}