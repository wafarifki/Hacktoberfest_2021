#include<iostream>
using namespace std;

int SumOfNaturalNumber(int n){
    if(n>0){
        return n+(SumOfNaturalNumber(n-1));
    }
}

int main(){
    cout<<SumOfNaturalNumber(3);

    return 0;
}