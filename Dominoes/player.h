#ifndef PLAYER_H
#define PLAYER_H

#include "tile.h"

#define MIN_PLAYERS 2
#define MAX_PLAYERS 4

#define T_HUMAN 1
#define T_ROBOT 2

typedef struct
{
	int n_tiles;
	t_tile f[NUM_TILES_DOMINO]; // Tiles the player owns.
	int type;
	int weight;
} t_player;

typedef struct
{
	int n_players;
	int a_human; // TRUE or FALSE
	int turn;
	t_player j[MAX_PLAYERS]; // Each player in players.
} t_players;

void print_player(t_player j, int visible);
void print_players(t_players js, int visible);
void who_has_higher_doble(t_players js, int *p_nj, int *p_nf);
void skip_turn(t_players *p_js);
void print_turn(t_players _js);

#endif // PLAYER_H
