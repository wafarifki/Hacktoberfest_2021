#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,c,d,e;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d>>e;
    
    vector<int> arr;
    arr.push_back(a+b);
    arr.push_back(b+c);
    arr.push_back(c+a);
    int tempIndex=-1;
    int max=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=d && arr[i]>max){
            max=arr[i];
            tempIndex=i;
        }
    }
    if(tempIndex==0)
        {
            if(c<=e){
                cout<<"YES";
            }
            else
                cout<<"NO";
        }
    else if(tempIndex==1)
        {
            if(a<=e){
                cout<<"YES";
            }
            else
                cout<<"NO";
        }
    else if(tempIndex==2)
        {
            if(b<=e){
                cout<<"YES";
            }
            else
                cout<<"NO";
        }
    }

    return 0;
}