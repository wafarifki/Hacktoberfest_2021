//By Raya513

#include <iostream>
using namespace std;

void prime(int n)
{
    int count=1;
    if(n==1)
    {
        cout<<"The 1st prime element is = "<<2;
    }
for(int j=3;j<1000;j++)
{
    int flag=0;
 for(int i=2;i*i<=j;i++) 
 {
     if(j%i==0)
     {
         //cout<<"not prime"<<endl;
         flag=1;
         break;
     }
 }
 if(flag==0)
 {
  count++;   
 }
 if(count==n)
 {
  cout<<"The "<<n<<"th prime element is = "<<j<<endl;  
 break;
 }
}
}

int main()
{
int n;
cout<<"enter the value of n "<<endl;
cin>>n;
prime(n);
    return 0;
}
