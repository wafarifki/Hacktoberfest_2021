#include<stdio.h>
int main(){

int n1=0;
int n2=1;
int n3;
int i;
int n;
printf("Enter the nth value: ");
scanf("%d", &n);

if (n==0){printf("%d", n);}else if (n==1){printf("%d", n);}else if(n>=0){
printf("%d %d ",n1,n2);

for (i=2; i<n; i++){
    n3=n1+n2;
    printf("%d ",n3);
    n1=n2;
    n2=n3;

}
}else
    printf("Invalid Input");
return 0;
}


