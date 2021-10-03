#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a<b;
}

void bubble_sort(int a[],int n,bool (&cmp)(int a,int b )){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(cmp(a[j+1],a[j])){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){

    int arr[]={1,10,11,9,100,4,5,898,32,56,77,22,5};
    int n=sizeof(arr)/sizeof(int);

    bubble_sort(arr,n,compare);

    for(auto x:arr){
        cout<<x<<" ";
    }


    return 0;
}