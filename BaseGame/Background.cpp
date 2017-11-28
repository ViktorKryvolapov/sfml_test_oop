#include "Background.h"

Background::Background(sf::Texture & texture)
{
	sprite_.setTexture(texture);
}

void Background::draw(sf::RenderWindow & renderWindow)
{
	renderWindow.draw(sprite_);
}