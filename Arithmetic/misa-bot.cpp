//SOLUTION FOR "TWO SUM" question
//To find two numbers in array who can form the target sum
//Three approaches discussed

#include<bits/stdc++.h>
using namespace std;

//Checking each element for its corresponding sum partner to equate to target sum.
//Non Optimized approach using two for loops.
//Time: O(N^2)
//Space:O(1)
void targetSum1(vector<int> arr, int target)
{
    int sz=arr.size();
    vector<int> ans;
    for(int i=0;i<sz;i++)
    {
        for(int j=i+1;j<sz;j++)
        {
            if(arr[i]+arr[j]==target) {ans.push_back(arr[i]); ans.push_back(arr[j]);}
        }
    }
    cout<<"Approach 1: ";
    for(int i=0;i<ans.size();i++){cout<<ans[i]<<", ";}
    cout<<endl;
}

//Hash map approach used to find corresponding complement in existing elements else add to the map
//Time Optimized approach
//Time: O(N)
//Space: O(N)
void targetSum2(vector<int> arr, int target)
{
    map<int,int> mp;
    vector<int> ans;
    int sz=arr.size();
    for(int i=0;i<sz;i++)
    {
        map<int,int>:: iterator it;
        it=mp.find(target-arr[i]);
        if(it!=mp.end()){
            ans.push_back(arr[i]);
            ans.push_back(it->first);
        } else{
            mp.insert({arr[i],i});
        }
    }
    cout<<"Approach 2: ";
    for(int i=0;i<ans.size();i++){cout<<ans[i]<<", ";}
    cout<<endl;
}

//Sorting the array and then traversing using left and right pointers, one from start and one from end.
//If sum<target, increment left ptr
//If sum>target, decrement right ptr
//Most Optimized Approach
//Time:O(NlogN)
//Space:O(1);
void targetSum3(vector<int> arr, int target)
{
    vector<int> arr1=arr;
    vector<int> ans;
    int sz=arr.size();
    sort(arr1.begin(),arr1.end());
    int lft=0;
    int rt=sz-1;
    while(ans.empty())  //while(lft<rt) should be the correct approach but getting "terminate called after throwing an instance of bad_alloc".
    {
        if(arr1[lft]+arr1[rt]==target){ans.push_back(arr1[lft]); ans.push_back(arr1[rt]);}
        if(arr1[lft]+arr1[rt]>target){rt-=1;}
        else if(arr1[lft]+arr1[rt]<target){lft+=1;}

    }

    cout<<"Approach 3: ";
    for(int i=0;i<ans.size();i++){cout<<ans[i]<<", ";}
    cout<<endl;
}

int main()
{
    vector<int> arr;
    int target=10;
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(-4);
    arr.push_back(8);
    arr.push_back(11);
    arr.push_back(1);
    arr.push_back(-1);
    arr.push_back(6);
    targetSum1(arr,target);
    targetSum2(arr,target);
    targetSum3(arr,target);
    return 0;
}
