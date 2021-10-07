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
    {
    scanf("%d",&a[i]);
    }
     printf("Enter the elements of array 2: ");
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    int c[n+m];
    for(int i=0;i<n;i++)
    c[i]=a[i];
    int k=n;
    for(int i=0;i<m;i++)
    {
        int t=0;
        for(int j=0;j<n;j++)
        {
           if(b[i]==a[j])
           {
               t=1;
           break;
           }
        }
           if(t==0)
           c[k++]=b[i];
        }
       
       
 printf("The union of the two array is: ");
       for(int i=0;i<k;i++)
       printf("%d ",c[i]);
    
    return 0;
}
