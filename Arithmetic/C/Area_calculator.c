#include<stdio.h>/*To find the area we must use input for individual in all cases*/
int main()
{
    int ch;
    float l,b,r,area,l2;
    printf("Select the shape you need to find the area of: \n1: Square\n2: Rectangle\n3: Circle\n4: Triangle\n5: Trapezium\n");
    printf("Enter number: ");
    scanf("%d",&ch);
    
    switch(ch)
    {
       case 1://we used float here as we will get numbers in decimal forms
           printf("Enter the length of a side of square: ");
           scanf("%f",&l);
           area=l*l;
           printf("Area = %.2f\n",area);
       break;
            
       case 2:
           printf("Enter length of rectangle: ");
           scanf("%f",&l);
           printf("Enter breadth of rectangle: ");
           scanf("%f",&b);
           area=l*b;
           printf("Area = %.2f\n",area);
       break;
            
       case 3:
           printf("Enter radius of circle: ");
           scanf("%f",&r);
           area=3.14*r*r;
           printf("Area = %.2f\n",area);
       break;
            
       case 4:
		printf("Enter length of the base of rectangle: ");
           	scanf("%f",&l);
           	printf("Enter height of rectangle: ");
           	scanf("%f",&b);
           	area=(l*b)/2;
           	printf("Area = %.2f\n",area);
		break;
	
	case 5:
		printf("Enter length of the first base of trapezium: ");
           	scanf("%f",&l);
		printf("Enter length of the second base of trapezium: ");
           	scanf("%f",&l2);
           	printf("Enter height of the trapezium: ");
           	scanf("%f",&b);
		area={l+l2}*h/2;
		printf("Area = %.2f\n",area);
		break;
		
  	default:
           printf("Invalid Input");
    }
    return 0;
}
