#include <stdio.h>
int main()
{
	int p,m,c,tm;
	float per;
	printf("Enter Marks in physics,Math,and chemistry:");
	scanf("%d %d %d",&p,&m,&c);
	printf("In physics your marks is %d out of 100",p);
	printf("\nIn chemistry your marks is %d out of 100",c);
	printf("\nIn math your marks is %d out of 100",m);
	tm=p+c+m;
	per=(p+c+m)/300.0*100;
	printf("\nyour total marks out of 300 is %d",tm);
	printf("\n Your percentage is %.2f",per);
}
