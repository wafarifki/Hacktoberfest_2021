#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int prime[800000]; //prime in index

//Sieve algorithm
void sieve(int n){
    bool arr[n+1];
    memset(arr, true, sizeof(arr));
    for(int i=2;i*i<=n;i++){
        if(arr[i] == true){
            for(int j=i*i; j<=n; j+=i){
                arr[j] = false;
            }
        }
    }
    int idx = 1;
    for(int i=2; i<=n;i++){
        if(arr[i]){
            prime[idx] = i;
            idx++;
        }
    }
}


int main()
{
    sieve(1000000); //initialization prime in range 2-n
    int K;
    cin >> K; //search prime to K
    cout << prime[K] << endl; //output

    return 0;
}
