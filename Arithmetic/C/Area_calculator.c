#include<stdio.h>/*To find the area we must use input for individual in all cases*/
int main()
{
    int ch;
    float l,r;
    printf("1:Area of square\n2:Area of rectangle\n3:Area of circle\n");
    printf("enter choice");//entering the choice from user
    float l,b,r,area;
    printf("Select the shape you need to find the area of: \n1: Square\n2: Rectangle\n3: Circle\n4: Triangle\n");
    printf("Enter number: ");
    scanf("%d",&ch);
    
    switch(ch)
    {
       case 1://we used float here as we will get numbers in decimal forms
           printf("Enter the length of a side of square: ");
           scanf("%f",&l);
          
           printf("Area of square with given side is = %.2f",(l*l);           
                  area=l*l;
           printf("Area = %.2f\n",area);
       break;
            
       case 2:
           printf("Enter sides of rectangle:\n");
           scanf("%f%f",&l,&r);
           
           printf("Area of recatangle with given side is = %.2f",l*r);
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
        
           printf("Area of circle with given radius is = %.2f",3.14*r*r);
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
            
  		default:
           printf("Invalid Input");
    }
    return 0;
}
