//binary search program, given array should be sorted (in ascending or desending order)
#include<stdio.h>
int binarysearch(int A[],int l,int r,int x);
int main(){
	int A[]={11,22,33,44,55};
	int x=11;
	int n=sizeof(A)/sizeof(int);
	int pos= binarysearch(A,0,n-1,x)+1;
	pos==0?printf("\n Not found"): printf("\n Found at %d",pos);
	return 0;
}
int binarysearch(int A[],int l,int r,int x){//l is left and r is right 
    	if(r>=l){
		int m=(r+l)/2;// m is mid
		if(x==A[m]) return m;
		if(x<A[m]) return binarysearch(A,l,m-1,x);
		else return binarysearch(A,m+1,r,x);
	}
	return -1;
}
