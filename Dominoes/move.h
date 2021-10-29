#ifndef MOVE_H
#define MOVE_H

#include "tile.h"
#include "player.h"
#include "table.h"

#define MAX_MOVES_PLAYER NUM_TILES_DOMINO

typedef struct
{
	int n_tile;	 // Number of tiles in the tiles vector of the player
	char corner; // Left or right
	int rotated; // True or false
	int dobledobla;
} t_tirada;

typedef struct
{
	int n_moves;
	t_tirada t[MAX_MOVES_PLAYER];
	int count_dobles, dobleright, dobleleft;
} t_tiradas;

void print_move(t_tirada ts, t_player j);
void print_moves(t_tiradas ts, t_player j);
t_tiradas calculate_possible_moves(t_player j, t_table m);

#endif // MOVE_H
