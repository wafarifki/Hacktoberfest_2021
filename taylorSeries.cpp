#include<iostream>
using namespace std;

int e(int x,int n){
    static s=1;
    if(n==0){
        return 1;
    }
    s=1+(x/n)*s;
    return e(x,n-1);
}


int main(){


    return 0;
}