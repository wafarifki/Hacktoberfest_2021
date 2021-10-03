#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(int a,int b){
    return a<=b;
}

int main(){

    int coins[]={1,2,5,10,20,50,100,500,2000};
    int n=sizeof(coins)/sizeof(int);
    int money=1;

    while(money>0){
    int moneyIndex=lower_bound(coins,coins+n,money,comparator)-coins-1;
    int m=coins[moneyIndex];
    cout<<m<<" ";
    money-=m;
    }

    return 0;
}