#include<stdio.h>
 int mat1[1111][1111],mat2[1111][1111],sum[1111][1111],r,c;
int main()
{

    printf("How many rows?\n=");
    scanf("%d",&r);
    printf("How many columns?\n=");
    scanf("%d",&c);
    printf("Insert values for matrix 1:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        scanf("%d",&mat1[i][j]);
        }
    }

    printf("Insert values for matrix 2:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        scanf("%d",&mat2[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("summation of matrix 1 and 2 is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
