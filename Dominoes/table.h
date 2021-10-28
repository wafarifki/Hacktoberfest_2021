#ifndef TABLE_H
#define TABLE_H

#include "tile.h"

typedef struct
{
	int n_tiles;
	t_tile f[NUM_TILES_DOMINO];
} t_table;

void initialize_table(t_table *p_m);
void print_table(t_table m, int dim);

void play_from_right(t_table *p_m, t_tile f);
void play_from_left(t_table *p_m, t_tile f);

int table_leftmost(t_table m);
int table_rightmost(t_table m);

#endif // TABLE_H
