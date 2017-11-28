#pragma once
#include "Header.h"

class Entity
{
public:
	Entity(sf::Texture & texture);
	void draw(sf::RenderWindow & renderWindow);
	void move(Direction direction);
	void setMoveStep(int value) { moveStep_ = value; }
	int getMoveSTep() { return moveStep_; }
	sf::Vector2f getPosition() { return sprite_.getPosition(); }
	void setPosition(int x, int y) { sprite_.setPosition(x, y); }
private:
	sf::Sprite sprite_;
	int moveStep_;
};