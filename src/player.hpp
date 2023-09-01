#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
public:
	Player(int player_width, int player_height, int player_x, int player_y);
	void drawTo(sf::RenderWindow& window);

private:
	sf::RectangleShape player;
};

#endif