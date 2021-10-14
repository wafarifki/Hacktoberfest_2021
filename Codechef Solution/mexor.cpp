#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
      int m;
      cin>>m;
      bool flag=true;
      int count=0,x=m;
      if(x==0){
      cout<<"1"<<endl;
      continue;
      }
      while(x!=0)
      {
          int l=x%2;
          if(l==0)
          flag=false;
          
          x/=2;
          count++;
      }
     
      if(flag) cout<<m+1<<endl;
       else{
          int sum=0;
          count--;
          while(count--){
              sum+=pow(2,count);
          }
          cout<<sum+1<<endl;
      }
  }
  return 0;
}