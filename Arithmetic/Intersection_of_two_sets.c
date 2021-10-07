/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
 int n;
 int m;
  printf("Enter the no. elements i array 1 and array 2: ");
 scanf("%d %d",&n,&m);
 int a[n];
 int b[m];
   printf("Enter the elements of array 1: ");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
   printf("Enter the elements of array 2: ");
 for(int i=0;i<m;i++)
 scanf("%d",&b[i]);
int c[n];
int k=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i]==b[j])
        {
            c[k++]=a[i];
            break;
        }
    }
}
printf("The intersection of the two array is: ");
for(int i=0;i<k;i++)
printf("%d",c[i]);
    return 0;
}

