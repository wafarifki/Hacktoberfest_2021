#include <stdio.h>
int main() {
   int a, b, size;
   
   printf("Enter the size of the pyramid: ");
   scanf("%d", &size);
   
   
   for (a = size; a >= 1; --a) {
      for (b = 1; b <= a; ++b) {
         printf("%d ", b-b);
      }
      printf("\n");
   }
   
   printf("\n Enjoy c: ");
   return 0;
}
