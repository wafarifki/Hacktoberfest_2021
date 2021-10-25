#include<stdio.h>
int main()
{
	int c = 1;
    while(c <= 100)
    {
    	if(c%15 == 0)
        {
        printf("FizzBuzz\n");
        }
        else if(c%3 == 0)
        {
        printf("Fizz\n");
        }
        else if(c%5 == 0)
        {
        printf("Buzz\n");
        }
        else
        {
        printf("%d\n",c);
        }
        c++;
    }
    return (0);
}
	
