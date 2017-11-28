#include "Entity.h"

Entity::Entity(sf::Texture & texture)
{
	sprite_.setTexture(texture);
	moveStep_ = 0;
}

void Entity::draw(sf::RenderWindow & renderWindow)
{
	renderWindow.draw(sprite_);
}

void Entity::move(Direction direction)
{
	int dx = 0, dy = 0;
	switch (direction)
	{
	case Direction::Left:
		dx = -moveStep_;
		break;
	case Direction::Right:
		dx = moveStep_;
		break;
	case Direction::Up:
		dy = -moveStep_;
		break;
	case Direction::Down:
		dy = moveStep_;
		break;
	}
	sprite_.move(dx, dy);
}