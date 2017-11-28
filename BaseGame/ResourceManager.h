#pragma once
#include "Header.h"

class ResourceManager
{
public:
	ResourceManager();
	~ResourceManager();
	sf::Texture & getTexture(const sf::String & filename);
private:
	sf::Texture ** textures_;
	int nTextures_;
	void addTexture(sf::Texture * pTexture);
};

