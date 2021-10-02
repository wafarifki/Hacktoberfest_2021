// Strong number:- A number is said to be strong number when the sum of the factorial of the individual digits is equal to the number. e.g:- 145 is a strong number.
    
// C Program to print strong number in a given range

#include<stdio.h>
int main()
{
int n,i,fact,r,sum=0,temp;
printf("Enter the number:- \n");
scanf("%d",&n);
temp = n;
while(n)
{
i=1,fact=1;
r=n%10;
while(i<=r)
{
fact=fact*i;
i++;
}
sum=sum+fact;
n=n/10;
}
if(sum == temp)
printf("%d is a strong number\n",temp);
else
printf("%d is not a strong number\n",temp);
return 0;
}


/*

Output :- 

Enter the number:-
145
145 is a strong number

*/
