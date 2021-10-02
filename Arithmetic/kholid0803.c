#include <stdio.h>

int main()
{
    int num1, num2, hasil;

    printf("\n1. Penjumlahan :\n");
    printf("Masukan bilangan pertama : ");
    scanf("%d", &num1);
    printf("Masukan bilangan kedua   : ");
    scanf("%d", &num2);
    hasil = num1 + num2;
    printf("------------------------------- +\n");
    printf("Hasil:\t\t\t   %d\n", hasil);

    return 0;
}