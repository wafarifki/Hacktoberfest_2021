#include <iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int col=matrix[0].size();
        int row=matrix.size();
        vector<int> a(row,-1);
        vector<int> b(col,-1);
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    a[i]=0;
                    b[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(a[i]==0|| b[j]==0)
                    matrix[i][j]=0;
            }
        }
        
    }