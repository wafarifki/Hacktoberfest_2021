#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MPLAYER 'o'
#define N 3

using namespace std;
char win3x3(char *board)
{

   if ((board[0] == 'x') && (board[1] == 'x') && (board[2] == 'x'))
      return 'x';
   if ((board[0] == 'x') && (board[3] == 'x') && (board[6] == 'x'))
      return 'x';
   if ((board[0] == 'x') && (board[4] == 'x') && (board[8] == 'x'))
      return 'x';
   if ((board[1] == 'x') && (board[4] == 'x') && (board[7] == 'x'))
      return 'x';
   if ((board[2] == 'x') && (board[4] == 'x') && (board[6] == 'x'))
      return 'x';
   if ((board[2] == 'x') && (board[5] == 'x') && (board[8] == 'x'))
      return 'x';
   if ((board[3] == 'x') && (board[4] == 'x') && (board[5] == 'x'))
      return 'x';
   if ((board[6] == 'x') && (board[7] == 'x') && (board[8] == 'x'))
      return 'x';

   if ((board[0] == 'o') && (board[1] == 'o') && (board[2] == 'o'))
      return 'o';
   if ((board[0] == 'o') && (board[3] == 'o') && (board[6] == 'o'))
      return 'o';
   if ((board[0] == 'o') && (board[4] == 'o') && (board[8] == 'o'))
      return 'o';
   if ((board[1] == 'o') && (board[4] == 'o') && (board[7] == 'o'))
      return 'o';
   if ((board[2] == 'o') && (board[4] == 'o') && (board[6] == 'o'))
      return 'o';
   if ((board[2] == 'o') && (board[5] == 'o') && (board[8] == 'o'))
      return 'o';
   if ((board[3] == 'o') && (board[4] == 'o') && (board[5] == 'o'))
      return 'o';
   if ((board[6] == 'o') && (board[7] == 'o') && (board[8] == 'o'))
      return 'o';

   return '*';
}
char win4x3(char *board)
{

   if ((board[0] == 'x') && (board[1] == 'x') && (board[2] == 'x'))
      return 'x';
   if ((board[0] == 'x') && (board[3] == 'x') && (board[6] == 'x'))
      return 'x';
   if ((board[0] == 'x') && (board[4] == 'x') && (board[8] == 'x'))
      return 'x';
   if ((board[1] == 'x') && (board[4] == 'x') && (board[7] == 'x'))
      return 'x';
   if ((board[2] == 'x') && (board[4] == 'x') && (board[6] == 'x'))
      return 'x';
   if ((board[2] == 'x') && (board[5] == 'x') && (board[8] == 'x'))
      return 'x';
   if ((board[3] == 'x') && (board[4] == 'x') && (board[5] == 'x'))
      return 'x';
   if ((board[6] == 'x') && (board[7] == 'x') && (board[8] == 'x'))
      return 'x';
   if ((board[3] == 'x') && (board[6] == 'x') && (board[9] == 'x'))
      return 'x';
   if ((board[4] == 'x') && (board[7] == 'x') && (board[10] == 'x'))
      return 'x';
   if ((board[5] == 'x') && (board[8] == 'x') && (board[11] == 'x'))
      return 'x';
   if ((board[3] == 'x') && (board[7] == 'x') && (board[11] == 'x'))
      return 'x';
   if ((board[9] == 'x') && (board[10] == 'x') && (board[11] == 'x'))
      return 'x';
   if ((board[5] == 'x') && (board[7] == 'x') && (board[9] == 'x'))
      return 'x';

   if ((board[0] == 'o') && (board[1] == 'o') && (board[2] == 'o'))
      return 'o';
   if ((board[0] == 'o') && (board[3] == 'o') && (board[6] == 'o'))
      return 'o';
   if ((board[0] == 'o') && (board[4] == 'o') && (board[8] == 'o'))
      return 'o';
   if ((board[1] == 'o') && (board[4] == 'o') && (board[7] == 'o'))
      return 'o';
   if ((board[2] == 'o') && (board[4] == 'o') && (board[6] == 'o'))
      return 'o';
   if ((board[2] == 'o') && (board[5] == 'o') && (board[8] == 'o'))
      return 'o';
   if ((board[3] == 'o') && (board[4] == 'o') && (board[5] == 'o'))
      return 'o';
   if ((board[6] == 'o') && (board[7] == 'o') && (board[8] == 'o'))
      return 'o';
   if ((board[3] == 'o') && (board[6] == 'o') && (board[9] == 'o'))
      return 'o';
   if ((board[4] == 'o') && (board[7] == 'o') && (board[10] == 'o'))
      return 'o';
   if ((board[5] == 'o') && (board[8] == 'o') && (board[11] == 'o'))
      return 'o';
   if ((board[3] == 'o') && (board[7] == 'o') && (board[11] == 'o'))
      return 'o';
   if ((board[9] == 'o') && (board[10] == 'o') && (board[11] == 'o'))
      return 'o';
   if ((board[5] == 'o') && (board[7] == 'o') && (board[9] == 'o'))
      return 'o';

   return '*';
}

