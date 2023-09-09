#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
public:
	Player(int player_width, int player_height, int player_x, int player_y);
	void drawTo(sf::RenderWindow& window);
	void rotatePlayer(sf::Keyboard::Key rotate_left_key, sf::Keyboard::Key rotate_right_key, int rotation_angle, float& dt);
	void movePlayer(sf::Keyboard::Key move_up_key, float player_speed, float& dt);

private:
	sf::RectangleShape player;
	sf::Vector2f direction;
	sf::Vector2f velocity;
};

#endif