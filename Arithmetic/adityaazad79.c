#include <stdio.h>

int main()
{
    float a;
    printf("Enter the Celcius \n");
    scanf("%f", &a);
    printf("%.2f", a);
    printf(" degree celcius is equivalent to %.2f degree fahrenheit \n", 9 * a / 5 + 32);

    return 0;
}
