#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;
        
        for(auto x: nums){
            if(x==0)
                count0++;
            else if(x==1)
                count1++;
            else
                count2++;
        }
        int i=0;
        while(count0--){
            nums[i]=0;
            i++;
        }
        while(count1--){
            nums[i]=1;
            i++;
        }
        while(count2--){
            nums[i]=2;
            i++;
        }
    }
};