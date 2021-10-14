#include<stdio.h>/*To find the area we must use input for individual in all cases*/
int main()
{
    int ch;
    float l,r,area;
    printf("1:Area of square\n2:Area of rectangle\n3:Area of circle\n");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1://we used float here as we will get numbers in decimal forms
           printf("Enter side of square:\n");
           scanf("%f",&l);
           area=l*l;
           printf("Area of square with given side is = %.2f",area);
       break;
       case 2:
           printf("Enter sides of rectangle:\n");
           scanf("%f%f",&l,&r);
           area=l*r;
           printf("Area of recatangle with given side is = %.2f",area);
       break;
       case 3:
           printf("Enter radius of circle:\n");
           scanf("%f",&r);
           area=3.14*r*r;
           printf("Area of circle with given radius is = %.2f",area);
       break;
       default:
           printf("Invalid Input");
    }
    return 0;
}
