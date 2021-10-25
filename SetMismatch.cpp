#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {

    int i=0;
    while(i<nums.size()){
        int correctIndex=nums[i]-1;
        if(nums[i]!=nums[correctIndex]){
            swap(nums[i],nums[correctIndex]);
        }
        else{
            i++;
        }
    }
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(nums[i]-1!=i){
            ans.push_back(nums[i]);
            ans.push_back(i+1);
        }
    }
    return ans;
}
int main(){

    vector<int> v{1,2,2,4};
    for(auto x: findDuplicates(v)){
        cout<<x<<endl;
    }

    return 0;
}