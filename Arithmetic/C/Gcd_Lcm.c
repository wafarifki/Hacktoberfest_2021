#include <stdio.h>
int main()
{
    int a, b, gcd, lcm, min;
    printf("enter the numbers\n");
    scanf("%d %d", &a, &b);
    if (a <= b)
    {
        min = a;
    }
    if (b <= a)
    {
        min = b;
    }
    //printf("%d\n",min);
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    lcm = a * b / gcd;
    printf("the gcd is %d and lcm is  %d ", gcd, lcm);
    return 0;
}