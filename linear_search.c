#include<stdio.h>
#include<stdlib.h>
void  input(int array[], int size )
{
   printf("Enter the size of the array\n");
   scanf("%d",&size);
   printf("Enter the elemts in array\n");
   for(int i=0; i<size ; i++)
   {
     scanf("%d",&array[i]);
   }
 
   
    int temp = 0; 
    int element; 
    for(int i=0; i<size ; i++ )
    {
      printf("%d ",array[i]);   
    }
    
    printf("\n");
    printf("Enter the element to search in array\n");
    scanf("%d",&element);
    for(int i=0; i<size ; i++ )
    {
       if(element = array[i])
       {
          temp=1;
       }
       else
       {
         continue;
       }
    }
  if(temp)
  {
    printf("found element\n");
  }
  else
  {
     printf("Not found\n");
  }
}


void main()
{
   int array[100] , size ;
   input(array,size);   
   
}
