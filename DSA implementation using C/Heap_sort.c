//Sort the given elements using heap sort

/*
Example :

 Enter the total number of elements : 6
 Enter the elements : 44 67 23 10 12 3
 Elements in sorted order : 3 10 12 23 44 67
*/

#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
void heapify(int a[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;
    if (left < n && a[left] > a[largest])
      largest = left;

    if (right < n && a[right] > a[largest])
      largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      SWAP(a[i], a[largest],temp);
      heapify(a, n, largest);
    }
  }
void heap_sort(int a[],int n)
{ 
      int i,temp;
      for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
      for (int i = n - 1; i >= 0; i--) {
        SWAP(a[0], a[i],temp);
        heapify(a, i, 0);
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
    heap_sort(a,n);
    printf("\nElements in sorted order : ");
    for(i=0;i<n;i++)
       printf("%d\t",a[i]);
    printf("\n");
}
