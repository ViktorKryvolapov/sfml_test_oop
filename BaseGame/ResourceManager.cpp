#include "ResourceManager.h"

ResourceManager::ResourceManager()
{
	textures_ = nullptr;
	nTextures_ = 0;
}

ResourceManager::~ResourceManager()
{
	for (int i = 0; i < nTextures_; i++)
		delete textures_[i];
	delete[] textures_;
}

sf::Texture & ResourceManager::getTexture(const sf::String & filename)
{
	sf::Texture *p = new sf::Texture;
	p->loadFromFile(filename);
	addTexture(p);
	return *p;
}

void ResourceManager::addTexture(sf::Texture * pTexture)
{
	sf::Texture ** temp = new sf::Texture*[nTextures_ + 1];
	for (int i = 0; i < nTextures_; i++)
		temp[i] = textures_[i];
	temp[nTextures_] = pTexture;
	delete[] textures_;
	textures_ = temp;
	nTextures_++;
}