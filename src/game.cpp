#include "game.hpp"
#include "player.hpp"

void game(sf::RenderWindow& window, float screen_width, float screen_height)
{
	// Player variables
	int player_width = 50;
	int player_height = 50;
	float player_speed = 1.0f;
	int rotation_angle = 180;
	int player_x = (screen_width / 2) - player_width;
	int player_y = (screen_height / 2) - player_height;
	sf::Keyboard::Key move_up_key = sf::Keyboard::W;
	sf::Keyboard::Key rotate_left_key = sf::Keyboard::A;
	sf::Keyboard::Key rotate_right_key = sf::Keyboard::D;
	Player player(player_width, player_height, player_x, player_y);

	float dt;
	sf::Clock clock;

	while (window.isOpen())
	{
		sf::Event event;
		dt = clock.restart().asSeconds();

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear();

		player.drawTo(window);
		player.rotatePlayer(rotate_left_key, rotate_right_key, rotation_angle, dt);
		player.movePlayer(move_up_key, player_speed, dt);

		window.display();
	}
}