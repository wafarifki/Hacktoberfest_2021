#include <stdio.h>
#include "random.h"
#include "tile.h"
#define NUM_TILES_DOMINO 28
#define FALSE 0
#define TRUE 1

typedef struct
{
	int n_tiles;
	t_tile f[NUM_TILES_DOMINO];
} t_stack;

void print_stack(t_stack pi, int visible);
void initialize_stack(t_stack *pi);
int is_stack_empty(t_stack pi);
t_tile pick_from_stack(t_stack *pi);

void initialize_stack(t_stack *pi)
{
	int i = 0, j, k;

	pi->n_tiles = NUM_TILES_DOMINO; // At the start all the tiles belong to the stack.
	for (j = 0; j < 7; j++)
		for (k = j; k < 7; k++)
		{
			initialize_tile(&pi->f[i], j, k); // Initialize the 28 tiles.
			i++;
		}
}

void print_stack(t_stack pi, int visible)
{
	int i;

	if (visible == TRUE)
	{ // Omniscience on.
		printf("Pila:\t");
		for (i = 0; i < pi.n_tiles; i++)
			print_tile(pi.f[i], visible);
	}

	else
	{ // Omnisciencia off.
		printf("Pila:\t");
		for (i = 0; i < pi.n_tiles; i++)
			printf("?:?|");
	}
	if (pi.n_tiles == 0)
		printf("La pila esta vacia");
}

int is_stack_empty(t_stack pi)
{
	if (pi.n_tiles == 0)
		return (TRUE);

	else
		return (FALSE);
}

t_tile pick_from_stack(t_stack *pi)
{
	int i, pos;
	t_stack aux;
	pos = random_number(pi->n_tiles); // Picks a random tile.
	aux.f[pos] = pi->f[pos];
	for (i = pos; i < (pi->n_tiles - 1); i++)
	{ // Deletes the picked tile from the stack.
		pi->f[i] = pi->f[i + 1];
	}
	pi->n_tiles--;
	return (aux.f[pos]); // returns the picked tile.
}
