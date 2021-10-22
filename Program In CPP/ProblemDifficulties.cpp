#include<iostream>
using namespace std;

int main(){

    int testCases;
    cin>>testCases;

    int arr[4];
    int max=-1;

    for(int i=0;i<testCases;i++){

        for(int j=0;j<4;j++){
            cin>>arr[j];
            if(arr[j]>max){
                max=arr[j];
            }
        }
        int hash[max+1]={0};
        
        for(int k=0;k<4;k++){
            hash[arr[k]]++;
        }
        int unsimilarCount=0;
        int doubleValueCounter=0;
        for(int p=0;p<=max;p++){
            if(hash[p]==1){
                unsimilarCount++;
            }
            if(hash[p]==2){
                doubleValueCounter++;
            }
        }
        if(unsimilarCount==4 || unsimilarCount==2 ||(unsimilarCount==0 && doubleValueCounter==2)){
            cout<<"2"<<endl;
        }
        else if(unsimilarCount==1){
            cout<<"1"<<endl;
        }
        else if(unsimilarCount==0){
            cout<<"0"<<endl;
        }
        

    }

    return 0;
}
