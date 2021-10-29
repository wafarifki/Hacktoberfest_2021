#include <stdio.h>
#include <string.h>
#include "player.h"
#include "table.h"
#include "stack.h"
#include "move.h"
#include "questions.h"
#include "sleep.h"
#include "random.h"

#define TRUE 1
#define FALSE 0
typedef struct
{
    t_players js;
    t_table m;   // Tiles played.
    t_stack pi;  // Tiles not played and not belonging to any player.
    int visible; // Stack of tiles and visible tiles from a bot.
    int dim;     // See table in 2D (versus 1D).
    // visible and table_2d can be TRUE o FALSE.
    int num_passes; // Consecutive times a player passes turn.
    // if num_passes == n_players the game ends.
} t_game;

void initialize_game(t_game *p_pa);
void print_game_state(t_game pa);
void make_play(t_game *p_pa);
int has_the_game_ended(t_game pa);

void initialize_game(t_game *p_pa)
{
    int i, j, p, k, nj, nf;

    char s1[50] = "Number of players?", s2[50] = "Will there be a human player?", s3[50] = "Do you wish to activate omniscience?", s4[50] = "Do you wish to see the table in 2D?";

    p_pa->num_passes = 0;

    // Ask the starting questions.
    p_pa->js.n_players = ask_n_in_range(&s1[0], 2, 4);
    p_pa->js.a_human = ask_yes_or_no(&s2[0]);
    p_pa->visible = ask_yes_or_no(&s3[0]);
    p_pa->dim = ask_yes_or_no(&s4[0]);

    printf("\n");

    initialize_stack(&(p_pa->pi));

    for (i = 0; i < p_pa->js.n_players; i++) // Distribute tiles randomly
        for (j = 0; j < 7; j++)
            p_pa->js.j[i].f[j] = pick_from_stack(&(p_pa->pi));

    if (p_pa->js.a_human == TRUE)
    { // Initialize players.
        p_pa->js.j[0].type = T_HUMAN;
        p_pa->js.j[0].n_tiles = 7;
        for (i = 1; i < p_pa->js.n_players; i++)
        {
            p_pa->js.j[i].type = T_ROBOT;
            p_pa->js.j[i].n_tiles = 7;
        }
    }
    else
    {
        for (i = 0; i < p_pa->js.n_players; i++)
        {
            p_pa->js.j[i].type = T_ROBOT;
            p_pa->js.j[i].n_tiles = 7;
        }
    }
    who_has_higher_doble(p_pa->js, &nj, &nf); // Which player starts the game.

    initialize_table(&(p_pa->m));
    print_stack(p_pa->pi, p_pa->visible);

    play_from_left(&(p_pa->m), p_pa->js.j[nj].f[nf]);
    print_table(p_pa->m, p_pa->dim);
    printf("\n");

    for (i = nf; i < p_pa->js.j[nj].n_tiles; i++)
        p_pa->js.j[nj].f[i] = p_pa->js.j[nj].f[i + 1];
    p_pa->js.j[nj].n_tiles--;

    p_pa->js.turn = nj;
    print_players(p_pa->js, p_pa->visible);
    skip_turn(&(p_pa->js));
    print_turn(p_pa->js);
}

void print_game_state(t_game pa)
{
    int i;
    print_stack(pa.pi, pa.visible);
    print_table(pa.m, pa.dim);
    printf("\n");
    print_players(pa.js, pa.visible);
    print_turn(pa.js);
}
void print_final_game_state(t_game pa)
{ // Prints the game at the time of the ending move.
    int i;
    sleep_a_bit(10);
    printf("\tFINAL STATE OF THE GAME:\n\n");
    pa.visible = TRUE;

    print_stack(pa.pi, pa.visible);
    print_table(pa.m, pa.dim);
    printf("\n");
    print_players(pa.js, pa.visible);
    printf("\n");
}

