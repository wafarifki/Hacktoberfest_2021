#include<iostream>
using namespace std;

// a+b=k;

int main(){

    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter Value of k ";
    cin>>k;


    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==k){
                cout<<a[i]<<" + "<<a[j]<<"="<<k<<endl;
            }
        }
    }
    return 0;
}