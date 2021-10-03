#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;

        int maxNum,minNum;
        if(a>=b){
            maxNum=a;
            minNum=b;
        }
        else{
            minNum=a;
            maxNum=b;
        }
        int max= INT16_MIN
        int temp;
        for(int j=minNum;j<=maxNum;j++){
             temp=ceil((b-j)/2.0)+ceil((j-a)/2.0);
            if(temp>max){
                max=temp;
            }
        }
        cout<<max<<endl;
    }


   return 0;
}
