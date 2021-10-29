#ifndef STACK_H
#define STACK_H

#include "tile.h"

typedef struct
{
	int n_tiles;
	t_tile f[NUM_TILES_DOMINO];
} t_stack;

void initialize_stack(t_stack *pi);
void print_stack(t_stack pi, int visible);
t_tile pick_from_stack(t_stack *pi);
int is_stack_empty(t_stack pi);

#endif // STACK_H