char win(char *board, int M)
{
   if (M == 3)
      return win3x3(board);
   else
      return win4x3(board);
}

char turn(char player)
{
   if (player == 'o')
      return 'x';
   else
      return 'o';
}

int my_deterministic_move(char *board, char player, int free, int boardsize)
{
   int position;
   if (free == boardsize)
   {
      if (boardsize = 12)
      {
         return position = (rand() % 2 > 0) ? 4 : 7;
      }
      else
      {
         return position = 5;
      }
   }
   else
   {
      int i = 0;
      char *aux;
      int move[20];
      aux = new char[15];
      if ((board[0] == board[1]) && (board[2] == '*'))
      {
         aux[i] = board[0];
         move[i] = 2;
         i++;
      }
      if ((board[0] == board[3]) && (board[6] == '*'))
      {
         aux[i] = board[0];
         move[i] = 6;
         i++;
      }
      if ((board[1] = board[2]) && (board[0] == '*'))
      {
         aux[i] = board[1];
         move[i] = 0;
         i++;
      }
      if ((board[1] == board[4]) && (board[7] == '*'))
      {
         aux[i] = board[1];
         move[i] = 7;
         i++;
      }
      if ((board[2] == board[5]) && (board[8] == '*'))
      {
         aux[i] = board[2];
         move[i] = 8;
         i++;
      }
      if ((board[3] == board[4]) && (board[5] == '*'))
      {
         aux[i] = board[3];
         move[i] = 5;
         i++;
      }
      if ((board[3] == board[6]) && (board[9] == '*'))
      {
         aux[i] = board[3];
         move[i] = 9;
         i++;
      }
      if ((board[3] == board[6]) && (board[0] == '*'))
      {
         aux[i] = board[3];
         move[i] = 0;
         i++;
      }
      if ((board[4] == board[5]) && (board[3] == '*'))
      {
         aux[i] = board[4];
         move[i] = 3;
         i++;
      }
      if ((board[4] == board[7]) && (board[10] == '*'))
      {
         aux[i] = board[4];
         move[i] = 10;
         i++;
      }
      if ((board[4] == board[7]) && (board[1] == '*'))
      {
         aux[i] = board[4];
         move[i] = 1;
         i++;
      }
      if ((board[5] == board[8]) && (board[11] == '*'))
      {
         aux[i] = board[5];
         move[i] = 11;
         i++;
      }
      if ((board[5] == board[8]) && (board[2] == '*'))
      {
         aux[i] = board[5];
         move[i] = 2;
         i++;
      }
      if ((board[6] == board[7]) && (board[8] == '*'))
      {
         aux[i] = board[6];
         move[i] = 8;
         i++;
      }
      if ((board[6] == board[9]) && (board[3] == '*'))
      {
         aux[i] = board[6];
         move[i] = 3;
         i++;
      }
      if ((board[7] == board[8]) && (board[6] == '*'))
      {
         aux[i] = board[7];
         move[i] = 6;
         i++;
      }
      if ((board[7] == board[10]) && (board[4] == '*'))
      {
         aux[i] = board[7];
         move[i] = 4;
         i++;
      }
      if ((board[8] == board[11]) && (board[5] == '*'))
      {
         aux[i] = board[8];
         move[i] = 5;
         i++;
      }
      if ((board[9] == board[10]) && (board[11] == '*'))
      {
         aux[i] = board[9];
         move[i] = 11;
         i++;
      }
      if ((board[10] == board[11]) && (board[9] == '*'))
      {
         aux[i] = board[10];
         move[i] = 9;
         i++;
      }
      if ((board[0] == board[4]) && (board[8] == '*'))
      {
         aux[i] = board[0];
         move[i] = 8;
         i++;
      }
      if ((board[4] == board[8]) && (board[0] == '*'))
      {
         aux[i] = board[4];
         move[i] = 0;
         i++;
      }
      if ((board[3] == board[7]) && (board[11] == '*'))
      {
         aux[i] = board[3];
         move[i] = 11;
         i++;
      }
      if ((board[7] == board[11]) && (board[3] == '*'))
      {
         aux[i] = board[7];
         move[i] = 3;
         i++;
      }
      if ((board[2] == board[4]) && (board[6] == '*'))
      {
         aux[i] = board[2];
         move[i] = 6;
         i++;
      }
      if ((board[4] == board[6]) && (board[2] == '*'))
      {
         aux[i] = board[4];
         move[i] = 2;
         i++;
      }
      if ((board[5] == board[7]) && (board[9] == '*'))
      {
         aux[i] = board[5];
         move[i] = 9;
         i++;
      }
      if ((board[7] == board[9]) && (board[5] == '*'))
      {
         aux[i] = board[7];
         move[i] = 5;
         i++;
      }

      for (int a = i; a > 0; a--)
      {
         if (aux[a] == 'o')
            return move[a];
      }
      for (int b = i; b > 0; b--)
      {
         if (aux[b] == 'x')
            return move[b];
      }
      if (free)
      {
         int random_pos = rand() % free;
         for (int j = random_pos; j < boardsize; j++)
         {
            if (board[j] == '*')
               return j;
         }
      }
   }
   return -1;
}