void make_play(t_game *p_pa)
{
    int tirada = -1, i, v;
    t_tiradas ts;

    ts = calculate_possible_moves(p_pa->js.j[p_pa->js.turn], p_pa->m); // We calculate the possible moves.

    while (ts.n_moves == 0 && p_pa->pi.n_tiles != 0)
    { // If the player cannot move, he has to pick a tile from the stack.
        p_pa->js.j[p_pa->js.turn].f[p_pa->js.j[p_pa->js.turn].n_tiles] = pick_from_stack(&(p_pa->pi));

        if (p_pa->visible == TRUE)
        {                                                  // Omniscience active.
            if (p_pa->js.j[p_pa->js.turn].type == T_HUMAN) // If it is human, the tile is shown.
                printf("You take tiles from the stack! Picked a %d:%d ;P\n", p_pa->js.j[p_pa->js.turn].f[p_pa->js.j[p_pa->js.turn].n_tiles].num1, p_pa->js.j[p_pa->js.turn].f[p_pa->js.j[p_pa->js.turn].n_tiles].num2);
            else
                printf("He takes tiles from the stack! Picked a %d:%d ;)\n", p_pa->js.j[p_pa->js.turn].f[p_pa->js.j[p_pa->js.turn].n_tiles].num1, p_pa->js.j[p_pa->js.turn].f[p_pa->js.j[p_pa->js.turn].n_tiles].num2); // Si es robot muestra la tile
            p_pa->js.j[p_pa->js.turn].n_tiles++;
            ts = calculate_possible_moves(p_pa->js.j[p_pa->js.turn], p_pa->m);
        }
        if (p_pa->visible == FALSE)
        {
            if (p_pa->js.j[p_pa->js.turn].type == T_HUMAN) // If it is human, the tile is shown.
                printf("You take tiles from the stack! Picked a %d:%d ;P\n", p_pa->js.j[p_pa->js.turn].f[p_pa->js.j[p_pa->js.turn].n_tiles].num1, p_pa->js.j[p_pa->js.turn].f[p_pa->js.j[p_pa->js.turn].n_tiles].num2);
            else
                printf("He takes tiles from the stack! ;)\n"); // If it is a bot, the tile is not shown.
            p_pa->js.j[p_pa->js.turn].n_tiles++;
            ts = calculate_possible_moves(p_pa->js.j[p_pa->js.turn], p_pa->m);
        }
    }

    print_moves(ts, p_pa->js.j[p_pa->js.turn]);

    if (p_pa->js.j[p_pa->js.turn].type == T_HUMAN)
    { // Human plays.
        if (ts.n_moves == 0 && p_pa->pi.n_tiles == 0)
        { // Human cannot move and passes turn.
            printf("You pass turn! :(\n\n");
            p_pa->num_passes++;
        }

        if (ts.n_moves > 0)
        {
            p_pa->num_passes = 0;
            if (ts.count_dobles > 1)
                v = ts.n_moves; // If dobledobla, counts that move twice.
            else
                v = ts.n_moves - 1;
            printf("¿Which move will you do [0-%d]?: ", v);
            scanf("%d", &tirada);
            while (tirada < 0 || tirada > v)
            {
                printf("¡%d is not an option!\n", tirada);
                printf("¿Which move will you do [0-%d]?: ", v);
                scanf("%d", &tirada);
            }
            printf("\n");
            if ((ts.count_dobles > 1) && (tirada == ts.n_moves))
            {                                                                                        // Dobledobla is when the counter has 2 moves with doubles and the player picks it.
                play_from_right(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[ts.dobleleft].n_tile]); // Double from the right.
                play_from_left(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[ts.dobleright].n_tile]); // Double from the left.
                for (i = ts.t[ts.dobleright].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++) // Deletes a double from the tiles vector of the player.
                    p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                p_pa->js.j[p_pa->js.turn].n_tiles--;
                if (ts.t[ts.dobleleft].n_tile > ts.t[ts.dobleright].n_tile)
                { // Deletes the other double from the tiles vector depending where it is found respecting the first one.
                    for (i = ts.t[ts.dobleleft - 1].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++)
                        p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                    p_pa->js.j[p_pa->js.turn].n_tiles--;
                }
                else
                {
                    for (i = ts.t[ts.dobleleft - 1].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++)
                        p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                    p_pa->js.j[p_pa->js.turn].n_tiles--;
                }
            }
            if (tirada != ts.n_moves)
            {                                     // If no dobledobla
                if (ts.t[tirada].rotated == TRUE) // Rotates the tile if necessary.
                    turn_tile(&(p_pa->js.j[p_pa->js.turn].f[ts.t[tirada].n_tile]));
                if (ts.t[tirada].corner == 'd')
                {
                    play_from_right(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[tirada].n_tile]); // Moves from the right.
                }
                else
                {
                    play_from_left(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[tirada].n_tile]); // Moves from the left.
                }
                for (i = ts.t[tirada].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++)
                    p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                p_pa->js.j[p_pa->js.turn].n_tiles--;
            }
        }
    }
    else // A bot plays
    {
        if (ts.n_moves == 0 && p_pa->pi.n_tiles == 0)
        {
            printf("Pasa! :)\n\n");
            p_pa->num_passes++;
        }
        // Bot cannot move and passes turn.

        if (ts.n_moves > 0)
        {
            p_pa->num_passes = 0;
            if (ts.count_dobles > 1)
                ts.n_moves++;                   // Dobledobla counts as an extra move.
            tirada = random_number(ts.n_moves); // Picks a random move.
            if ((ts.count_dobles > 1) && (tirada == ts.n_moves))
            {                                                                                        // Dobledobla is when the counter has 2 moves with doubles and the player picks it.
                play_from_right(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[ts.dobleleft].n_tile]); // Double from the right.
                play_from_left(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[ts.dobleright].n_tile]); // Double from the left.
                for (i = ts.t[ts.dobleright].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++) // Deletes a double from the tiles vector of the player.
                    p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                p_pa->js.j[p_pa->js.turn].n_tiles--;
                if (ts.t[ts.dobleleft].n_tile > ts.t[ts.dobleright].n_tile)
                { // Deletes the other double from the tiles vector depending where it is found respecting the first one.
                    for (i = ts.t[ts.dobleleft - 1].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++)
                        p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                    p_pa->js.j[p_pa->js.turn].n_tiles--;
                }
                else
                {
                    for (i = ts.t[ts.dobleleft - 1].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++)
                        p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                    p_pa->js.j[p_pa->js.turn].n_tiles--;
                }
            }
            else
            {
                if (ts.t[tirada].rotated == TRUE) // Rotates the tile if necessary.
                    turn_tile(&(p_pa->js.j[p_pa->js.turn].f[ts.t[tirada].n_tile]));
                print_move(ts.t[tirada], p_pa->js.j[p_pa->js.turn]);
                if (ts.t[tirada].corner == 'd')
                {
                    play_from_right(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[tirada].n_tile]); // Moves from the right.
                }
                else
                {
                    play_from_left(&(p_pa->m), p_pa->js.j[p_pa->js.turn].f[ts.t[tirada].n_tile]); // Moves from the left.
                }
                for (i = ts.t[tirada].n_tile; i < p_pa->js.j[p_pa->js.turn].n_tiles - 1; i++)
                    p_pa->js.j[p_pa->js.turn].f[i] = p_pa->js.j[p_pa->js.turn].f[i + 1];
                p_pa->js.j[p_pa->js.turn].n_tiles--;
            }
            sleep_a_bit(4);
        }
    }

    skip_turn(&(p_pa->js));
}

