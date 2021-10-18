#include<stdio.h>

void rumus_jarak() //Rumus Jarak
{
    int v,w;
    printf("Rumus Jarak\n");
    printf("Masukkan Nilai Kecepatan : ");
    scanf("%d",&v);
    printf("Masukkan Nilai Waktu : ");
    scanf("%d",&w);
    printf("Maka Jaraknya Adalah : %d \n\n",v*w);
}

void luas_persegi() //Luas Persegi
{
    int s;
    printf("Rumus Luas Persegi\n");
    printf("Masukkan Nilai Sisi : ");
    scanf("%d",&s);
    printf("Maka Luasnya Adalah : %d\n\n",s*s);
}

void kubus() //Kubus
{
    int s;
    printf("Rumus Kubus\n");
    printf("Masukkan Nilai Sisi : ");
    scanf("%d",&s);
    printf("Maka Luas Kubus Adalah : %d \n\n",s*s*s);
}

void segitiga() //Luas Segitiga
{
    int a,t;
    printf("Rumus Luas Segitiga\n");
    printf("Masukkan Nilai Alas : ");
    scanf("%d",&a);
    printf("Masukkan Nilai Tinggi : ");
    scanf("%d",&t);
    printf("Maka Luas Segitiga Adalah : %d\n\n",(a*t)/2);
}

int main()
{
    int pilih;
    printf("#################\n");
    printf("Kalkulator Rumus\n");
    printf("#################\n\n");
    printf("Pilih Rumus :\n");
    printf("1.Jarak\n2.Luas Persegi\n3.Kubus\n4.Luas Segitiga\n\n");
    menu : ;
    printf("--------------------\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",&pilih);
    printf("--------------------\n");
    switch(pilih)
    {
        case 1 : rumus_jarak();
        goto menu;
        case 2 : luas_persegi();
        goto menu;
        case 3 : kubus();
        goto menu;
        case 4 : segitiga();
        goto menu;
    }
    return 0;
}
