//Link  https://practice.geeksforgeeks.org/problems/nth-natural-number/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
    	long long findNth(long long N)
    {long long res=0;
    long long p=1;
        while(N>0){
        res+=(p*(N%9));
         N=N/9;
        p=p*10;}
        return res;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}
