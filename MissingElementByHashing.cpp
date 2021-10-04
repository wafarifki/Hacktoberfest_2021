#include<iostream>
 using namespace std;

 int main(){
     int n;
     cout<<"Enter number of element in an array";
     cin>>n;
     int arr[n];
     int max=-1,min=1000000;
     for(int i=0;i<n;i++){
         cin>>arr[i];
         if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
     }
        int h[max+1]={0};
        for(int i=0;i<n;i++){
            h[arr[i]]++;
        }
        for(int j=1;j<=max;j++){
            if(h[j]==0){
                cout<<"Missing Element is "<<j<<endl;
            }
        }

     return 0;
 }