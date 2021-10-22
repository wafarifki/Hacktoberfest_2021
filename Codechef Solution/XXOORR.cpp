#include <iostream>
#include <cmath>

using namespace std;

int numOps(int k,int a[],int n){
    int x=0;
    bool arrayDestroyed=true;

    for(int i=0;i<n;i++){
        if(a[i]%2==1) x++;
        a[i]=a[i]/2;
        if(a[i] !=0) arrayDestroyed=false;
    }

    if (arrayDestroyed) return ceil((double)x/k) ;
    else return ceil((double)x/k)+numOps(k,a,n);
}

int main() {
	// ~your code goes here
	int T=0; cin>>T;
	int n=0,k=0;
	while(T--){
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];

	    cout<<numOps(k,a,n)<<endl;
	    
	}
	return 0;
}