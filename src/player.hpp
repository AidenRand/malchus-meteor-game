#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
public:
	Player(int player_width, int player_height, int player_x, int player_y);
	void drawTo(sf::RenderWindow& window);
	void movePlayer(sf::Keyboard::Key move_up_key, sf::Keyboard::Key move_down_key, sf::Keyboard::Key move_left_key, sf::Keyboard::Key move_right_key);

private:
	sf::RectangleShape player;
	sf::Vector2f position;
};

#endif