//A number guessing game by Akshat Pandey
#include <stdio.h>

int main()
{
    int num, guess, tries = 0;
    srand(time(0));  //random function call
    num = rand() % 100 + 1;   //to choose number from 1 to 100
    printf("Guess My Number Game\n\n");

    do
    {
        printf("Enter your guess (1-100) : ");
        scanf("%d", &guess);
        tries++;
        if (guess > num)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        }
		
    }while (guess != num);

    return 0;
}