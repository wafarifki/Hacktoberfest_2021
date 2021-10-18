#include <iostream>
#include<vector>
using namespace std;
int find_median(vector<int> v)
		{
		    
		    if(v.size()==1)
		        return v[0];
		    if(v.size()==2)
		        return (v[0]+v[1])/2;
		    
		    sort(v.begin(),v.end());
		    if(v.size()&1){
		        return v[v.size()/2];
		    }
		    else{
		        return (v[v.size()/2-1]+v[(v.size()/2)])/2;
		    }
		}