/* File :aritmatika.c */
/* Penulis : Rikky Arisendi */
/* Operasi aritmatika bilangan integer dan bilangan riil : 
   Menuliskan jumlah, hasil perkalian, pembagian, modul
dua buah variabel integer */
#include<stdio.h>
int
main()
{/* kamus */
int x=4;
int y=3;
/* Program */
printf ("ini nilai x+y :%d\n", x+y) ;
printf ("ini nilai x-y :%d\n", x-y) ;
printf ("ini nilai x*y :%d\n", x*y) ;
printf ("ini nilai x/y :%d\n", x/y) ;
printf ("ini nilai y/x :%d\n", y/x) ;
printf ("ini nilai x mod y :%d\n",x%y) ;

/* bandingkan dengan Operasi pembagian bilangan riil */
float a=4,b=3;
printf ("ini nilai a/b :%5.2f\n",a/b);/* variabel a/b akan ditampilkan sebanyak 5 digit dengan 2 digit di belakang koma */ 
printf ("ini nilai b/a :%5.2f\n",b/a);/* veriabel b/a akan ditampilkan sebanyak 5 digit dengan 2 digit di belakang koma */

return 0;
}