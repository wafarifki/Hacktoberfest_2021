#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0){
            return "";
        }
        string ans="";
        string s=*min_element(strs.begin(),strs.end());

        for(int i=0;i<s.size();i++){
            for(int j=0;j<strs.size();j++){
                if(s[i]!=strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(s[i]);
        }
        return ans;
    }

    int main(){
        
            vector<string> s;
            s.push_back("flower");
            s.push_back("flight");
            s.push_back("flow");
            cout<<longestCommonPrefix(s)<<endl;

        return 0;
    }