int has_the_game_ended(t_game pa)
{
    int aux = FALSE, minweight = 200, i, j, jugminweight, empate = FALSE;

    if (pa.js.turn > 0) // As has_the_game_ended is invoked after skip_turn, pa.js.turn must be one less number
        pa.js.turn = pa.js.turn - 1;

    else // Cannot be -1, goes back to n_players-1 (maximum)
        pa.js.turn = pa.js.n_players - 1;

    if (pa.js.j[pa.js.turn].n_tiles == 0)
    { // Winning condition.
        if (pa.js.j[pa.js.turn].type == T_HUMAN)
        {
            printf("===>>> HAS GANADO! :) <<<===\n\n");
        }
        else
        {
            printf("===>>> HA GANADO EL J%d! :/ <<<===\n\n", pa.js.turn);
        }
        aux = TRUE;
        return (aux);
    }
    else if (pa.num_passes >= pa.js.n_players)
    {
        printf("===>>> JUEGO BLOQUEADO <<<===\n\n");
        aux = TRUE;
        for (i = 0; i < pa.js.n_players; i++)
        { // Calculates the weight of the tiles.
            pa.js.j[i].weight = 0;
            for (j = 0; j < pa.js.j[i].n_tiles; j++)
            {
                pa.js.j[i].weight = pa.js.j[i].weight + pa.js.j[i].f[j].num1 + pa.js.j[i].f[j].num2;
            }
            printf("weight J%d=%d\n", i, pa.js.j[i].weight);
        }
        for (i = 0; i < pa.js.n_players; i++)
        {
            if (minweight > pa.js.j[i].weight)
            {
                minweight = pa.js.j[i].weight;
                jugminweight = i;
            }
        }
        for (i = 0; i < pa.js.n_players; i++)
        { // Draw.
            if (minweight == pa.js.j[i].weight && i != jugminweight)
            {
                empate = TRUE;
            }
        }
        if (empate == TRUE)
        {
            printf("\n===>>> TABLAS ENTRE J%d Y J%d CON MINIMO weight(%d de weight) <<<===\n\n\n", jugminweight, i, minweight);
        }
        else
        {
            printf("\n===>>> HA GANADO EL J%d POR MINIMO weight(%d de weight) <<<===\n\n\n", jugminweight, minweight);
        }
    }
    else
        return (aux);
}
