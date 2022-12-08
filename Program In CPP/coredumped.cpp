#include <iostream>
using namespace std;
 
int main()
{
   char *str;
 
   /* Stored in read only part of data segment */
   str = "GfG";    
 
   /* Problem:  trying to modify read only memory */
   *(str + 1) = 'n';
   return 0;
}