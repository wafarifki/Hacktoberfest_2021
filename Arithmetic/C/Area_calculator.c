#include<stdio.h>/*To find the area we must use input for individual in all cases*/
int main()
{
    int ch;
    float l,r;
    printf("1:Area of square\n2:Area of rectangle\n3:Area of circle\n");
    printf("enter choice");//entering the choice from user
    scanf("%d",&ch);
    switch(ch)
    {
       case 1://we used float here as we will get numbers in decimal forms
           printf("Enter side of square:\n");
           scanf("%f",&l);
          
           printf("Area of square with given side is = %.2f",(l*l);
       break;
       case 2:
           printf("Enter sides of rectangle:\n");
           scanf("%f%f",&l,&r);
           
           printf("Area of recatangle with given side is = %.2f",l*r);
       break;
       case 3:
           printf("Enter radius of circle:\n");
           scanf("%f",&r);
        
           printf("Area of circle with given radius is = %.2f",3.14*r*r);
       break;
       default:
           printf("Invalid Input");
    }
    return 0;
}
