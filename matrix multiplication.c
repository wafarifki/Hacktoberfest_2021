/*
Author: Chamod Dananjaya
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **matrix1;
    int **matrix2;
    int **output;
    int r1,r2,c1,c2;

    printf("\tEnter your matrix size,\n\nfirst matrix,\n");
    printf("\trows: ");
    scanf("%d",&r1);
    printf("\tColumns: ");
    scanf("%d",&c1);



    matrix1 = malloc(sizeof(int *)*r1);

    printf("\nEnter data here!\n");
    for(int i=0; i<r1; i++){
        matrix1[i] = malloc(sizeof(int *)*c1);
        for(int j=0; j<c1; j++){
            printf("\t-> ");
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nSecond matrix\n");
    printf("\trows: ");
    scanf("%d",&r2);
    printf("\tColumns: ");
    scanf("%d",&c2);

    matrix2 = malloc(sizeof(int *)*r2);
    printf("\nEnter data here!\n");
    for(int i=0; i<r2; i++){
        matrix2[i] = malloc(sizeof(int *)*c2);
        for(int j=0; j<c2; j++){
            printf("\t-> ");
            scanf("%d",&matrix2[i][j]);
        }
    }
    if(c1==r2){
        printf("\n-----------------------------------------------------");
        printf("\n\tMatrxi1\n");
        printf("-----------------------------------------------------\n");

        for(int i=0; i<r1; i++){
            printf("\t");
            for(int j=0; j<c1; j++){
                printf("%d ",matrix1[i][j]);
            }
            printf("\n");
        }

        printf("\n-----------------------------------------------------");
        printf("\n\tMatrxi2\n");
        printf("-----------------------------------------------------\n");

        for(int i=0; i<r2; i++){
            printf("\t");
            for(int j=0; j<c2; j++){
                printf("%d ",matrix2[i][j]);
            }
            printf("\n");
        }


        output = malloc(sizeof(int *)*r1);
        for(int i=0; i<r1; i++){
            output[i] = malloc(sizeof(int *)*c2);
        }

        int sum=0;
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                for(int k=0; k<r2; k++){
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                output[i][j] = sum;
                sum=0;
            }
        }

        printf("\n-----------------------------------------------------");
        printf("\n\tResultant matrix");
        printf("\n-----------------------------------------------------\n");
        for(int i=0; i<r1; i++){
            printf("\t");
            for(int j=0; j<c2; j++){
                printf("%d ",output[i][j]);
            }
            printf("\n");
        }
        printf("-----------------------------------------------------\n");
        }
    else{
        printf("\nNon compatible matrices!\n");
    }

}
