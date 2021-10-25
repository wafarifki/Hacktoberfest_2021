//Program to implement Selection Sort

#include<stdio.h>
#include<time.h>

int sel_sort(int arr[], int size);
void swap(int *x, int *y);

int main()
{
    time_t begin = time(NULL);
    int n, count = 0;
    printf("Enter the number of the elements in the array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    count = sel_sort(array, n);
    printf("The array after sorting is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nCount = %d\n",count);
    time_t end = time(NULL);
    printf("Total time taken is %d seconds.",(end - begin));
    return 0;
}

int sel_sort(int arr[], int size)
{
    int i, j, min_idx, count = 0;
    for (i = 0; i < size-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < size; j++)
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
                count++;
            }
        swap(&arr[min_idx], &arr[i]);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}