int my_random_move(char *board, char player, int free, int boardsize)
{
   int i, j;
   int random_pos;

   if (free)
   {
      random_pos = rand() % free;
      for (i = random_pos; i < boardsize; i++)
      {
         if (board[i] == '*')
            return i;
      }
   }
   return -1;
}

void display(char *board, int M)
{
   int i;
   fprintf(stdout, "\nThe board is...\n ");
   fprintf(stdout, "\n");
   if (M == 3 && N == 3)
   {
      for (i = 0; i < 3; i++)
         fprintf(stdout, " %c  |", (board[i] == '*') ? 49 + i : board[i]);
      fprintf(stdout, "\n---------------\n");
      for (i = 3; i < 6; i++)
         fprintf(stdout, " %c  |", (board[i] == '*') ? 49 + i : board[i]);
      fprintf(stdout, "\n---------------\n");
      for (i = 6; i < 9; i++)
         fprintf(stdout, " %c  |", (board[i] == '*') ? 49 + i : board[i]);
   }
   if (M == 4 && N == 3)
   {
      for (i = 0; i < 3; i++)
         fprintf(stdout, " %c  |", (board[i] == '*') ? 49 + i : board[i]);
      fprintf(stdout, "\n---------------\n");
      for (i = 3; i < 6; i++)
         fprintf(stdout, " %c  |", (board[i] == '*') ? 49 + i : board[i]);
      fprintf(stdout, "\n---------------\n");
      for (i = 6; i < 9; i++)
         fprintf(stdout, " %c  |", (board[i] == '*') ? 49 + i : board[i]);
      fprintf(stdout, "\n---------------\n");
      for (i = 9; i < 12; i++)
         fprintf(stdout, " %c%c |", (board[i] == '*') ? 49 : board[i], (board[i] == '*') ? 39 + i : 255);
      fprintf(stdout, "\n---------------\n");
   }
   fprintf(stdout, "\n\n");
}

