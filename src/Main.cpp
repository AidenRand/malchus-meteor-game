#include <SFML/Graphics.hpp>
#include "game.hpp"

int main()
{
	float screen_width = 960;
	float screen_height = 540;
	sf::RenderWindow window(sf::VideoMode(screen_width, screen_height), "Dawn of Matti");
	window.setFramerateLimit(60);

	game(window);
}