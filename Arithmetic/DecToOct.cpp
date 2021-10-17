#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,i=0,dig;
    long sum=0;
    cout<<"\n Enter the Decimal number:";
    cin>>n;
    while(n){
        dig=n%8;
        sum+=dig*pow(10,i);
        i++;
        n=n/8;
    }
    cout<<"\n Equivalent Octal number is:"<<sum;

    return 0;
}