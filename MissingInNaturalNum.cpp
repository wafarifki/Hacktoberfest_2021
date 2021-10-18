#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter total number of elements";
    cin>>n;
    int a[n];
    int s=(n+2)*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Missing Element is "<<s-sum<<endl;    
    return 0;
}