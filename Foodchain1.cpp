#include<iostream>
#include<cmath>
using namespace std;

void main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int e,k;
        cin>>e>>k;
        int count=1;
        while(floor(e/k)!=0){
            e=floor(e/k);
            count++;
        }
        cout<<count<<endl;
}}
