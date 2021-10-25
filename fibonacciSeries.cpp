#include<iostream>
using namespace std;

int f[10];

int fibonacci(int n){
    
    
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1){
            f[n-2]=fibonacci(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=fibonacci(n-1);
        }
        
        return f[n-2]+f[n-1];
    }
}

int main(){
    int i;
    for(i=0;i<10;i++)
        f[i]=-1;

    cout<<fibonacci(5);
    return 0;
}