#include "tile.h"
#include <stdio.h>

#define MIN_PLAYERS 2
#define MAX_PLAYERS 4

#define T_HUMAN 1
#define T_ROBOT 2

#define TRUE 1
#define FALSE 0

typedef struct
{
	int n_tiles;
	t_tile f[NUM_TILES_DOMINO]; // Tiles owned.
	int type;
	int weight;
} t_player;

typedef struct
{
	int n_players;
	int a_human; // TRUE or FALSE.
	int turn;
	t_player j[MAX_PLAYERS]; // Each player in players.
} t_players;

void print_player(t_player j, int visible);
void print_players(t_players js, int visible);
void who_has_higher_doble(t_players js, int *p_nj, int *p_nf);
void skip_turn(t_players *p_js);
void print_turn(t_players _js);

void print_player(t_player j, int visible)
{
	int i;
	t_tile f;

	if (j.type == T_ROBOT)
	{ // Bot.
		if (visible == FALSE)
		{ // Omniscience off.
			for (i = 0; i < j.n_tiles; i++)
			{
				printf("?:?|");
			}
		}
		else
		{ // Omniscience on.
			for (i = 0; i < j.n_tiles; i++)
			{
				printf("%d:%d|", j.f[i].num1, j.f[i].num2);
			}
		}
	}
	else
	{ // Human.
		for (i = 0; i < j.n_tiles; i++)
		{
			printf("%d:%d|", j.f[i].num1, j.f[i].num2);
		}
	}
}

void print_players(t_players js, int visible)
{
	int i;
	// We do it for every player.
	for (i = 0; i < js.n_players; i++)
	{
		printf("J%d 	", i);
		print_player(js.j[i], visible);
		if (js.j[i].type == T_ROBOT)
		{ // Robot.
			printf("Robot\n");
		}
		else
		{ // Human.
			printf("Humano\n");
		}
	}
}

void who_has_higher_doble(t_players js, int *p_nj, int *p_nf)
{
	int i, j, max = 0, encontrado = 0;

	for (i = 0; i < js.n_players; i++)
	{ // Check which player has the highst double.
		for (j = 0; j < js.j[i].n_tiles; j++)
		{
			if (js.j[i].f[j].num1 == js.j[i].f[j].num2 && js.j[i].f[j].num1 > max)
			{
				max = js.j[i].f[j].num1;
				*p_nj = i;
				*p_nf = j;
				encontrado = 1;
			}
		}
	}
	if (encontrado == 0)
	{
		*p_nj = 0;
		*p_nf = 0;
	}
}

void skip_turn(t_players *p_js)
{
	p_js->turn = ((p_js->turn) + 1) % (p_js->n_players); // Adds 1 to turns unless its maximum, in this case returns to the initial 0.
}

void print_turn(t_players js)
{
	printf("turn: %d\n", js.turn);
}
