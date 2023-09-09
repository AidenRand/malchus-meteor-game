#include "player.hpp"
#include <SFML/Graphics.hpp>

Player::Player(int player_width, int player_height, int player_x, int player_y)
{
	player.setSize(sf::Vector2f(player_width, player_height));
	player.setPosition(sf::Vector2f(player_x, player_y));
	player.setOrigin(sf::Vector2f(player_width / 2, player_height / 2));
}

void Player::drawTo(sf::RenderWindow& window)
{
	window.draw(player);
}

void Player::rotatePlayer(sf::Keyboard::Key rotate_left_key, sf::Keyboard::Key rotate_right_key, int rotation_angle, float& dt)
{
	if (sf::Keyboard::isKeyPressed(rotate_left_key))
	{
		player.rotate(-rotation_angle * dt);
	}
	else if (sf::Keyboard::isKeyPressed(rotate_right_key))
	{
		player.rotate(rotation_angle * dt);
	}
}

void Player::movePlayer(sf::Keyboard::Key move_up_key, float player_speed, float& dt)
{
	float player_angle = player.getRotation() * (M_PI / 180);

	// Move player in direction of key pressed
	if (sf::Keyboard::isKeyPressed(move_up_key))
	{
		while (velocity.y <= 10.0f)
		{
			velocity.x += player_speed;
			velocity.y += player_speed;
		}

		velocity = 0.3f * velocity;
		direction.x += velocity.x * cos(player_angle);
		direction.y += velocity.y * sin(player_angle);
	}
	else
	{
		if (velocity.y <= 0.5f)
		{
			velocity.y = 0;
		}
		if (velocity.x <= 0.5f)
		{
			velocity.x = 0;
		}
	}

	player.move(direction * dt);
}