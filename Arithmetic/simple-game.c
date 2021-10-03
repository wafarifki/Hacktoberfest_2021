#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main() {

    // Inisialisasi Variable Awal
    int lower = 1, higher = 100, lives = 3;
    int mode;
    char choice[10], cont[10];

    // Permainan akan teruse berlanjut jika pemain memilih untuk lanjut dan jika lives > 0
    while(lives > 0) {
        printf("%s%d%s\n", "Kamu Memiliki Kesempatan Bermain Sebanyak ", lives, "x");
        printf("%s\n", "============================================================");
        // seeder untuk generate angka random
        srand(time(0));
        int num = (rand() % (lower + higher + 1) + lower);

        // pilih mode permainan
        printf("%s\n", "Pilih Mode Permainan");
        printf("%s\n", "1.Tebak Ganjil / Genap");
        printf("%s\n", "2.Tebak Bilangan Prima");
        scanf("%d", &mode);
        printf("%s\n", "============================================================");

        if (mode == 1) {
            // tebak ganjil genap
            printf("%d %s", num, " Tebak Apakah Bilangan ganjil / genap = ");
            scanf("%s", choice);
            
            // jika pilihan tidak valid
            if(strcmp(choice,"genap") != 0 && strcmp(choice,"ganjil") != 0) {
                printf("%s", "Pilihan Kamu Tidak Valid");
            }

            // jika pilihan valid
            if(num % 2 == 1 && strcmp(choice, "ganjil") == 0) {
                // jika pilihan benar
                printf("\n\n%s%d%s\n\n%s\n","Pilihan Kamu Benar  ",num," Adalah Bilangan Ganjil","============================================================");
            } else if(num % 2 == 0 && strcmp(choice, "genap") == 0) {
                // jika pilihan benar
                printf("\n\n%s%d%s\n\n%s\n","Pilihan Kamu Benar ", num," Adalah Bilangan Genap","============================================================");
            }else {
                // jika pilihan salah maka lives(nyawa) akan dikurangi satu
                printf("%s\n","Pilihan Kamu Salah");
                lives -= 1;
            }

            // ingin lanjut bermain ?
            printf("%s", "Apakah Kamu Masih Mau Bermain y/n = ");
            scanf("%s",cont);
            if(strcmp(cont,"y") != 0) {
                break;
            } 
        } else if(mode == 2) {
            // tebak bilangan prima
            int i;
            i = 2;
            char prime[10] = "";
            printf("%d %s", num, " Tebak Apakah Prima y/n = ");
            scanf("%s", choice);

            // proses sistem menentukan bilangan prima atau tidak
            for (; i < num; i++)
            {
                if(num % i== 0) {
                    strcat(prime, "not");
                    break;
                }
            }

            if(strcmp(choice, "y") == 0 && strcmp(prime, "") == 0) {
                // jika jawaban benar (angka random adalah bilangan prima)
                printf("\n\n%s%d%s\n\n%s\n","Pilihan Kamu Benar ", num," Adalah Bilangan Prima","============================================================");
            } else if(strcmp(choice, "n") == 0 && strcmp(prime, "not") == 0) {
                // jika jawaban benar (angka random bukan bilangan prima)
                printf("\n\n%s%d%s\n\n%s\n","Pilihan Kamu Benar ", num," Adalah Bukan Bilangan Prima","============================================================");
            } else {
                // jika jawaban salah maka lives(nyawa) akan dikurangi satu
                printf("%s\n", "Pilihan Kamu Salah");
                lives -=1;
            }

            // lanjut bermain ?
            printf("%s", "Apakah Kamu Masih Mau Bermain y/n = ");
            scanf("%s",cont);
            if(strcmp(cont,"y") != 0) {
                break;
            } 
        }
     }

     // permainan selesai
     printf("%s\n%s%s\n", "============================================================", "Permainan Selesai, Terima Kasih Telah Bermain","============================================================");
    return 0;
}