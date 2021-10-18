#include<iostream>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right){
    int i,j,k;
    int inv_count=0;

    i=left; //i is index of left part of subarray
    j=mid; //j is index of right part of subarray
    k=left;//k is index for resultant merged sub array

    while((i<=mid-1)&& (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];

            inv_count =inv_count+mid-1;
        }
    }
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }

    for(i=left;i<=right;i++){
        arr[i]=temp[i];
    }

    return inv_count;

}


int mergeSort(int arr[],int temp[],int left,int right){
    int mid,inv_count=0;
    if(left<right){

        mid=(left+right)/2;

        inv_count+=mergeSort(arr,temp,left,mid);
        inv_count+=mergeSort(arr,temp,mid+1,right);
        inv_count+=merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}


int main(){

    int arr[]={5,3,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int temp[n];

    int ans = mergeSort(arr,temp,0,n-1);
    cout<<ans<<endl;


    return 0;
}