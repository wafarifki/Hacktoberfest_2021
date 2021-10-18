pair<long long, long long> getMinMax(long long arr[], int n) {
    
    pair<long long,long long>p;
    
    p.first=INT_MAX;
    p.second=INT_MIN;
    
    for(long long int i=0;i<n;i++){
        if(arr[i]>p.second){
            p.second=arr[i];
        }
        if(arr[i]<p.first){
            p.first=arr[i];
        }
    }
    return p;
    
}