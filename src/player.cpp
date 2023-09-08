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

void Player::movePlayer(sf::Keyboard::Key move_up_key, sf::Keyboard::Key move_down_key, sf::Keyboard::Key move_left_key, sf::Keyboard::Key move_right_key)
{
	position.x = 0;
	position.y = 0;

	// Move player in direction of key pressed
	if (sf::Keyboard::isKeyPressed(move_up_key))
	{
		position.y -= 10;
	}
	else if (sf::Keyboard::isKeyPressed(move_down_key))
	{
		position.y += 10;
	}

	if (sf::Keyboard::isKeyPressed(move_left_key))
	{
		position.x -= 10;
	}
	else if (sf::Keyboard::isKeyPressed(move_right_key))
	{
		position.x += 10;
	}

	player.move(position);
}