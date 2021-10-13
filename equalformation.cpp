#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int high=0;
        map<long long ,int> m;
        for(int i=0;i<n;i++){
            long long  x;
            cin>>x;
            m[x]++;
            high=max(high,m[x]);
        }
        int ans=0;
        if(n>2){
            if(high==1) ans=n-2;
            else ans=n-high;
        }
        cout<<ans<<endl;
    }
    return 0;
}