#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[]={1,10,11,9,100,4,5,898,32,56,77,22,5};
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n);

    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}
