#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& arr){
    int n=arr.size();
    int temp=n*(n+1)/2;
    for(int x:arr){
        temp-=x;
    }
    return temp;
}

int main(){

    vector<int> v{3,0,1};

    cout<<missingNumber(v)<<endl;
    return 0;
}