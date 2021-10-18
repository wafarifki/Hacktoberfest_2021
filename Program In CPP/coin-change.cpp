#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long int coinchange(int W,int n)
{
   int a[n];
   int i,w,j;
   unsigned long int K[n][W+1];
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   for(int i=0;i<n;i++)
       for(int j=0;j<=W;j++)
            {
            K[i][j]=0;
   }
   for(i=0;i<=W;i++)
       {
       if(i%a[0]==0)
           K[0][i]=1;
   }
 
   // Build table K[][] in bottom up manner
   for (i = 1; i<n; i++)
       for (w = 0; w <= W; w++)
       {                 
           if (w-a[i]>=0)
                K[i][w] = K[i][w-a[i]] + K[i-1][w];
           else
                 K[i][w] = K[i-1][w];
       }
   return K[n-1][W];
}

int main() {
    
        int n,W;
        scanf("%d %d",&W,&n);
        printf("%lu",coinchange(W,n));
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
