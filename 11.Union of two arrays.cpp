int doUnion(int a[], int n, int b[], int m)  {
        
        set<int> s;
        for(int i=0;i<m || i<n;i++){
            if(i<n){
                s.insert(a[i]);
            }
            if(i<m){
                s.insert(b[i]);
            }
        }
        return s.size();
    }