#define MOVE_H

#include <stdio.h>
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
	int count_dobles, dobleleft, dobleright;

} t_tiradas;

void print_move(t_tirada t, t_player j)
{ // Always visible independent of omniscience
	int aux;
	aux = t.n_tile;
	if (j.type == T_ROBOT)
		printf("Move:  %c|%d:%d|\n\n", t.corner, j.f[aux].num1, j.f[aux].num2);
}

void print_moves(t_tiradas ts, t_player j, int visible)
{
	int i;

	if ((visible == TRUE && j.type == T_ROBOT) || j.type == T_HUMAN)
	{ // Visible if omniscience is active or the player is human
		printf("Possible moves: ");
		if (ts.n_moves > 0)
		{ // If the player can move
			for (i = 0; i < ts.n_moves; i++)
			{
				printf("%d(%c%d:%d) ", i, ts.t[i].corner, j.f[ts.t[i].n_tile].num1, j.f[ts.t[i].n_tile].num2);
			}

			if ((ts.count_dobles > 1) && (j.f[ts.t[ts.dobleleft].n_tile].num1 != j.f[ts.t[ts.dobleright].n_tile].num2))
			{
				i = ts.n_moves;
				printf("%d(%c%d:%d|%c%d:%d) ", i, ts.t[ts.dobleleft].corner, j.f[ts.t[ts.dobleleft].n_tile].num1, j.f[ts.t[ts.dobleleft].n_tile].num2, ts.t[ts.dobleright].corner, j.f[ts.t[ts.dobleright].n_tile].num1, j.f[ts.t[ts.dobleright].n_tile].num2);
			}
			printf("\n");
		}
		else
			printf("There are no possible movements!\n"); // If the player cannot move
	}
}

t_tiradas calculate_possible_moves(t_player j, t_table m)
{
	t_tiradas ts;
	int izq, der, i, k = 0, doble;
	izq = table_leftmost(m);  // Gets the leftmost tile on the table
	der = table_rightmost(m); // Gets the rightmost tile on the table
	ts.count_dobles = 0;
	for (i = 0; i < j.n_tiles; i++)
	{
		doble = 0;
		if (j.f[i].num1 == j.f[i].num2)
			doble = TRUE; // Check if it is a double

		if (j.f[i].num2 == izq)
		{ // Move from the left without rotating
			if (doble == TRUE)
			{
				ts.count_dobles++;
				ts.dobleleft = k;
			}
			ts.t[k].n_tile = i;
			ts.t[k].corner = 'i';
			ts.t[k].rotated = 0;
			k++;
		}
		if (j.f[i].num1 == izq)
		{ // Move from the left rotating
			if (doble == FALSE)
			{
				ts.t[k].n_tile = i;
				ts.t[k].corner = 'i';
				ts.t[k].rotated = 1;
				k++;
			}
		}
		if (j.f[i].num1 == der)
		{ // Move from the right without rotating
			if (doble == TRUE)
			{
				ts.count_dobles++;
				ts.dobleright = k;
			}
			ts.t[k].n_tile = i;
			ts.t[k].corner = 'd';
			ts.t[k].rotated = 0;
			k++;
		}
		if (j.f[i].num2 == der)
		{ // Move from the right rotating
			if (doble == FALSE)
			{
				ts.t[k].n_tile = i;
				ts.t[k].corner = 'd';
				ts.t[k].rotated = 1;
				k++;
			}
		}

		ts.n_moves = k; // Number of movements
	}

	return (ts);
}
