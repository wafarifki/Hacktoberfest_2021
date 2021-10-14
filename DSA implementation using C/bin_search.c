//Program for Recursive Binary Search

#include<stdio.h>

int binary(int arr[], int low, int high, int key);

int main()
{
    int n, key, result = 0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    result = binary(array, 0, n-1, key);
    (result == -1) ? printf("Element %d not found in the array\n", key)
                   : printf("Element %d found at the index %d",key, result); 
    return 0;
}

int binary(int arr[], int low, int high, int key)
{
    if(high < low)
        return -1;
    int mid = (low + high)/2;
    if(arr[mid] == key)
        return mid;
    else if(arr[mid] > key)
        binary(arr, low,  mid-1, key);
    else
        binary(arr, mid+1, high, key);
}