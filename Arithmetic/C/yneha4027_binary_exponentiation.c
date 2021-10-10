#include<stdio.h>


// This function takes a and b and return a^b ( a raise to power b)

long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b & 1)
           result =result * a;
        a = a * a;
        b >>= 1;
    }
    return result;
}

int main(){
    long long a,b;

     printf("please enter a : ");
     scanf("%ld",&a);
     printf("please enter b : ");
     scanf("%ld",&b);

    long long result=power(a,b);
    printf("%ld power %ld is %ld",a,b,result);



}
