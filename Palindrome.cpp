#include <iostream>
#include<vector>
using namespace std;
string is_palindrome(int n)
		{
		    int x=n;
		    int ans=0;
		    while(n>0){
		        ans=ans*10+n%10;
		        n/=10;
		    }
		    return ans==x?"Yes":"No";
		}