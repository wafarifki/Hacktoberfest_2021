#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    
}
 
int main()
{
    const int MOD=1e9+7;
    const int N=1e5+2;
    int arr[N];
    arr[1]=1;
    for(int i=2; i<N; i++)
    {
        arr[i]=(arr[i-1]*2)%MOD;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    cout<<arr[n]<<endl;
    }
}