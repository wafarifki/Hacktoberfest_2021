#include<iostream>
#include<vector>
using namespace std;

bool valid(vector<vector<int>> mat,int i,int j,int k,int n){
    //check for row and column
    for(int m=0;m<n;m++){
        if(mat[i][m]==k || mat[m][j]==k)
            return false;
    }

    //check in subgrid
    int gx=(i/3)*3,gy=(j/3)*3;

    for(int x=gx;x<gx+3;x++){
        for(int y=gy;y<gy+3;y++){
            if(mat[x][y]==k)return false;
        }
    }

    return true;
}


bool sudokusolver(vector<vector<int> > mat,int i,int j,int n){
    if(i==n) {
        
        for(int x=0;x<n;x++){
            for(int y=0 ;y<n;y++){
                cout<<mat[x][y]<<" ";
            }
            cout<<"\n";
        }
        return true;
    }
    if(j==n)
        return sudokusolver(mat,i+1,0,n);
    if(mat[i][j]!=0)
        return sudokusolver(mat,i,j+1,n);
    for(int k=1;k<=9 ;k++){
        if(valid(mat,i,j,k,n)){
            mat[i][j]=k;
            bool res=sudokusolver(mat,i,j+1,n);
            if(res==true) return true;
        }
    }
    mat[i][j]=0;
    return false;
}
int main(){
    int n=9;
    vector<vector<int>> mat={
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    if(!sudokusolver(mat,0,0,n)){
        cout<<"No soln";
    }



    return 0;
}
