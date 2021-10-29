#include <stdio.h>

typedef struct
{
    int num1, num2;
} t_tile;

void initialize_tile(t_tile *tile, int i, int j);
void print_tile(t_tile f, int visible);
void turn_tile(t_tile *tile);
int doble();

void print_tile(t_tile tile, int visible)
{
    printf("%d:%d|", tile.num1, tile.num2);
}

void turn_tile(t_tile *tile)
{ // Here num1 is swapped for num2 and vice versa.
    int aux, i;

    aux = tile->num1;
    tile->num1 = tile->num2;
    tile->num2 = aux;
}

int doble()
{
    t_tile tile[28];
    int i;

    if (tile[i].num1 == tile[i].num2) // If it is a doble, then num1 == num 2.
        return (1);
    else
        return (0);
}

void initialize_tile(t_tile *tile, int i, int j)
{
    tile->num2 = j;
    tile->num1 = i;
}
