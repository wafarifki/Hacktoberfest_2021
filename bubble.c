#include<stdio.h>
void bubble_sort(int[],int);

void bubble_sort(int a[],int n)
{
	int i,j;
	int temp;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int a[100],i,n;
	printf("enter size of an array:\n");
	scanf("%d",&n);
	printf("enter elemwnts of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		
	
	bubble_sort(a,n);
	printf("array after sort:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
	
}
