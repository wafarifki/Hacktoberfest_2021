/*  If an even numbr of people stand in a circle and get numbered clockwise, everyone is facing someone else through the centre of the circle i.e. opposite to the prior. 

This program will output the 'number' of the person who is being looked at by 'c' if 'a' is looking at 'b'. But in some cases it is not possible. It will output "-1" in those cases.  */

// Program by Archana Nayak
#include <bits/stdc++.h>
using namespace std;

int main(){

    // a is looking at b. Who is c looking at?
    int a,b,c;
    cin>>a>>b>>c;

    int n = 2*(abs(b-a));
    float q = ((float)max(a,b))/(float)2;
    
    // program logic steps
    if(abs(b-a)>=q){
        if (c<=n){
            int op1 = c+n/2;
            int op2 = c-n/2;
            if(op2>0)
                cout<<c-n/2<<"\n";
            else if(op1<=n)
                cout<<c+n/2<<"\n";
            else
                cout<<-1<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
    else
        cout<<-1<<"\n";
    return 0;
}