#include<stdio.h>
void mergeSort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
    int lb,ub,a[]={75,-56,-21,32,25,54,9,8};
    int n = sizeof(a)/sizeof(a[0]),i;
    lb = 0;ub = n - 1 ;
    mergeSort(a,lb,ub);
    printf("\nSorted Array : ");
    for(i = 0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}

void mergeSort(int a[],int lb,int ub)
{
  if(lb < ub)
  {
      int mid = (lb + ub)/2;
      mergeSort(a,lb,mid);
      mergeSort(a,mid+1,ub);
      merge(a,lb,mid,ub);
  }

}

void merge(int a[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k = lb;
    int b [ lb + ub + 1];
    while(i<=mid &&j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k] = a[i];i++;k++;
        }
        else
        {  b[k] = a[j];j++;k++;
        }
    }

    if(i>mid)
    {

        while(j<=ub)
        {
            b[k] = a[j];
            j++;k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k] = a[i];i++;k++;
        }

    }
for(k=lb;k<=ub;k++)
a[k]=b[k];
}


