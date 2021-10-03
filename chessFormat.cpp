#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;

        if((a+b)>60)
            cout<<4<<endl;
        else if ((a+b)>=11)
            cout<<3<<endl;
        else if((a+b)>=3)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}