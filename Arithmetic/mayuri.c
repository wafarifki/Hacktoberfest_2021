#include<stdio.h>
int main()
{
	int i;
	int j;
	int c;
	printf("Enter the number\n");
	scanf("%d",&j);
	printf("Multiplication table for %d is:\n",j);
	for(i=0; i<=10; i++)
	{
	  c=i*j;
	  printf("%d*%d=%d \n",i,j,c);
	}
	
    return 0;
}

#OUTPUT:
Enter the number
37
Multiplication table for 37 is:
0*37=0
1*37=37
2*37=74
3*37=111
4*37=148
5*37=185
6*37=222
7*37=259
8*37=296
9*37=333
10*37=370
