#include "game.hpp"
#include "player.hpp"

void game(sf::RenderWindow& window, float screen_width, float screen_height)
{
	int player_width = 50;
	int player_height = 50;
	int player_x = (screen_width / 2) - player_width;
	int player_y = (screen_height / 2) - player_height;

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

		window.display();
	}
}