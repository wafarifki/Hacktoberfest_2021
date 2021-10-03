#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[] ={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(int);
    int key=30;

    auto add=find(arr,arr+n,key);

    int index=add-arr;

    if(index==n){
        cout<<"Element not found";
    }
    else    
        cout<<"Element Found";

    
    return 0;

}

