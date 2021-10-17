#include <bits/stdc++.h>
using namespace std;
void generateLatinSquare(int n) {
   int mid = n + 1;
   for (int i = 1; i <= n; i++) {
      int temp = mid;
      while (temp <= n) {
         cout << temp << " ";
         temp++;
      }
      for (int j = 1; j < mid; j++) {
         cout << j << " ";
      }
      mid--;
      cout << endl;
   }
}
int main(void) {
   generateLatinSquare(2);
   cout << endl;
   generateLatinSquare(3);
   cout << endl;
   generateLatinSquare(4);
   cout << endl;
   return 0;
}