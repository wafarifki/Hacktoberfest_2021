/*C program to count white spaces in the given sentence.*/

#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i;
int l;
int count=0;
printf("Enter the string:\n");
gets(str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]==' ')
{
count++;
}
}
printf("The count of white spaces in the given sentence = %i\
n",count);
}