int my_move(char *board, char player, int level, int free, float *cost, int M)
{
   char new_board[12];
   if (M == 3)
   {
      strncpy(new_board, board, 9);
   }
   else
   {
      strncpy(new_board, board, 12);
   }

   int op = 0;

   float max_cost = 0;
   float value;
   static int new_move[12] = {0};
   float cost_paths[12] = {0};

   char new_player;
   char winner;
   int i, j = 0;

   for (i = 0; i < free; i++)
   {
      if (i) /*Restart last position */
      {
         new_board[j] = '*';
         value = 0;
      }

      while (new_board[j] != '*')
         j++;

      new_move[i] = j;
      new_board[j] = player;

      winner = win(new_board, M);
      switch (winner)
      {
      case 'o': /* Machine wins */
         value += (1.0/(10^level));
         break;
      case 'x': /* Player wins */
         value -= (1.0/(10^level));
         break;
      case '*': /* Game not over yet, change of player and we explore next move */
         new_player = turn(player);
         my_move(new_board, new_player, level + 1, free - 1, &value, M);
         break;
      };

      if (level == 1) /* Calculating the cost of each path */
      {
         cost_paths[i] = value;
      }
   }

   max_cost = cost_paths[0];
   for (int a = 1; a < 12; a++) /* To get the maximum cost --> best move */
   {
      if (cost_paths[a] > max_cost)
      {
         op = a;
         max_cost = cost_paths[a];
      }
   }
   return new_move[op];
}

void move(char *board, char player, int free, int boardsize)
{
   int i;
   float cost = -1;
   if (player == 'x')
   { /* Your turn */
      do
      {
         fprintf(stdout, "\nChoose a free square: ");
         fscanf(stdin, "%d", &i);
         i--;
      } while (board[i] != '*');
   }
   else
   { /* My turn */
      fprintf(stdout, "\nNow is my turn. Let think perfectly...");
      int M = boardsize / 3;
      i = my_move(board, player, 1, free, &cost, M);
      //i = my_deterministic_move(board, player, free, boardsize);

      fprintf(stdout, " I choose the square %d", i + 1);
   }
   board[i] = player;
}



int main()
{
   int boardsize;
   char *board; /* Board */
   board = new char[9];
   char player; /* Current player */
   int i;
   char winner;
   char key;
   int free; /* No. of free squares */
   int M = 4;

   fprintf(stdout, "\nYour (almost) perfect tic-tac-toe player: ShunyaBOT\n");
   do
   {
      winner = player = '*';

      while (player == '*')
      {
         fprintf(stdout, "\nChoose game mode (3=3x3 board)(4=4x3 board) : ");
         fscanf(stdin, "%d", &M);
         fprintf(stdout, "\nWho starts (1=me)(2=you)? : ");
         fscanf(stdin, "%d", &i);

         switch (i)
         {
         case 1:
            player = 'o';
            break;
         case 2:
            player = 'x';
            break;
         };
         fprintf(stdout, "\nArrived here1");
      }
      boardsize = M * N;

      for (i = 0; i < 9; ++i)
         board[i] = '*';

      fprintf(stdout, "\nArrived here2");

      if (M == 4)
      {
         char *aux = new char[12];
         for (int i = 0; i < 9; i++)
         {
            aux[i] = board[i];
         }
         delete[] board;
         board = aux;
         board[9] = '*';
         board[10] = '*';
         board[11] = '*';
      }
      fprintf(stdout, "\nArrived here3");
      display(board, M);

      for (free = boardsize; ((free > 0) && (winner == '*')); free--)
      {

         move(board, player, free, boardsize);
         display(board, M);
         player = turn(player);
         winner = win(board, M);
      }

      switch (winner)
      {
      case 'o':
         fprintf(stdout, "\n I won effortlessly!\n");
         break;
      case 'x':
         fprintf(stdout, "\n This would be impossible if I was not almost perfect! You won!\n");
         break;
      case '*':
         fprintf(stdout, "\n Draw!\n");
         break;
      };

      fprintf(stdout, "\nAnother (y/n)?");
      fscanf(stdin, "%c", &key);
      fscanf(stdin, "%c", &key);
   } while ((key != 'n') && (key != 'N'));
}
