#include "game.h"

#define TRUE 1
#define FALSE 0

int main()
{
	int end;
	t_game game;
	initialize_game(&game);
	make_play(&game);
	end = FALSE;
	while (end == FALSE) // Enters the loop every time there are moves to play.
	{
		print_game_state(game);
		make_play(&game);
		end = has_the_game_ended(game);
	}

	print_final_game_state(game);
}
