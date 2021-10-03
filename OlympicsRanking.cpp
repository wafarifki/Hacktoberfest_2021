#include<iostream>
using namespace std;

int main(){

    int testCase;
    cin>>testCase;
    int arr[6];
    for(int j=0;j<testCase;j++){
    int score1=0;
    int score2=0; 
    for(int i=0;i<6;i++){
        cin>>arr[i];
        if(i<=2){
            score1+=arr[i];
        }
        else
            score2+=arr[i];
    }
    if(score1>score2) cout<<"1"<<endl;
    else cout<<"2"<<endl;
}

    return 0;
}