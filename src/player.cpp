#include "player.hpp"
#include <SFML/Graphics.hpp>

Player::Player(int player_width, int player_height, int player_x, int player_y)
{
	player.setSize(sf::Vector2f(player_width, player_height));
	player.setPosition(sf::Vector2f(player_x, player_y));
}

void Player::drawTo(sf::RenderWindow& window)
{
	window.draw(player);
}
