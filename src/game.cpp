#include "game.hpp"
#include "player.hpp"

void game(sf::RenderWindow& window, float screen_width, float screen_height)
{
	// Player variables
	int player_width = 50;
	int player_height = 50;
	int player_x = (screen_width / 2) - player_width;
	int player_y = (screen_height / 2) - player_height;
	sf::Keyboard::Key move_up_key = sf::Keyboard::W;
	sf::Keyboard::Key move_down_key = sf::Keyboard::S;
	sf::Keyboard::Key move_left_key = sf::Keyboard::A;
	sf::Keyboard::Key move_right_key = sf::Keyboard::D;

	Player player(player_width, player_height, player_x, player_y);

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear();

		player.drawTo(window);
		player.movePlayer(move_up_key, move_down_key, move_left_key, move_right_key);

		window.display();
	}
}