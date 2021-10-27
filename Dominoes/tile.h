#ifndef tile_H
#define tile_H

#define FALSE 0
#define TRUE 1

#define NUM_TILES_DOMINO 28

typedef struct
{
    int num1, num2;
} t_tile;

void initialize_tile(t_tile *p_f, int a, int b);
void turn_tile(t_tile *p_f);
void print_tile(t_tile f, int visible);

#endif // tile_H
