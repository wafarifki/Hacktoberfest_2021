#include<stdio.h>

int main()
{
    
    int x, y, add, subtract, multiply;
    float divide;

    printf("Enter two integers: \n");
    scanf("%d%d", &x, &y);

    add = x+y;
    subtract = x-y;
    multiply = x*y;
    divide = x/y;

    printf("\nAddition of the numbers = %d\n", add);
    printf("Subtraction of 2nd number from 1st = %d\n", subtract);
    printf("Multiplication of the numbers = %d\n", multiply);
    printf("Dividing 1st number from 2nd = %f\n", divide);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}