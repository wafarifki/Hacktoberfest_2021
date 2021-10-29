#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "table.h"
#include "stack.h"
#include "move.h"

typedef struct
{
	t_players js;
	t_table m;		// Tiles played.
	t_stack pi;		// Tiles not played and not belonging to any player.
	int visible;	// Stack of tiles and visible tiles from a bot.
	int table_2d;	// See table in 2D (versus 1D).
					// visible and table_2d can be TRUE o FALSE.
	int num_passes; // Consecutive times a player passes turn.
					// if num_passes == n_players the game ends.
} t_game;

void initialize_game(t_game *p_pa);
void print_game_state(t_game pa);
void print_final_game_state(t_game pa);
void make_play(t_game *p_pa);
int has_the_game_ended(t_game pa);

#endif // GAME_H
