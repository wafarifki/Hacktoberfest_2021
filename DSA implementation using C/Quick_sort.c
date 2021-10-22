//Sort the given elements using quick sort.

/*
Example :

 Enter the total number of elements : 6
 Enter the elements : 44 67 23 10 12 3
 Elements in sorted order : 3 10 12 23 44 67
*/

#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
int partition(int a[],int l,int r)
{
    int pivot,start,end,temp;
    pivot=a[l];
    start=l;
    end=r;
    while(start<end)
    {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
            SWAP(a[start],a[end],temp);
    }
    SWAP(a[l],a[end],temp);
    return end;
}
void quick_sort(int a[],int l,int r)
{ int pos;
    if(l<r)
    {
        pos=partition(a,l,r);
        quick_sort(a,l,pos-1);
        quick_sort(a,pos+1,r);
    }
}
void main()
{
   int a[20],n,i;
    printf("\nEnter the total number of elements  :  ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    quick_sort(a,0,n-1);
    printf("\nElements in sorted order : ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
}
